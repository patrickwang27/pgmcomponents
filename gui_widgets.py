"""
gui_widgets.py

Provides a set of widgets for use in the GUI.

Author: Patrick Wang
Email: patrick.wang@diamond.ac.uk
Date: 2023-10-05

"""
import numpy as np
import PySimpleGUI as sg



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
    """

    def __init__(self, name, value, increments, key):
        self.name = name
        self.value = value
        self.increments = increments
        self.key = key

        layout = [[sg.Button(button_text='-', key=f"{key}_down", font=('Arial', 16)), sg.Input(default_text=value, key=f"{key}", size=(5,1), font=('Arial', 14)), sg.Button(button_text='+',font=('Arial', 16), key=f"{key}_up")],
                [sg.Input(default_text=increments, key=f"{key}_inc", size=(8,1), pad=((37,0),(5,5)))]]
        self.frame = sg.Frame(title=name, layout=layout)
        return

    def up(self, window):
        """
        Add increment to value
        """
        window[self.key].update(value=float(window[self.key].get()) + float(window[f"{self.key}_inc"].get()))
        return
    
    def down(self, window):
        """
        Subtract increment from value
        """
        window[self.key].update(value=float(window[self.key].get()) - float(window[f"{self.key}_inc"].get()))
        return
    
test = EPICScontrol('Energy (eV)', 1100, 10, 'test')
window = sg.Window('EPICS Control', layout=[[test.frame], [sg.Button('OK'), sg.Button('Cancel')]])

def configuration_popup(title, key):
    """
    
    """
    layout = [[
    [sg.Column([[sg.Text('Length')], [sg.Text('Width')], [sg.Text('Height')],[sg.VerticalSeparator()], [sg.Text('Sagittal Borders')], [sg.Text('Tangential Borders')]]),
    sg.Column([[sg.Input(key=f'{key}_length', size=(10,1))], [sg.Input(key=f'{key}_width', size=(10,1))], [sg.Input(key=f'{key}_height', size=(10,1))],[sg.VerticalSeparator()], [sg.Input(key=f'{key}_sagittal_borders', size=(10,1))], [sg.Input(key=f'{key}_tangential_borders', size=(10,1))]])],
    [sg.Button('OK'), sg.Button('Cancel')]
    ]]

    window = sg.Window(title, layout=layout, modal=True)
    while True:
        event, values = window.read()
        if event == sg.WIN_CLOSED or event == 'Cancel':
            window.close()
            break
        elif event == 'OK':
            window.close()
            break
    return values if event == 'OK' else None

while True:
    event, values = window.read()
    if event == sg.WIN_CLOSED:
        break
    elif event == 'OK':
        configuration_popup('Configuration', 'test')
        
    
    elif event == 'test_up':
        test.up(window)

    elif event == 'test_down':
        test.down(window)

    elif event == 'Cancel':
        break
