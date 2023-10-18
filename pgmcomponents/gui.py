import PySimpleGUI as sg
from colorama import init
import numpy as np
from .components import *
from .geometry_elements import *
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2Tk
from .gui_widgets import *
import dill as pickle
from time import sleep

mirror = Plane_Mirror(hoffset=50, voffset=0, dimensions=np.array([450,70,50]))
grating = Grating(line_density=400, order = 1, cff=2., energy=250, dimensions=np.array([150,40,50]))
pgm = PGM(mirror=mirror, grating=grating)
pgm.beam_height= 5
pgm.beam_width = 5
pgm.beam_offset = 20

menu = [['File', ['Open workspace', 'Save workspace', 'Exit']],
        ['Export', ['Export Mirror', 'Export Grating', 'Export Beams', 'Export All']],
        ['Help', 'About...'], ]

energy_control = EPICScontrol('Energy (eV)', 250.,10., '-ENERGY-', pgm=pgm)
cff_control = EPICScontrol(u'Cff', 2.,0.1, '-CFF-',pgm=pgm)
order_control = EPICScontrol('Order', 1,1, '-ORDER-',pgm=pgm)
line_density_control = EPICScontrol('Line Density (l/mm)', 400,100, '-LINE_DENSITY-',pgm=pgm)
offset_defaults = pgm.values()
offset_defaults['beam_vertical'] = 20
offsets_control = OffsetsControl(offset_defaults, '-OFFSETS-')
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


_,_ = pgm.grating.compute_angles()
_=pgm.mirror.compute_corners()
_=pgm.grating.compute_corners()
pgm.set_theta()
_=pgm.mirror.compute_corners()

        
topview_widget.draw(window)
sideview_widget.draw(window)
_=pgm.mirror.compute_corners()
_=pgm.grating.compute_corners()
topview_widget.draw(window)
sideview_widget.draw(window)

initial_draw(window, pgm, topview_widget, sideview_widget, offsets_control)
print(pgm)
while True:
    event, values = window.read()
    print(pgm)
    update_and_draw(window, pgm, values, topview_widget, sideview_widget, energy_control, cff_control, order_control, line_density_control, offsets_control)
    if window.find_element_with_focus() is None:
        pass
    else:
        window.find_element_with_focus().set_focus(force=True)


    


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
        beam_config.window(pgm, window)
    elif event == 'Mirror':
        configuration_popup('Mirror Configuration', '-MIRROR-', pgm.mirror, window)
    elif event == 'Grating':
        configuration_popup('Grating Configuration', '-GRATING-', pgm.grating, window)
    elif event == 'Export Mirror':
        pass
    elif event == 'Export Grating':
        pass
    elif event == 'Export Beams':
        pass
    elif event == 'Export All':
        pass
    elif event == 'About...':
        sg.Popup(*['PGM Simulation', 'version 0.2', 'Patrick Wang'], 'About')
    
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
                window.write_event_value('Update', None)
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
        
