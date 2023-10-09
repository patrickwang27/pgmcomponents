"""
gui_widgets.py

Provides a set of widgets for use in the GUI.

Author: Patrick Wang
Email: patrick.wang@diamond.ac.uk
Date: 2023-10-05

"""
import numpy as np
import PySimpleGUI as sg
from components import *
from light import calc_beam_size
import traceback

class EPICScontrol(object):
    """
    A EPICS like control widget.

    Attributes
    ----------
    name : str
        The name of the control.
    value : float
        The default value of the control
    increments: float
        The default increment value of the control.
    key : str
        The key of the control.

    Methods
    -------
    up(window)
        Add increment to value
    down(window)
        Subtract increment from value
    
    """

    def __init__(self, name, value, increments, key):
        self.name = name
        self.value = value
        self.increments = increments
        self.key = key
        button_image=b'\x89PNG\r\n\x1a\n\x00\x00\x00\rIHDR\x00\x00\x00\x01\x00\x00\x00\x01\x08\x06\x00\x00\x00\x1f\x15\xc4\x89\x00\x00\x00\rIDATx\x9cc````\x00\x00\x00\x05\x00\x01\xa5\xf6E@\x00\x00\x00\x00IEND\xaeB`\x82'

        layout = [[sg.Button(button_text='―', key=f"{key}_down", font=('Arial', 10),image_data=button_image, image_size=(20,30)),
                   sg.Column([[sg.Input(default_text=value, key=f"{key}", size=(8,1), font=('Arial', 14),justification='center')],
                              [sg.HorizontalSeparator()],
                              [sg.Push(), sg.Input(default_text=increments, key=f"{key}_inc", size=(8,1),justification='center'), sg.Push()]]),
                              sg.Button(button_text='+',font=('Arial', 16),image_data=button_image, image_size=(20,30), auto_size_button=False,key=f"{key}_up")],
                ]
        self.frame = sg.Frame(title=name, layout=layout)

        self.properties = {'-ENERGY-':'energy', '-CFF-':'cff', '-ORDER-':'grating.order', '-LINE_DENSITY-':'grating.line_density'}

        return

    def up(self, window, pgm):
        """
        Add increment to value, needs the window object to update the value.
        """
        window[self.key].update(value=round(float(window[self.key].get()) + float(window[f"{self.key}_inc"].get()), ndigits=3))
        exec(f"pgm.{self.properties[self.key]} = window[self.key].get()")
        return
    
    def down(self, window, pgm):
        """
        Subtract increment from value. Needs the window object to update the value.
        """
        window[self.key].update(value=round(float(window[self.key].get()) - float(window[f"{self.key}_inc"].get()), ndigits=3))
        exec(f"pgm.{self.properties[self.key]} = window[self.key].get()")
        return
    
    def update(self, window):
        """
        Update the value of the control.
        """
        window[self.key].update(value=self.value)
        exec(f"pgm.{self.properties[self.key]} = window[self.key].get()")
        return
    
    def update_inc(self, window):
        """
        Update the increment of the control.
        """
        window[f"{self.key}_inc"].update(value=self.increments)
        return
    
    


def configuration_popup(title, key, element):
    """
    Creates a popup window for configuration of Plane_Mirror or Grating.

    Parameters
    ----------
    title : str
        The title of the popup window.
    key : str
        The key of the element.
    element : Plane_Mirror or Grating
        The element to configure. Either 'Plane_Mirror' or 'Grating'.
    
    Returns
    -------
    values : dict
        A dictionary of values for the element.

    """
    length, width, height = element.dimensions
    sagittal_borders = element.borders[0]
    tangential_borders = element.borders[2]
    layout = [[
    [sg.Column([[sg.Text('Length')], 
                [sg.Text('Width')], 
                [sg.Text('Height')],
                [sg.HorizontalSeparator()], 
                [sg.Text('Sagittal Borders')], 
                [sg.Text('Tangential Borders')]]),

    sg.Column([[sg.Input(key=f'{key}_length', size=(10,1),default_text=length)], 
               [sg.Input(key=f'{key}_width', size=(10,1), default_text=width)], 
               [sg.Input(key=f'{key}_height', size=(10,1), default_text=height)],
               [sg.HorizontalSeparator()], 
               [sg.Input(key=f'{key}_sagittal_borders', size=(10,1), default_text=sagittal_borders)], 
               [sg.Input(key=f'{key}_tangential_borders', size=(10,1), default_text=tangential_borders)]])],
                [sg.Push(), sg.Button('Save'), sg.Button('Cancel')]
                ]]

    window = sg.Window(title, layout=layout, modal=True)
    while True:
        event, values = window.read()
        if event == sg.WIN_CLOSED or event == 'Cancel':
            window.close()
            break
        elif event == 'Save':
            window.close()
            try:
                element.dimensions = np.array([float(values[f'{key}_length']), 
                                               float(values[f'{key}_width']), 
                                               float(values[f'{key}_height'])])
            except Exception as e:
                print(e)
                sg.Popup('Invalid dimensions')
                continue
            try:
                element.borders = np.array([float(values[f'{key}_sagittal_borders']), 
                                            float(values[f'{key}_sagittal_borders']), 
                                            float(values[f'{key}_tangential_borders']), 
                                            float(values[f'{key}_tangential_borders'])])
            except Exception as e:
                print(e)
                sg.Popup('Invalid borders', [[e],[traceback.format_exc()]])
                continue
            break
            
    return values if event == 'Save' else None

