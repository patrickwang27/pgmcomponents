import PySimpleGUI as sg
import numpy as np
from components import *
from geometry_elements import *
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2Tk
from gui_widgets import *


class Toolbar(NavigationToolbar2Tk):

    def __init__(self, *args, **kwargs):
        super(Toolbar, self).__init__(*args, **kwargs)


def draw_figure_w_toolbar(canvas, fig, canvas_toolbar):
    if canvas.children:
        for child in canvas.winfo_children():
            child.destroy()
    if canvas_toolbar.children:
        for child in canvas_toolbar.winfo_children():
            child.destroy()

    figure_canvas_agg = FigureCanvasTkAgg(fig, master=canvas)
    figure_canvas_agg.draw()
    toolbar = Toolbar(figure_canvas_agg, canvas_toolbar)
    toolbar.update()
    figure_canvas_agg.get_tk_widget().pack(side='right', fill='both', expand=1)


mirror = Plane_Mirror.mirror_from_file('config_pgm.ini')
grating = Grating.grating_from_file('config_pgm.ini')
pgm = PGM(mirror=mirror, grating=grating)

menu = [['File', ['Open workspace', 'Save', 'Exit']],
        ['Export', ['Export Mirror', 'Export Grating', 'Export Beams', 'Export All']],
        ['Help', 'About...'], ]

energy_control = EPICScontrol('Energy (eV)', 1000.,100., '-ENERGY-', pgm=pgm)
cff_control = EPICScontrol('CFF', 2.25,0.01, '-CFF-',pgm=pgm)
order_control = EPICScontrol('Order', 1,1, '-ORDER-',pgm=pgm)
line_density_control = EPICScontrol('Line Density (l/mm)', 1000,100, '-LINE_DENSITY-',pgm=pgm)
offsets_control = OffsetsControl(pgm.values(), '-OFFSETS-')
up_events = {'-ENERGY-_up':energy_control, '-CFF-_up':cff_control, '-ORDER-_up':order_control, '-LINE_DENSITY-_up':line_density_control}
down_events = {'-ENERGY-_down':energy_control, '-CFF-_down':cff_control, '-ORDER-_down':order_control, '-LINE_DENSITY-_down':line_density_control}


beam_config = Beam_Config()

config_frame = sg.Frame('Config', [[
    sg.Button('Beam'), sg.Button('Mirror'), sg.Button('Grating')
]])


layout = [[
    [sg.Menu(menu)],
    [sg.Column([
        [energy_control.frame],
        [cff_control.frame]
    ]), 
    sg.Column([
        [order_control.frame],
        [line_density_control.frame]
    ])],
    [config_frame, sg.Frame('Units',[[sg.Text('All units of distance are in mm\nunless othewise noted.')]])],
    [offsets_control.frame],
    [sg.Button('Print')]
]]

window = sg.Window('PGM Simulation', layout, finalize=True,icon='icon.png')


while True:
    event, values = window.read()
    pgm.energy = values['-ENERGY-']
    pgm.cff = values['-CFF-']
    pgm.order = values['-ORDER-']
    pgm.grating.line_density = values['-LINE_DENSITY-']
    if event == sg.WIN_CLOSED or event == 'Exit':
        break
    elif event == 'Beam':
        beam_config.window(pgm)
    elif event == 'Mirror':
        configuration_popup('Mirror Configuration', '-MIRROR-', pgm.mirror)
    elif event == 'Grating':
        configuration_popup('Grating Configuration', '-GRATING-', pgm.grating)
    elif event == 'Export Mirror':
        pass
    elif event == 'Export Grating':
        pass
    elif event == 'Export Beams':
        pass
    elif event == 'Export All':
        pass
    elif event == 'About...':
        sg.Popup(*['PGM Simulation', 'version 0.1', 'Patrick Wang'], 'About')
    
    elif event == '-OFFSETS-_calculate':
        if values['-OFFSETS-_calculate']:
            window['-OFFSETS-_mirror_vertical'].update(read_only=True)
            window['-OFFSETS-_mirror_axis_vertical'].update(read_only=True)
        
        else:
            window['-OFFSETS-_mirror_vertical'].update(read_only=False)
            window['-OFFSETS-_mirror_axis_vertical'].update(read_only=False)

    elif event == '-OFFSETS-_beam_vertical':
        try:
            pgm.beam_offset = float(values['-OFFSETS-_beam_vertical'])
            
            offsets_control.calcoffsets(window, pgm)
        except ValueError:
            pass

    elif event == 'Open workspace':
        pass
    elif event == 'Save':
        pass
    elif event in up_events.keys():
        up_events[event].up(window, pgm)
    elif event in down_events.keys():
        down_events[event].down(window, pgm)

    elif event == 'Print':
        print(pgm)
    
        