"""
gui_widgets.py

Provides a set of widgets for use in the GUI.

Author: Patrick Wang
Email: patrick.wang@diamond.ac.uk
Date: 2023-10-05
Version = 0.4.1

"""
from __future__ import annotations
import numpy as np
import PySimpleGUI as sg
from pgmcomponents.geometry import calc_beam_size
import traceback
import matplotlib.pyplot as plt
from pgmcomponents.gui.mplwidgets import draw_figure_w_toolbar
from colorama import Fore, Back, Style, init
from pgmcomponents.elements import *

 

class EPICScontrol(object):
    """
    A EPICS like control widget.

    Parameters
    ----------
    name : str
        The name of the control.
    value : float
        The default value of the control
    increments: float
        The default increment value of the control.
    key : str
        The key of the control.
    pgm : PGM
        The PGM object.


    Methods
    -------
    up(window)
        Add increment to value
    down(window)
        Subtract increment from value
    update(window)
        Update the displayed value of the control.
    write(window, value, pgm)
        Write a value to the control.
    
    """

    def __init__(self, name: str, value: float, increments: float, key: str, pgm=None) -> None:
        self.name = name
        self.value = value
        self.increments = increments
        self.key = key
        button_image=b'\x89PNG\r\n\x1a\n\x00\x00\x00\rIHDR\x00\x00\x00\x01\x00\x00\x00\x01\x08\x06\x00\x00\x00\x1f\x15\xc4\x89\x00\x00\x00\rIDATx\x9cc````\x00\x00\x00\x05\x00\x01\xa5\xf6E@\x00\x00\x00\x00IEND\xaeB`\x82'
        
        self.properties = {'-ENERGY-':'energy', '-CFF-':'cff', '-ORDER-':'grating.order', '-LINE_DENSITY-':'grating.line_density'}

        if pgm is not None:
            # avoid use of eval with user input (key)
            self.value = eval(f"pgm.{self.properties[self.key]}")

        layout = [[sg.Button(button_text='―', key=f"{key}_down", font=('Arial', 10),image_data=button_image, image_size=(20,30)),
                   sg.Column([[sg.Input(default_text=self.value, key=f"{key}", size=(8,1), font=('Arial', 14),justification='center')],
                              [sg.HorizontalSeparator()],
                              [sg.Push(), sg.Input(default_text=increments, key=f"{key}_inc", size=(8,1),justification='center'), sg.Push()]]),
                              sg.Button(button_text='+',font=('Arial', 16),image_data=button_image, image_size=(20,30), auto_size_button=False,key=f"{key}_up")],
                ]
        self.frame = sg.Frame(title=name, layout=layout, expand_x=True, expand_y=True)

        # don't need return
        return

    # PGM imported from * import. 
    def up(self, window: sg.Window, values: dict, pgm: PGM) -> None:
        """
        Parameters
        ----------
        window : PySimpleGUI.Window
            The window object containing the control.
        values : dict
            The values of the window.
        pgm : PGM
            The PGM object.
        
        Returns
        -------
        None

        Add increment to value, needs the window object to update the value.
        """
        if self.key == "-ORDER-":
            try:
                updated = int(float(values[self.key])) + int(float(values[f"{self.key}_inc"]))
                values[self.key] = updated
                window[self.key].update(value=updated)
                window.write_event_value('Update', self.key)
                print('here!')
                setattr(pgm.grating, 'order', updated)

            # make exception more specific
            except Exception as e:
                sg.Popup('Order should be type int', e)
            
        else:
            updated = round(float(values[self.key]) + float(values[f"{self.key}_inc"]), ndigits=3)
            values[self.key] = updated
            window[self.key].update(value=updated)
            window.write_event_value('Update', self.key)
            setattr(pgm, self.properties[self.key], updated)
            
        return
    
    def down(self, window: sg.Window, values: dict, pgm: PGM) -> None:
            """
            Subtract the increment value from the current value of the widget.
            If the widget is an order widget, the current value is converted to an integer before subtraction.
            The updated value is then set as the new value of the widget and also updated in the corresponding attribute of the pgm object.

            Parameters
            ----------
            window : PySimpleGUI.Window
                The window object containing the control.
            values : dict
                The values of the window.
            pgm : PGM20
                The PGM object.
            """
            if self.key == "-ORDER-":
                try:
                    updated = int(float(window[self.key].get())) - int(float(window[f"{self.key}_inc"].get()))
                    values[self.key] = updated
                    window[self.key].update(value=updated)
                    window.write_event_value('Update', values)
                    setattr(pgm.grating, 'order', updated)

                except Exception as e:
                    sg.Popup('Order should be type int', e)
                
            elif self.key == "-CFF-":
                print('1st loop')
                test_update = round(float(window[self.key].get()) - float(window[f"{self.key}_inc"].get()), ndigits=3)
                if test_update <= 1:
                    print("Is condition triggered?")
                    sg.Popup('Cff cannot be less than 1')
                    return
                else:
                    updated = round(float(window[self.key].get()) - float(window[f"{self.key}_inc"].get()), ndigits=3)
                    values[self.key] = updated
                    window[self.key].update(value=updated)
                    window.write_event_value('Update', values)
                    setattr(pgm, self.properties[self.key], updated)


            else:
                updated = round(float(window[self.key].get()) - float(window[f"{self.key}_inc"].get()), ndigits=3)
                values[self.key] = updated
                window[self.key].update(value=updated)
                window.write_event_value('Update', values)
                setattr(pgm, self.properties[self.key], updated)
            return
    
    def update(self, window: sg.Window, pgm: PGM) -> None:
            """
            Update the value of the control.

            Parameters
            ----------

            window: The window object containing the control.
            pgm: The program object containing the property to be updated.

            Returns
            -------

            None
            """
            window[self.key].update(value=self.value)
            if self.key == "-ORDER-":
                setattr(pgm.grating, 'order', int(self.value))
            else:
                setattr(pgm, self.properties[self.key], float(self.value))
            return
    
    # pgm parameter not used
    def write(self, window: sg.Window, value: dict, pgm: PGM)-> None:
        """
        Subroutine to write the values of a known pgm to
        the window.

        Parameters
        ----------
        window : PySimpleGUI.Window
            The main window.
        value : float
            The value to write to the control.
        pgm : PGM
            The PGM object.

        """
        window[self.key].update(value=value)
        setattr(pgm, self.properties[self.key], float(window[self.key].get()))
    
        return

    def update_inc(self, window: sg.Window)-> None:
        """
        Update the increment of the control.

        Parameters
        ----------
        window : PySimpleGUI.Window
            The window object containing the control.
        
        Returns
        -------
        None

        """
        window[f"{self.key}_inc"].update(value=self.increments)
        return
    
    