class Beam_Config(object):
    """
    Provides a class for beam configuration.

    Attributes
    ----------
    electron_size_h : float
        The electron horizontal size RMS.
    electron_size_v : float
        The electron vertical size RMS.
    electron_div_h : float
        The electron horizontal divergence RMS.
    electron_div_v : float
        The electron vertical divergence RMS.
    id_length : float
        The length of the insertion device.
    distance : float
        The distance from the insertion device to the image plane.
    num_of_sigmas : float
        The number of sigmas to include in the beam size calculation.
    beam_size_h : float
        The horizontal beam size.
    beam_size_v : float
        The vertical beam size.

    Methods
    -------
    window(window, pgm)
        Pops up a window for beam configuration.
    
    
    """

    def __init__(self):
        self.electron_size_h = None
        self.electron_size_v = None
        self.electron_div_h = None
        self.electron_div_v = None
        self.id_length = None
        self.distance = None
        self.num_of_sigmas = None
        self.beam_size_h = None
        self.beam_size_v = None
        self.calc = False

        return


    def window(self, pgm):
        """
        Pops up a window for beam configuration.

        Parameters
        ----------
        window : PySimpleGUI.Window
            The main window.
        pgm : PGM
            The PGM object.

        Returns
        -------

        """
        
        layout = [[
            [sg.Column([
                [sg.Checkbox('Calculate for ID beamline', key='calculate_q', default=True,enable_events=True)],
                [sg.Text('Electron Horinzontal Size RMS (μm)')],
                [sg.Text('Electron Vertical Size RMS (μm)')],
                [sg.Text('Electron Divergence Horizontal RMS (μrad)')],
                [sg.Text('Electron Divergence Vertical RMS (μrad)')],
                [sg.Text('ID Length (m)')],
                [sg.Text('Distance from ID (m)')],
                [sg.Text('Number of sigma to include')],
                [sg.HorizontalSeparator()],
                [sg.Text('Beam Horizontal Size (mm)')],
                [sg.Text('Beam Vertical Size (mm)')],
            ]),
            sg.Column([
                [],
                [sg.Input(key='electron_size_h', size=(8,1), enable_events=True)],
                [sg.Input(key='electron_size_v', size=(8,1), enable_events=True)],
                [sg.Input(key='electron_div_h', size=(8,1), enable_events=True)],
                [sg.Input(key='electron_div_v', size=(8,1), enable_events=True)],
                [sg.Input(key='id_length', size=(8,1), enable_events=True)],
                [sg.Input(key='distance', size=(8,1), enable_events=True)],
                [sg.Input(key='num_of_sigmas', size=(8,1), enable_events=True)],
                [sg.HorizontalSeparator()],
                [sg.Input(key='beam_size_h', size=(8,1),readonly=True)],
                [sg.Input(key='beam_size_v', size=(8,1),readonly=True)],
            ], pad=((20,0),(30,0)))],
            [sg.Push(), sg.Button('Cancel'),sg.Button('Save & Exit') ]
        ]]

        check_fill = lambda: all([window_beam[key].get() != '' for key in ['electron_size_h', 'electron_size_v', 'electron_div_h', 'electron_div_v', 'id_length', 'distance', 'num_of_sigmas']])
        window_beam = sg.Window('Beam Configuration', layout=layout, modal=True, finalize=True)

        if self.calc:
            try:
                window_beam['electron_size_h'].update(value=self.electron_size_h)
                window_beam['electron_size_v'].update(value=self.electron_size_v)
                window_beam['electron_div_h'].update(value=self.electron_div_h)
                window_beam['electron_div_v'].update(value=self.electron_div_v)
                window_beam['id_length'].update(value=self.id_length)
                window_beam['distance'].update(value=self.distance)
                window_beam['num_of_sigmas'].update(value=self.num_of_sigmas)
                window_beam['beam_size_h'].update(value=self.beam_size_h)
                window_beam['beam_size_v'].update(value=self.beam_size_v)
            except Exception as e:
                sg.Popup('Invalid values', e)
        
        else:
            window_beam['calculate_q'].update(value=False)
            for key in ['electron_size_h', 'electron_size_v', 'electron_div_h', 'electron_div_v', 'id_length', 'distance', 'num_of_sigmas']:
                window_beam[key].update(readonly=True)
            window_beam['beam_size_h'].update(value=pgm.beam_width, readonly=False)
            window_beam['beam_size_v'].update(value=pgm.beam_height, readonly=False)
            
           

        while True:
            event, values = window_beam.read()
            print(check_fill())
            if check_fill() and values['calculate_q']:
                try:
                    beam_size_h = calc_beam_size(float(values['electron_size_h']), 
                                                float(values['electron_div_h']), 
                                                pgm.wavelength, 
                                                float(values['distance']),
                                                float(values['id_length']), 
                                                num_of_sigmas=float(values['num_of_sigmas']))
                    beam_size_v = calc_beam_size(float(values['electron_size_v']),
                                                float(values['electron_div_v']), 
                                                pgm.wavelength, 
                                                float(values['distance']),
                                                float(values['id_length']), 
                                                num_of_sigmas=float(values['num_of_sigmas']))
                    
                    window_beam['beam_size_h'].update(value=round(beam_size_h, ndigits=3))
                    window_beam['beam_size_v'].update(value=round(beam_size_v, ndigits=3))
                    
                except Exception as e:
                    sg.Popup('Invalid values', [[e],[traceback.format_exc()]])
                    continue

            if event == sg.WIN_CLOSED:
                break
            
            elif event == 'calculate_q':
                if values['calculate_q']:
                    for key in ['electron_size_h', 'electron_size_v', 'electron_div_h', 'electron_div_v', 'id_length', 'distance', 'num_of_sigmas']:
                        window_beam[key].update(readonly=False)
                    window_beam['beam_size_h'].update(readonly=True)
                    window_beam['beam_size_v'].update(readonly=True)
                else:
                    for key in ['electron_size_h', 'electron_size_v', 'electron_div_h', 'electron_div_v', 'id_length', 'distance', 'num_of_sigmas']:
                        window_beam[key].update(readonly=True)
                    window_beam['beam_size_h'].update(readonly=False)
                    window_beam['beam_size_v'].update(readonly=False)


            elif event == 'Save & Exit':
                try:
                    electron_size_h = float(values['electron_size_h'])
                    electron_size_v = float(values['electron_size_v'])
                    electron_div_h = float(values['electron_div_h'])
                    electron_div_v = float(values['electron_div_v'])
                    id_length = float(values['id_length'])
                    distance = float(values['distance'])
                    num_of_sigmas = float(values['num_of_sigmas'])
                except Exception as e:
                    sg.Popup('Invalid values', e)
                    continue
                if values['calculate_q']:
                    beam_size_h = calc_beam_size(electron_size_h, electron_div_h, id_length, distance, num_of_sigmas)
                    beam_size_v = calc_beam_size(electron_size_v, electron_div_v, id_length, distance, num_of_sigmas)
                else:
                    beam_size_h = values['beam_size_h']
                    beam_size_v = values['beam_size_v']
                
                try:
                    window_beam['beam_size_h'].update(value=round(float(beam_size_h), ndigits=3))
                    window_beam['beam_size_v'].update(value=round(float(beam_size_v), ndigits=3))

                except Exception as e:
                    sg.Popup('Invalid values', e)
                    continue

                self.electron_size_h = electron_size_h
                self.electron_size_v = electron_size_v
                self.electron_div_h = electron_div_h
                self.electron_div_v = electron_div_v
                self.id_length = id_length
                self.distance = distance
                self.num_of_sigmas = num_of_sigmas
                self.beam_size_h = beam_size_h
                self.beam_size_v = beam_size_v
                pgm.beam_height = beam_size_v
                pgm.beam_width = beam_size_h
                self.calc = values['calculate_q']
                window_beam.close()
                break


            elif event == 'Cancel':
                window_beam.close()
                break
        return

def main():
    beam = Beam_Config()
    mirror = Plane_Mirror.mirror_from_file('config_pgm.ini')
    grating = Grating.grating_from_file('config_pgm.ini')
    pgm=PGM(mirror=mirror, grating=grating)
    test = EPICScontrol('Energy (eV)', 1100, 10, 'test')
    window = sg.Window('EPICS Control', layout=[[test.frame], 
                                                [sg.Button('OK'), 
                                                 sg.Button('Cancel'),
                                                 sg.Button('Beam Config')]])
    while True:
        event, values = window.read()
        if event == sg.WIN_CLOSED:
            break
        elif event == 'OK':
            configuration_popup('Mirror Configuration', 'test', mirror)
            
        
        elif event == 'test_up':
            test.up(window)

        elif event == 'test_down':
            test.down(window)

        elif event == 'Cancel':
            break

        elif event == 'Beam Config':
            beam.window(pgm)
            

if __name__ == "__main__":
    main()