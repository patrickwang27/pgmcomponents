import PySimpleGUI as sg
import numpy as np
from components import *
from geometry_elements import *
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2Tk
from gui_widgets import *
import dill as pickle
from time import sleep
plt.ion

mirror = Plane_Mirror.mirror_from_file('config_pgm.ini')
grating = Grating.grating_from_file('config_pgm.ini')
pgm = PGM(mirror=mirror, grating=grating)

menu = [['File', ['Open workspace', 'Save workspace', 'Exit']],
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
topview_widget = Topview_Widget(pgm, size=(1000,500))
sideview_widget = Sideview_Widget(pgm, size=(1600,400))

config_frame = sg.Frame('Config', [[
    sg.Button('Beam'), sg.Button('Mirror'), sg.Button('Grating')
]])


layout = [[
    [sg.Menu(menu)],
    [sg.Column([
        [energy_control.frame, order_control.frame],
        [cff_control.frame, line_density_control.frame],
        [config_frame], [offsets_control.frame], [sg.B('Update')]
    ]), 
    sg.Column([
        [topview_widget.frame],
    ])
    ],
    [sideview_widget.frame]
]]

window = sg.Window('PGM Simulation', layout, finalize=True,icon='icon.png', resizable=True)

while True:
    window.find_element_with_focus().set_focus(force=True)
    event, values = window.read()

    print(event)
    print(pgm)
    pgm.energy = float(values['-ENERGY-'])
    pgm.cff = float(values['-CFF-'])
    pgm.order = int(values['-ORDER-'])
    pgm.grating.line_density = float(values['-LINE_DENSITY-'])
    _,_ = pgm.grating.compute_angles()
    _=pgm.mirror.compute_corners()
    _=pgm.grating.compute_corners()
    pgm.set_theta()
    _=pgm.mirror.compute_corners()
    topview_widget.draw(window)
    sideview_widget.draw(window)


    if event == sg.WIN_CLOSED or event == 'Exit':
        break

    if event == 'Update':
        pgm.energy = float(values['-ENERGY-'])
        pgm.cff = float(values['-CFF-'])
        pgm.order = int(values['-ORDER-'])
        pgm.grating.line_density = float(values['-LINE_DENSITY-'])
        offsets_control.updatepgm(window, pgm)
        if values['-OFFSETS-_calculate']:
            offsets_control.calcoffsets(window, pgm)
        _,_ = pgm.grating.compute_angles()
        _=pgm.mirror.compute_corners()
        _=pgm.grating.compute_corners()
        pgm.set_theta()
        _=pgm.mirror.compute_corners()
        topview_widget.draw(window)
        sideview_widget.draw(window)


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
            window['-OFFSETS-_mirror_vertical'].update(readonly=True)
            window['-OFFSETS-_mirror_axis_vertical'].update(readonly=True)
        
        else:
            window['-OFFSETS-_mirror_vertical'].update(readonly=False)
            window['-OFFSETS-_mirror_axis_vertical'].update(readonly=False)
    
    elif event == '-OFFSETS-_beam_vertical':
        if values['-OFFSETS-_beam_vertical'] not in ['',' ', '-']:
            window.find_element('-OFFSETS-_beam_vertical').set_focus(force=True)
            offsets_control.updatepgm(window,pgm)
            if values['-OFFSETS-_calculate']:
                offsets_control.calcoffsets(window, pgm)
        else:
            window.find_element('-OFFSETS-_beam_vertical').set_focus(force=True)
            continue
    
    elif event == 'Open workspace':
        pickle_file = sg.popup_get_file('Open workspace', file_types=(('PGM Workspace', '*.pgm'),))
        if pickle_file:
            with open(pickle_file, 'rb') as file:
                pgm = pickle.load(file)
                beam_config = pickle.load(file)
                offsets_control_calculateq = pickle.load(file)
                energy_control.write(window, pgm.energy, pgm)
                cff_control.write(window, pgm.grating.cff, pgm)
                order_control.write(window, pgm.grating.order, pgm)
                line_density_control.write(window, pgm.grating.line_density, pgm)
                offsets_control.write(window, pgm.values(), calcq=offsets_control_calculateq)
        continue
        
    elif event == 'Save workspace':
        save_layout = [[
            [sg.Text('Save workspace as:')],
            [sg.FolderBrowse('Select folder', key='-FOLDER-')],
            [sg.Text('File Name:'), sg.Input(key='-FILENAME-', size=(20,1))],
            [sg.Button('Save'), sg.Button('Cancel')]
        ]]
        save_window = sg.Window('Save Workspace', save_layout, finalize=True)
        while True:
            event, values = save_window.read()
            if event == sg.WIN_CLOSED or event == 'Cancel':
                save_window.close()
                break
            elif event == 'Save':
                filename = values['-FILENAME-']
                folder = values['-FOLDER-']
                with open(folder+'/'+filename+'.pgm', 'wb') as file:
                    pickle.dump(pgm, file)
                    pickle.dump(beam_config, file)
                    pickle.dump(offsets_control.calculate, file)
                    save_window.close()
                sg.Popup('Workspace saved')
                break
            
        pass
    elif event in up_events.keys():
        up_events[event].up(window, pgm)
    elif event in down_events.keys():
        down_events[event].down(window, pgm)
        