# Plane_Mirror and Grating undefined here
def configuration_popup(title: str, key: str, element: Plane_Mirror | Grating, window)-> dict:
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
                [sg.Push(), sg.Button('Cancel'), sg.Button('Save')]
                ]]

    configwindow = sg.Window(title, layout=layout, modal=True)
    while True:
        event, values = configwindow.read()
        if event == sg.WIN_CLOSED or event == 'Cancel':
            configwindow.close()
            break
        elif event == 'Save':
            configwindow.close()
            try:
                element.dimensions = np.array([float(values[f'{key}_length']), 
                                               float(values[f'{key}_width']), 
                                               float(values[f'{key}_height'])])
            # catch more specific exception
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
            window.write_event_value('Update', key)
            break
            
    return values if event == 'Save' else None

# don't need to inherit from object. Rename BeamConfig for PascalCase
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

        # don't need return
        return


    
    # This function is very long. Can you refactor into smaller functions.
    def window(self, pgm: PGM, window: sg.Window)-> None:
        """
        Pops up a window for beam configuration.

        Parameters
        ----------
        window : PySimpleGUI.Window
            The main window.
        pgm : PGM
            The PGM object.

        """
        
        layout = [[
            [sg.Column([
                [sg.Checkbox('Calculate for ID beamline', key='calculate_q', default=True,enable_events=True)],
                [sg.Text('Electron Horizontal Size RMS (μm)')],
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

        config_keys = ['electron_size_h', 'electron_size_v', 'electron_div_h', 'electron_div_v', 'id_length', 'distance', 'num_of_sigmas']

        # use def instead of lambda here
        check_fill = lambda: all([window_beam[key].get() != '' for key in config_keys])
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
                if pgm.beam_width == self.beam_size_h and pgm.beam_height == self.beam_size_v:
                    window_beam['beam_size_h'].update(value=self.beam_size_h, readonly=True)
                    window_beam['beam_size_v'].update(value=self.beam_size_v, readonly=True)
                else:
                    raise ValueError('Beam size does not match calculated beam size.')
            # Can you give a more specific exception and useful error msg here
            except Exception as e:
                sg.Popup('Invalid values', e)
        
        else:
            window_beam['electron_size_h'].update(value=self.electron_size_h)
            window_beam['electron_size_v'].update(value=self.electron_size_v)
            window_beam['electron_div_h'].update(value=self.electron_div_h)
            window_beam['electron_div_v'].update(value=self.electron_div_v)
            window_beam['id_length'].update(value=self.id_length)
            window_beam['distance'].update(value=self.distance)
            window_beam['num_of_sigmas'].update(value=self.num_of_sigmas)
            window_beam['calculate_q'].update(value=False)
            for key in config_keys:
                window_beam[key].update(readonly=True)
            window_beam['beam_size_h'].update(value=pgm.beam_width, readonly=False)
            window_beam['beam_size_v'].update(value=pgm.beam_height, readonly=False)
            
           

        while True:
            event, values = window_beam.read()

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
                if values['calculate_q']:
                    try:
                        self.electron_size_h = float(values['electron_size_h'])
                        self.electron_size_v = float(values['electron_size_v'])
                        self.electron_div_h = float(values['electron_div_h'])
                        self.electron_div_v = float(values['electron_div_v'])
                        self.id_length = float(values['id_length'])
                        self.distance = float(values['distance'])
                        self.num_of_sigmas = float(values['num_of_sigmas'])
                        self.calc = True
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
                        self.beam_size_h = beam_size_h
                        self.beam_size_v = beam_size_v
                        pgm.beam_width = beam_size_h
                        pgm.beam_height = beam_size_v
                        window_beam.close()
                        window.write_event_value('Update', 'beam')
                        break

                    except Exception as e:
                        sg.Popup('Invalid values', [[e],[traceback.format_exc()]])
                        continue
                else:

                    try:
                        pgm.beam_width = float(window_beam['beam_size_h'].get()) if window_beam['beam_size_h'].get() != '' else None
                        pgm.beam_height = float(window_beam['beam_size_v'].get()) if window_beam['beam_size_v'].get() != '' else None
                        self.calc = False
                        self.electron_size_h = float(window_beam['electron_size_h'].get()) if window_beam['electron_size_h'].get() != '' else None
                        self.electron_size_v = float(window_beam['electron_size_v'].get()) if window_beam['electron_size_v'].get() != '' else None
                        self.electron_div_h = float(window_beam['electron_div_h'].get()) if window_beam['electron_div_h'].get() != '' else None
                        self.electron_div_v = float(window_beam['electron_div_v'].get()) if window_beam['electron_div_v'].get() != '' else None
                        self.id_length = float(window_beam['id_length'].get()) if window_beam['id_length'].get() != '' else None
                        self.distance = float(window_beam['distance'].get()) if window_beam['distance'].get() != '' else None
                        self.num_of_sigmas = float(window_beam['num_of_sigmas'].get()) if window_beam['num_of_sigmas'].get() != '' else None


                        window_beam.close()
                        window.write_event_value('Update', 'beam')
                        break

                        
                    except ValueError:
                        if sg.PopupOKCancel("Can't convert certain values to float. Discarding problematic values. Continue?") == 'OK':
                            self.beam_size_h = values['beam_size_h']
                            self.beam_size_v = values['beam_size_v']
                            self.calc = False
                            self.electron_size_h = ''
                            self.electron_size_v = ''
                            self.electron_div_h = ''
                            self.electron_div_v = ''
                            self.id_length = ''
                            self.distance = ''
                            self.num_of_sigmas = ''

                            window_beam.close()
                            break

                        else:
                            continue

                    except Exception as e:
                        sg.Popup('Invalid values', [[e],[traceback.format_exc()]])
                        continue




            elif event == 'Cancel':
                window_beam.close()
                break

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
                    self.beam_size_h = beam_size_h
                    self.beam_size_v = beam_size_v
                    pgm.beam_height = beam_size_v
                    pgm.beam_width = beam_size_h
                    # don't need pass
                    pass
                    
                except Exception as e:
                    sg.Popup('Invalid values', [[e],[traceback.format_exc()]])
                    # dont' need pass
                    pass

            
            
        # don't need return
        return


class OffsetsControl(object):
    """
    A class to provide the offsets control widget.

    Attributes
    ----------
    values : dict
        The default values of the control.
        keys: 'beam_vertical', 'mirror_hoffset', 'mirror_voffset', 'mirror_axis_hoffset', 'mirror_axis_voffset'
    key : str
        The key of the control.
    
    Methods
    -------
    update(window, pgm, )
    """

    def __init__(self, values, key):
        self.values = values

        self.key = key

        layout = [
            [sg.Text('Beam Vertical Offset (b):'), sg.Push(), sg.Input(key=f'{key}_beam_vertical', size=(8,1), default_text=values['beam_vertical'], focus=True, enable_events=True )],
            [sg.Text('Mirror Horizontal Offset (a):'), sg.Push(), sg.Input(key=f'{key}_mirror_horizontal', size=(8,1), default_text=values['mirror_hoffset'])],
            [sg.HorizontalSeparator()],
            [sg.Checkbox('Calculate Offsets?', key=f'{key}_calculate', default=True, enable_events=True)],
            [sg.Text('Mirror Vertical Offset (c):'), sg.Push(), sg.Input(key=f'{key}_mirror_vertical', size=(8,1), default_text=values['mirror_voffset'] ,readonly=True)],
            [sg.Text('Mirror Axis Horizontal Offset (h):'), sg.Push(), sg.Input(key=f'{key}_mirror_axis_horizontal', size=(8,1), default_text=values['mirror_axis_hoffset'], readonly=False)],
            [sg.Text('Mirror Axis Vertical Offset (v):'), sg.Push(), sg.Input(key=f'{key}_mirror_axis_vertical', size=(8,1), default_text=values['mirror_axis_voffset'], readonly=True)],
            ]
        self.frame = sg.Frame(title='Offsets', layout=layout, expand_x=True, expand_y=True)
        self._calculate = True
    
    def updatepgm(self, window, pgm):
        """
        Update the values of the PGM object.
        """
        pgm.beam_offset = -1*float(window[f'{self.key}_beam_vertical'].get())
        pgm.mirror.hoffset = float(window[f'{self.key}_mirror_horizontal'].get())
        pgm.mirror.voffset = float(window[f'{self.key}_mirror_vertical'].get())
        pgm.mirror.axis_hoffset =float(window[f'{self.key}_mirror_axis_horizontal'].get())
        pgm.mirror.axis_voffset = float(window[f'{self.key}_mirror_axis_vertical'].get())
        return
    
    def calcoffsets(self, window, pgm):
        """
        Calculate the offsets.
        """
        # mirror_voffset and mirror_axis_voffset should be in __init__
        self.mirror_voffset = float(window[f'{self.key}_beam_vertical'].get())
        self.mirror_axis_voffset = self.mirror_voffset/2
        pgm.mirror.voffset = self.mirror_voffset
        pgm.mirror.axis_voffset = self.mirror_axis_voffset
        window['-OFFSETS-_mirror_vertical'].update(value=self.mirror_voffset)
        window['-OFFSETS-_mirror_axis_vertical'].update(value=self.mirror_axis_voffset)
    
    @property
    def calculate(self):
        return self._calculate
    
    @calculate.setter
    def calculate(self, value):
        self._calculate = value
        return
    
    def write(self, window, values, calcq=True):
        """
        Write values to the control.
        """
        window[f'{self.key}_beam_vertical'].update(value=values['beam_vertical'])
        window[f'{self.key}_mirror_horizontal'].update(value=values['mirror_hoffset'])
        window[f'{self.key}_mirror_vertical'].update(value=values['mirror_voffset'])
        window[f'{self.key}_mirror_axis_horizontal'].update(value=values['mirror_axis_hoffset'])
        window[f'{self.key}_mirror_axis_vertical'].update(value=values['mirror_axis_voffset'])
        window[f'{self.key}_calculate'].update(value=calcq)

        return

# rename TopViewWidget
class Topview_Widget(object):
    """
    A class to supply the GUI widget for a top-view
    footprint plot of a given PGM.
    
    """
    def __init__(self, pgm, key='-TOPVIEW-', size=(800,400)):
        
        self._pgm = pgm
        self._key = key
        self._size = size
        self.make_canvas()
    
    @property
    def pgm(self):
        return self._pgm
    
    @pgm.setter
    def pgm(self, value):
        self._pgm = value
        return
    
    @property
    def key(self):
        return self._key
    
    @key.setter
    def key(self, value):
        self._key = value
        self.make_canvas()
        return
    
    @property
    def size(self):
        return self._size
    
    @size.setter
    def size(self, value):
        self._size = value
        self.make_canvas()
        return
    
    @property
    def frame(self):
        return sg.Frame(title='Footprint View', layout=[[self.canvas]], element_justification='center')
    

    def make_canvas(self):
        mirror_corners = self.pgm.mirror_corners()
        grating_corners = self.pgm.grating_corners()
        top_right_x = grating_corners[2][1] + self.pgm.mirror._width()*0.5 + self.pgm.grating._width()*0.5
        top_right_z = grating_corners[2][0]
        self.canvas = sg.Graph(canvas_size=self.size, 
                               enable_events=True,
                               graph_bottom_left=self.pgm.mirror_corners()[-1], 
                               graph_top_right=[top_right_z, top_right_x], 
                               key=self.key, 
                               background_color='white',
                               right_click_menu=[[''],['Reset', 'Save As...']],
                               motion_events=True)
        print('grating corners:', grating_corners)
        print('mirror corners:', mirror_corners)
        print('graph bottom left:', self.pgm.mirror_corners()[-1])
        print('graph top right:', [top_right_z, top_right_x])
    def draw(self):
        mirror_corners = self.pgm.mirror_corners()
        grating_corners = self.pgm.grating_corners()
        grating_corners = np.array(grating_corners) + np.array([0, 0.5*(self.pgm.mirror._width() + self.pgm.grating._width())])
        top_left = np.array(mirror_corners[2])
        bottom_right = [mirror_corners[0][0], mirror_corners[0][1]]

        print('rectangle:', top_left, bottom_right)
        self.canvas.draw_rectangle(top_left, bottom_right, line_color='black', line_width=2, fill_color='red')
        self.canvas.draw_rectangle(grating_corners[1], grating_corners[-1], line_color='black', line_width=2, fill_color='blue')
        pass

    def corners(self)-> tuple:
        """
        Returns the corners of the mirror, grating and the canvas.
        """
        mirror_corners = self.pgm.mirror_corners()
        grating_corners = self.pgm.grating_corners()
        top_right_x = grating_corners[2][1] + self.pgm.mirror._width()*0.5 + self.pgm.grating._width()*0.5
        top_right_z = grating_corners[2][0]
        return mirror_corners, grating_corners, [top_right_z, top_right_x]

class Sideview_Widget(object):

    def __init__(self, pgm, key='-SIDEVIEW-', size=(800, 400)):
        self._pgm = pgm
        self._key = key
        self._size = size
        self.make_canvas()
    
    @property
    def pgm(self):
        return self._pgm
    
    @pgm.setter
    def pgm(self, value):
        self._pgm = value
        return
    
    @property
    def key(self):
        return self._key
    
    @key.setter
    def key(self, value):
        self._key = value
        self.make_canvas()
        return
    
    @property
    def size(self):
        return self._size
    
    @size.setter
    def size(self, value):
        self._size = value
        self.make_canvas()
        return
    
    @property
    def frame(self):
        return sg.Frame(title='Side View', layout=[[self.canvas], [self.control_canvas]], element_justification='center')
    

    def make_canvas(self):
        self.canvas = sg.Canvas(size = self.size, key = self.key, background_color='white', right_click_menu=[[''],['Reset', 'Save As...']])
        self.control_canvas = sg.Canvas(key=f'{self.key}_control')
    

    

    def draw(self, window):
        pass
        
def main():
    beam = Beam_Config()
    mirror = Plane_Mirror()
    grating = Grating()
    pgm=PGM(mirror=mirror, grating=grating)
    pgm.beam_height = 5.
    pgm.beam_width = 5.
    pgm.generate_rays()
    _,_ = pgm.grating.compute_angles()
    pgm.set_theta()
    
    offsetscontrol = OffsetsControl(pgm.values(), 'offsets_test')
    topview = Topview_Widget(pgm, key='topview_test')
    #sideview = Sideview_Widget(pgm, key='sideview_test')
    test = EPICScontrol('Energy (eV)', 1100, 10, 'test')
    window = sg.Window('EPICS Control', layout=[[test.frame], 
                                                [sg.Button('OK'), 
                                                 sg.Button('Cancel'),
                                                 sg.Button('Beam Config')],
                                                 [offsetscontrol.frame],
                                                 [topview.frame]
                                                 ])
    window.Finalize()
    topview.draw()
    
    while True:
        # values not used
        event, values = window.read()
        print(event, values)
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
        

def update_and_draw(window, 
                    pgm, 
                    values, 
                    topview_widget, 
                    sideview_widget, 
                    energy_control, 
                    cff_control, 
                    order_control, 
                    line_density_control,
                    offsets_control):
    """
    Update the values of the PGM object and draw the
    topview and sideview widgets.
    
    Parameters
    ----------
    window : PySimpleGUI.Window
        The main window.
    pgm : PGM
        The PGM object.
    values : dict
        The values of the controls.
    topview_widget : Topview_Widget
        The topview widget.
    sideview_widget : Sideview_Widget
        The sideview widget.
    energy_control : EPICScontrol
        The energy control.
    cff_control : EPICScontrol
        The cff control.
    order_control : EPICScontrol
        The order control.
    line_density_control : EPICScontrol
        The line density control.

    """


    energy_input = float(values['-ENERGY-'])
    cff_input = float(values['-CFF-'])
    order_input = int(values['-ORDER-'])
    line_density_input = float(values['-LINE_DENSITY-'])
    try:
        val = float(energy_input)
        if val > 0:
            energy_control.write(window, float(energy_input), pgm)
            # can remove all of these pass statements
            pass
        else:
            sg.Popup('Error', 'Energy must be a positive number')
            energy_control.write(window, 250, pgm)
            pass
    except ValueError:
        sg.Popup('Error', 'Energy must be a positive number')
        energy_control.write(window, 250, pgm)
        pass

    try:
        val = float(cff_input)
        if val > 0:
            cff_control.write(window, float(cff_input), pgm)
            pass
        else:
            sg.Popup('Error', 'CFF must be a positive number')
            cff_control.write(window, 2, pgm)
            pass
    except ValueError:
        sg.Popup('Error', 'CFF must be a positive number')
        cff_control.write(window, 2, pgm)
        pass

    try:
        val = int(order_input)
        if val >= 0:
            order_control.write(window, int(order_input), pgm)
            pass
        else:
            sg.Popup('Error', 'Order must be a positive integer')
            order_control.write(window, 1, pgm)
            pass
    except ValueError:
        sg.Popup('Error', 'Order must be a positive integer')
        order_control.write(window, 1, pgm)
        pass

    
    try:
        val = float(line_density_input)
        if val > 0:
            line_density_control.write(window, float(line_density_input), pgm)
            pass
        else:
            sg.Popup('Error', 'Line density must be a positive number')
            line_density_control.write(window, 400, pgm)
            pass
    except ValueError:
        sg.Popup('Error', 'Line density must be a positive number')
        line_density_control.write(window, 400, pgm)
        pass

    pgm.energy = float(values['-ENERGY-']) if float(values['-ENERGY-']) > 0 else 1
    pgm.cff = float(values['-CFF-']) if float(values['-CFF-']) > 0 else 1
    pgm.mirror.order = int(values['-ORDER-']) if int(values['-ORDER-']) >= 0 else 1
    pgm.grating.line_density = float(values['-LINE_DENSITY-']) if float(values['-LINE_DENSITY-']) > 0 else 1
    
    offsets_control.updatepgm(window, pgm)
    if values['-OFFSETS-_calculate']:
        offsets_control.calcoffsets(window, pgm)
    else:
        offsets_control.updatepgm(window, pgm)

    try:
        # can just call functions without assigning to variables
        _,_ = pgm.grating.compute_angles()
        _=pgm.mirror.compute_corners()
        _=pgm.grating.compute_corners()
        pgm.set_theta()
        _=pgm.mirror.compute_corners()
    except Exception as e:
        sg.Popup('Error', e)
        return
        
    topview_widget.draw(window)
    sideview_widget.draw(window)

    pass


def initial_draw(window: sg.Window, 
                 pgm:PGM, 
                 topview_widget:Topview_Widget, 
                 sideview_widget:Sideview_Widget, 
                 offsets_control:OffsetsControl)-> None:
    """
    Draw the topview and sideview widgets.
    
    Parameters
    ----------
    window : PySimpleGUI.Window
        The main window.
    pgm : PGM
        The PGM object.
    topview_widget : Topview_Widget
        The topview widget.
    sideview_widget : Sideview_Widget
        The sideview widget.
    offsets_control : OffsetsControl
        The offsets control widget.
    """
    pgm.generate_rays()
    offsets_control.calcoffsets(window, pgm)
    offsets_control.updatepgm(window, pgm)
    _,_ = pgm.grating.compute_angles()
    _=pgm.mirror.compute_corners()
    _=pgm.grating.compute_corners()
    pgm.set_theta()
    _=pgm.mirror.compute_corners()

    topview_widget.draw(window)
    sideview_widget.draw(window)
    return

def maketable(pgm: PGM)-> sg.Table:
    """
    Returns a PySimpleGUI table for the PGM parameters.

    Parameters
    ----------
    pgm : PGM
        The PGM object.

    Returns
    -------
    table : PySimpleGUI.Table
        The table.
    """
    columns = ("Parameter", "Value")
    parameters = ["Order", 
                "LD (l/mm)",
                "Energy (eV)",
                "Cff",
                "b (mm)",
                "a (mm)",
                "c (mm)",
                "h (mm)",
                "v (mm)",
                "alpha (deg)",
                "beta(deg)",
                "theta (deg)"]
    values = [pgm.grating.order,
              pgm.grating.line_density,
              pgm.energy,
              pgm.grating.cff,
              pgm.beam_offset,
              pgm.mirror.hoffset,
              pgm.mirror.voffset,
              pgm.mirror.axis_hoffset,
              pgm.mirror.axis_voffset,
              pgm.grating.alpha,
              pgm.grating.beta,
              pgm.mirror.theta]
    data = [(param, round(val, ndigits=3)) for param, val in zip(parameters, values)]
    table = sg.Table(values=data, headings=columns, auto_size_columns=False, justification='left', num_rows=12, key='-TABLE-')
    return table


class ParamTable():
    """
    A class to provide a table of PGM parameters.
    """
    def __init__(self, pgm: PGM, key: str):
        self.pgm = pgm
        self.key = key
        self.table = maketable(self.pgm)
        self.frame = sg.Frame(title='PGM Parameters', layout=[[self.table]])
    
    def update(self, window: sg.Window)-> None:
        """ 
        Update the table.
        """
        self.table.update(values=maketable(self.pgm).Values)
        return

class ParamTable():
    """
    A class to provide a table of PGM parameters.
    """
    def __init__(self, pgm: PGM, key: str):
        self.pgm = pgm
        self.key = key
        self.table = maketable(self.pgm)
        self.frame = sg.Frame(title='PGM Parameters', layout=[[self.table]])
    
    def update(self, window: sg.Window)-> None:
        """ 
        Update the table.
        """
        self.table.update(values=maketable(self.pgm).Values)
        return


class ZoomWidget(object):
    """
    A class to provide a widget to configure
    plotting ranges.
    """

    def __init__(self, pgm: PGM, key: str)-> None:
        self.pgm = pgm
        self.key = key
        layout = [[sg.Text("z min"),sg.Input(key="-ZMIN-", size=(8,8)),
                  sg.Text("z max"),sg.Input(key="-ZMAX-", size=(8,8)),
                  sg.Text("x min"),sg.Input(key="-XMIN-", size=(8,8)),
                  sg.Text("x max"),sg.Input(key="-XMAX-", size=(8,8))]]
        self.frame = sg.Frame(layout=layout, title='Zoom', expand_x=True)
    


if __name__ == "__main__":
    main()
