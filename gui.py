import PySimpleGUI as sg
import numpy as np
from components import *
from geometry_elements import *
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2Tk

Up = '▲'
Down ='▼'
beam_layout = [
    [sg.Text('Height (mm)'), sg.Text(Up, key='beam_height_up', enable_events=True, background_color='gray'),sg.Input(key='beam_height', size=(7, 1), default_text=5.0),sg.Text(Down, key='beam_height_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='beam_height_inc', size=(5, 1))],
    [sg.Text('Width (mm)'), sg.Text(Up, key='beam_width_up', enable_events=True, background_color='gray'),sg.Input(key='beam_width', size=(7, 1), default_text=5.0),sg.Text(Down, key='beam_width_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='beam_width_inc', size=(5, 1))],
    [sg.Text('Line Density (l/mm)'), sg.Text(Up, key='beam_ld_up', enable_events=True, background_color='gray'),sg.Input(key='beam_ld', size=(7, 1), default_text=600.0),sg.Text(Down, key='beam_ld_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='10', key='beam_ld_inc', size=(5, 1))],
    [sg.Text('Energy (eV)'), sg.Text(Up, key='beam_energy_up', enable_events=True, background_color='gray'),sg.Input(key='beam_energy', size=(7, 1), default_text=1000.),sg.Text(Down, key='beam_energy_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='10', key='beam_energy_inc', size=(5, 1))],
]

mirror_layout = [
    [sg.Text('Length (mm)'), sg.Text(Up, key='mirror_length_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_length', size=(7, 1), default_text=450.),sg.Text(Down, key='mirror_length_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_length_inc', size=(5, 1))],
    [sg.Text('Width (mm)'), sg.Text(Up, key='mirror_width_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_width', size=(7, 1), default_text=70.),sg.Text(Down, key='mirror_width_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_width_inc', size=(5, 1))],
    [sg.Text('Height (mm)'), sg.Text(Up, key='mirror_height_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_height', size=(7, 1), default_text=50.),sg.Text(Down, key='mirror_height_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_height_inc', size=(5, 1))],
    [sg.Text('Left Border (mm)'), sg.Text(Up, key='mirror_left_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_left', size=(7, 1), default_text=0.),sg.Text(Down, key='mirror_left_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_left_inc', size=(5, 1))],
    [sg.Text('Right Border (mm)'), sg.Text(Up, key='mirror_right_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_right', size=(7, 1),default_text=0.),sg.Text(Down, key='mirror_right_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_right_inc', size=(5, 1))],
    [sg.Text('Top Border (mm)'), sg.Text(Up, key='mirror_top_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_top', size=(7, 1), default_text=0.),sg.Text(Down, key='mirror_top_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_top_inc', size=(5, 1))],
    [sg.Text('Bottom Border (mm)'), sg.Text(Up, key='mirror_bottom_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_bottom', size=(7, 1), default_text=0.),sg.Text(Down, key='mirror_bottom_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_bottom_inc', size=(5, 1))],
]

grating_layout = [
    [sg.Text('Length (mm)'), sg.Text(Up, key='grating_length_up', enable_events=True, background_color='gray'),sg.Input(key='grating_length', size=(7, 1), default_text=150.),sg.Text(Down, key='grating_length_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_length_inc', size=(5, 1))],
    [sg.Text('Width (mm)'), sg.Text(Up, key='grating_width_up', enable_events=True, background_color='gray'),sg.Input(key='grating_width', size=(7, 1), default_text=40.),sg.Text(Down, key='grating_width_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_width_inc', size=(5, 1))],
    [sg.Text('Height (mm)'), sg.Text(Up, key='grating_height_up', enable_events=True, background_color='gray'),sg.Input(key='grating_height', size=(7, 1), default_text=50.),sg.Text(Down, key='grating_height_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_height_inc', size=(5, 1))],
    [sg.Text('Line Density (l/mm)'), sg.Text(Up, key='grating_ld_up', enable_events=True, background_color='gray'),sg.Input(key='grating_ld', size=(7, 1), default_text=1100.),sg.Text(Down, key='grating_ld_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='10', key='grating_ld_inc', size=(5, 1))],
    [sg.Text('Left Border (mm)'), sg.Text(Up, key='grating_left_up', enable_events=True, background_color='gray'),sg.Input(key='grating_left', size=(7, 1), default_text=0.),sg.Text(Down, key='grating_left_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_left_inc', size=(5, 1))],
    [sg.Text('Right Border (mm)'), sg.Text(Up, key='grating_right_up', enable_events=True, background_color='gray'),sg.Input(key='grating_right', size=(7, 1), default_text=0.),sg.Text(Down, key='grating_right_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_right_inc', size=(5, 1))],
    [sg.Text('Top Border (mm)'), sg.Text(Up, key='grating_top_up', enable_events=True, background_color='gray'),sg.Input(key='grating_top', size=(7, 1), default_text=0.),sg.Text(Down, key='grating_top_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_top_inc', size=(5, 1))],
    [sg.Text('Bottom Border (mm)'), sg.Text(Up, key='grating_bottom_up', enable_events=True, background_color='gray'),sg.Input(key='grating_bottom', size=(7, 1), default_text=0.),sg.Text(Down, key='grating_bottom_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_bottom_inc', size=(5, 1))],
]
menu = [['File', ['Open', ['Load Mirror', 'Load Grating', 'Load PGM'], 'Save', 'Exit']],
        ['Export', ['Export Mirror', 'Export Grating', 'Export PGM']], 
        ['Plots'], 
        ['Help', ['About', 'Documentation']]]

angles_layout=[
    [sg.Text('α'), sg.Input(key='alpha', size=(5, 1), readonly=True)],
    [sg.Text('β'), sg.Input(key='beta', size=(5, 1), readonly=True)],
    [sg.Text('θ') , sg.Input(key='theta', size=(5, 1), readonly=True)],
]

offset_layout = [
    [sg.Text('Beam offset (b) [mm]'), sg.Text(Up, key='b_up', enable_events=True, background_color='gray'),sg.Input(key='b', size=(7, 1)),sg.Text(Down, key='b_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='b_inc', size=(5, 1))],
    [sg.Text('Mirror Axis Vertical Offset (v) [mm]'), sg.Text(Up, key='v_up', enable_events=True, background_color='gray'),sg.Input(key='v', size=(7, 1)),sg.Text(Down, key='v_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='v_inc', size=(5, 1))],
    [sg.Text('Mirror Axis Horizontal Offset (h) [mm]'), sg.Text(Up, key='h_up', enable_events=True, background_color='gray'),sg.Input(key='h', size=(7, 1), default_text=0.0),sg.Text(Down, key='h_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='h_inc', size=(5, 1))],
    [sg.Text('Mirror Vertical Offset (c) [mm]'), sg.Text(Up, key='c_up', enable_events=True, background_color='gray'),sg.Input(key='c', size=(7, 1)),sg.Text(Down, key='c_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='c_inc', size=(5, 1))],
    [sg.Text('Mirror Horizontal Offset (a) [mm]'), sg.Text(Up, key='a_up', enable_events=True, background_color='gray'),sg.Input(key='a', size=(7, 1)),sg.Text(Down, key='a_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='a_inc', size=(5, 1))],
]

pgm_geometry_layout = [
    [sg.Checkbox(text='Fixed cff', key='fixed_cff', enable_events=True, default=True), sg.Checkbox('Sync Offsets', key='sync_offsets', enable_events=True, default=True)],
    [sg.Text('cff'), sg.Text(Up, key='cff_up', enable_events=True, background_color='gray'),sg.Input(key='cff', size=(5, 1)),sg.Text(Down, key='cff_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.01', key='cff_inc', size=(5, 1))],
    [sg.Frame('Angles', angles_layout, element_justification='center'), sg.Frame('Offsets', offset_layout, element_justification='center')]
    
]

window_layout = [
    [sg.Menu(menu, )],
    [sg.Frame('Beam', beam_layout, element_justification='left')],
    [sg.Frame('Mirror', mirror_layout, element_justification='left')],
    [sg.Frame('Grating', grating_layout, element_justification='left')],
    [sg.Frame('PGM Geometry', pgm_geometry_layout, element_justification='left')],
]

window = sg.Window('PGM Simulation', window_layout)


increase_keys = ['beam_height_up', 'beam_width_up', 'beam_ld_up', 'beam_energy_up',
                'mirror_length_up', 'mirror_width_up', 'mirror_height_up', 'mirror_left_up', 'mirror_right_up', 'mirror_top_up', 'mirror_bottom_up',
                'grating_length_up', 'grating_width_up', 'grating_height_up', 'grating_ld_up', 'grating_left_up', 'grating_right_up', 'grating_top_up', 'grating_bottom_up','cff_up']

decrease_keys = [
                'beam_height_down', 'beam_width_down', 'beam_ld_down', 'beam_energy_down',
                'mirror_length_down', 'mirror_width_down', 'mirror_height_down', 'mirror_left_down', 'mirror_right_down', 'mirror_top_down', 'mirror_bottom_down',
                'grating_length_down', 'grating_width_down', 'grating_height_down', 'grating_ld_down', 'grating_left_down', 'grating_right_down', 'grating_top_down', 'grating_bottom_down', 'cff_down'
]
about = [
    'PGM Simulation with GUI',
    'By Patrick Wang',
    'Version 1.0',
    'Oct. 2023'
]

while True:
    event, values = window.read()
    print(event, values)
    if event in (sg.WIN_CLOSED, 'Exit'):  # always,  always give a way out!
        break

    elif event in increase_keys:
        key = event.split('_')[1]
        group = event.split('_')[0]
        window[f'{group}_{key}'].update(round(float(window[f'{group}_{key}'].get()) + float(window[f'{group}_{key}_inc'].get()),ndigits=3))
    
    elif event in decrease_keys:
        key = event.split('_')[1]
        group = event.split('_')[0]
        window[f'{group}_{key}'].update(round(float(window[f'{group}_{key}'].get()) - float(window[f'{group}_{key}_inc'].get()),ndigits=3))
    
    elif event == 'About':
        sg.popup(*about, title='About')

    elif event is 'Plot':
        pass
window.close()