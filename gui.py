import PySimpleGUI as sg
import numpy as np
from components import *
from geometry_elements import *
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2Tk

Up = '▲'
Down ='▼'

# For integration of interactive plots, from PySimpleGUI's example.
plt.ion()
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

beam_layout = [
    [sg.Text('Height (mm)'), sg.Text(Up, key='beam_height_up', enable_events=True, background_color='gray'),sg.Input(key='beam_height', size=(7, 1), default_text=5.0, enable_events=True),sg.Text(Down, key='beam_height_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='beam_height_inc', size=(5, 1))],
    [sg.Text('Width (mm)'), sg.Text(Up, key='beam_width_up', enable_events=True, background_color='gray'),sg.Input(key='beam_width', size=(7, 1), default_text=5.0, enable_events=True),sg.Text(Down, key='beam_width_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='beam_width_inc', size=(5, 1))],
    [sg.Text('Line Density (l/mm)'), sg.Text(Up, key='beam_ld_up', enable_events=True, background_color='gray'),sg.Input(key='beam_ld', size=(7, 1), default_text=600.0, enable_events=True),sg.Text(Down, key='beam_ld_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='10', key='beam_ld_inc', size=(5, 1))],
    [sg.Text('Energy (eV)'), sg.Text(Up, key='beam_energy_up', enable_events=True, background_color='gray'),sg.Input(key='beam_energy', size=(7, 1), default_text=1000., enable_events=True),sg.Text(Down, key='beam_energy_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='10', key='beam_energy_inc', size=(5, 1))],
]



mirror_layout = [
    [sg.Text('Length (mm)'), sg.Text(Up, key='mirror_length_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_length', size=(7, 1), default_text=450., enable_events=True),sg.Text(Down, key='mirror_length_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_length_inc', size=(5, 1))],
    [sg.Text('Width (mm)'), sg.Text(Up, key='mirror_width_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_width', size=(7, 1), default_text=70., enable_events=True),sg.Text(Down, key='mirror_width_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_width_inc', size=(5, 1))],
    [sg.Text('Height (mm)'), sg.Text(Up, key='mirror_height_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_height', size=(7, 1), default_text=50., enable_events=True),sg.Text(Down, key='mirror_height_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_height_inc', size=(5, 1))],
    [sg.Text('Left Border (mm)'), sg.Text(Up, key='mirror_left_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_left', size=(7, 1), default_text=0., enable_events=True),sg.Text(Down, key='mirror_left_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_left_inc', size=(5, 1))],
    [sg.Text('Right Border (mm)'), sg.Text(Up, key='mirror_right_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_right', size=(7, 1),default_text=0., enable_events=True),sg.Text(Down, key='mirror_right_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_right_inc', size=(5, 1))],
    [sg.Text('Top Border (mm)'), sg.Text(Up, key='mirror_top_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_top', size=(7, 1), default_text=0., enable_events=True),sg.Text(Down, key='mirror_top_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_top_inc', size=(5, 1))],
    [sg.Text('Bottom Border (mm)'), sg.Text(Up, key='mirror_bottom_up', enable_events=True, background_color='gray'),sg.Input(key='mirror_bottom', size=(7, 1), default_text=0., enable_events=True),sg.Text(Down, key='mirror_bottom_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='mirror_bottom_inc', size=(5, 1))],
]

grating_layout = [
    [sg.Text('Length (mm)'), sg.Text(Up, key='grating_length_up', enable_events=True, background_color='gray'),sg.Input(key='grating_length', size=(7, 1), default_text=150., enable_events=True),sg.Text(Down, key='grating_length_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_length_inc', size=(5, 1))],
    [sg.Text('Width (mm)'), sg.Text(Up, key='grating_width_up', enable_events=True, background_color='gray'),sg.Input(key='grating_width', size=(7, 1), default_text=40., enable_events=True),sg.Text(Down, key='grating_width_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_width_inc', size=(5, 1))],
    [sg.Text('Height (mm)'), sg.Text(Up, key='grating_height_up', enable_events=True, background_color='gray'),sg.Input(key='grating_height', size=(7, 1), default_text=50., enable_events=True),sg.Text(Down, key='grating_height_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_height_inc', size=(5, 1))],
    [sg.Text('Line Density (l/mm)'), sg.Text(Up, key='grating_ld_up', enable_events=True, background_color='gray'),sg.Input(key='grating_ld', size=(7, 1), default_text=1100., enable_events=True),sg.Text(Down, key='grating_ld_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='10', key='grating_ld_inc', size=(5, 1))],
    [sg.Text('Left Border (mm)'), sg.Text(Up, key='grating_left_up', enable_events=True, background_color='gray'),sg.Input(key='grating_left', size=(7, 1), default_text=0., enable_events=True),sg.Text(Down, key='grating_left_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_left_inc', size=(5, 1))],
    [sg.Text('Right Border (mm)'), sg.Text(Up, key='grating_right_up', enable_events=True, background_color='gray'),sg.Input(key='grating_right', size=(7, 1), default_text=0., enable_events=True),sg.Text(Down, key='grating_right_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_right_inc', size=(5, 1))],
    [sg.Text('Top Border (mm)'), sg.Text(Up, key='grating_top_up', enable_events=True, background_color='gray'),sg.Input(key='grating_top', size=(7, 1), default_text=0., enable_events=True),sg.Text(Down, key='grating_top_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_top_inc', size=(5, 1))],
    [sg.Text('Bottom Border (mm)'), sg.Text(Up, key='grating_bottom_up', enable_events=True, background_color='gray'),sg.Input(key='grating_bottom', size=(7, 1), default_text=0., enable_events=True),sg.Text(Down, key='grating_bottom_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='grating_bottom_inc', size=(5, 1))],
]
menu = [['File', ['Open', ['Load Mirror', 'Load Grating', 'Load PGM'], 'Save', 'Exit']],
        ['Export', ['Export Mirror', 'Export Grating', 'Export PGM']], 
        ['Plots'], 
        ['Help', ['About', 'Documentation']]]

angles_layout=[
    [sg.Text('α'), sg.Input(key='alpha', size=(5, 1), readonly=True, enable_events=True)],
    [sg.Text('β'), sg.Input(key='beta', size=(5, 1), readonly=True, enable_events=True)],
    [sg.Text('θ') , sg.Input(key='theta', size=(5, 1), readonly=True, enable_events=True)],
]

offset_layout = [
    [sg.Text('Beam offset (b) [mm]'), sg.Text(Up, key='b_val_up', enable_events=True, background_color='gray',visible=False),sg.Input(key='b_val', size=(7, 1), enable_events=True,readonly=True),sg.Text(Down, key='b_val_down',enable_events=True,visible=False,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='b_val_inc', size=(5, 1))],
    [sg.Text('Mirror Axis Vertical Offset (v) [mm]'), sg.Text(Up, key='v_val_up', enable_events=True, background_color='gray',visible=False),sg.Input(key='v_val', size=(7, 1), enable_events=True,readonly=True),sg.Text(Down, key='v_val_down',enable_events=True,visible=False,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='v_val_inc', size=(5, 1))],
    [sg.Text('Mirror Axis Horizontal Offset (h) [mm]'), sg.Text(Up, key='h_val_up', enable_events=True, background_color='gray'),sg.Input(key='h_val', size=(7, 1), default_text=0.0, enable_events=True),sg.Text(Down, key='h_val_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='h_val_inc', size=(5, 1))],
    [sg.Text('Mirror Vertical Offset (c) [mm]'), sg.Text(Up, key='c_val_up', enable_events=True, background_color='gray',visible=False),sg.Input(key='c_val', size=(7, 1), enable_events=False,readonly=True),sg.Text(Down, key='c_val_down',enable_events=True,visible=False,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='c_val_inc', size=(5, 1))],
    [sg.Text('Mirror Horizontal Offset (a) [mm]'), sg.Text(Up, key='a_val_up', enable_events=True, background_color='gray'),sg.Input(key='a_val', size=(7, 1), enable_events=True),sg.Text(Down, key='a_val_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.1', key='a_val_inc', size=(5, 1))],
]

pgm_geometry_layout = [
    [sg.Checkbox(text='Fixed cff', key='fixed_cff', enable_events=True, default=True), sg.Checkbox('Sync Offsets', key='sync_offsets', enable_events=True, default=True)],
    [sg.Text('Order'), sg.Text(Up, key='order_up', enable_events=True, background_color='gray'),sg.Input(key='order', size=(3, 1), default_text=1., enable_events=True),sg.Text(Down, key='order_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text=1., key='order_inc', size=(5, 1))],
    [sg.Text('cff'), sg.Text(Up, key='cff_value_up', enable_events=True, background_color='gray'),sg.Input(key='cff_value', size=(5, 1), enable_events=True, default_text=2.25),sg.Text(Down, key='cff_value_down',enable_events=True,background_color='gray'),sg.Text('±', ), sg.Input(default_text='0.01', key='cff_value_inc', size=(5, 1))],
    [sg.Frame('Angles', angles_layout, element_justification='center'), sg.Frame('Offsets', offset_layout, element_justification='center')]
    
]

window_layout = [[
    sg.Menu(menu),
    [sg.Column([[sg.Frame('Beam', beam_layout, element_justification='center')]], element_justification='center'),
     sg.Column([[sg.Frame('Mirror', mirror_layout, element_justification='center')]], element_justification='center'),
     sg.Column([[sg.Frame('Grating', grating_layout, element_justification='center')]], element_justification='center')],
    [sg.Frame('PGM Geometry', pgm_geometry_layout, element_justification='center'), sg.Frame('Topview', [[sg.Canvas(key='top_cv', size=(400 * 2, 400))], [sg.Canvas(key='top_control')]], element_justification='center')],
    [sg.Button('Print PGM')]
]]

window = sg.Window('PGM Simulation', window_layout)


increase_keys = ['beam_height_up', 'beam_width_up', 'beam_ld_up', 'beam_energy_up',
                'mirror_length_up', 'mirror_width_up', 'mirror_height_up', 'mirror_left_up', 'mirror_right_up', 'mirror_top_up', 'mirror_bottom_up',
                'grating_length_up', 'grating_width_up', 'grating_height_up', 'grating_ld_up', 'grating_left_up', 'grating_right_up', 'grating_top_up', 'grating_bottom_up','cff_value_up',
                'order_up', 'alpha_up', 'beta_up', 'theta_up',
                'a_val_up', 'b_val_up', 'c_val_up', 'v_val_up', 'h_val_up']

decrease_keys = [
                'beam_height_down', 'beam_width_down', 'beam_ld_down', 'beam_energy_down',
                'mirror_length_down', 'mirror_width_down', 'mirror_height_down', 'mirror_left_down', 'mirror_right_down', 'mirror_top_down', 'mirror_bottom_down',
                'grating_length_down', 'grating_width_down', 'grating_height_down', 'grating_ld_down', 'grating_left_down', 'grating_right_down', 'grating_top_down', 'grating_bottom_down', 'cff_value_down',
                'order_down', 'alpha_down', 'beta_down', 'theta_down',
                'a_val_down', 'b_val_down', 'c_val_down', 'v_val_down', 'h_val_down']

about = [
    'PGM Simulation with GUI',
    'By Patrick Wang',
    'Version 1.0',
    'Oct. 2023'
]
parameter_keys = [
    'beam_height', 'beam_width', 'beam_ld', 'beam_energy',
    'mirror_length', 'mirror_width', 'mirror_height', 'mirror_left', 'mirror_right', 'mirror_top', 'mirror_bottom',
    'grating_length', 'grating_width', 'grating_height', 'grating_ld', 'grating_left', 'grating_right', 'grating_top', 
    'grating_bottom', 'cff', 'a', 'b', 'c', 'h', 'v', 'alpha', 'beta', 'theta']

mirror_keys = [
    'mirror_length', 'mirror_width', 'mirror_height', 'mirror_left', 'mirror_right', 'mirror_top', 'mirror_bottom',
    'a', 'c', 'h', 'v', 'theta'
]

grating_keys = [
    'grating_length', 'grating_width', 'grating_height', 'grating_ld', 'grating_left', 'grating_right', 'grating_top', 'grating_bottom',
    'cff', 'order', 'alpha', 'beta',
    'beam_energy'
]

pgm_keys = [
    'beam_height', 'beam_width', 'beam_ld', 'beam_energy', 'b'
]

param_dict = {
    'a_val':'hoffset',
    'c_val':'voffset',
    'v_val':'axis_voffset',
    'h_val':'axis_hoffset',
    'b_val':'beam_offset'
}
mirror = Plane_Mirror()
grating = Grating()
pgm = PGM(grating=grating, mirror=mirror)
_ = pgm.grating.compute_corners()
_ = pgm.mirror.compute_corners()
pgm.generate_rays()


while True:
    event, values = window.read()

    
    if event in mirror_keys:
        
        if len(event) == 1:
            try:
                pgm.mirror.__setattr__(param_dict[event], float(window[event].get()))
            except Exception as e:
                sg.popup(e)

        elif event.split('_')[1] in ['left', 'right', 'top', 'bottom']:
           
            pgm.mirror.__setattr__('borders', np.array([float(window[f'mirror_{key}'].get()) for key in ['left', 'right', 'top', 'bottom']]))
            

        elif event.split('_')[1] in ['length', 'width', 'height']:
            try:
                pgm.mirror.__setattr__('dimensions', np.array([float(window[f'mirror_{key}'].get()) for key in ['length', 'width', 'height']]))
            except Exception as e:
                sg.popup(e)
            
        
    if event:
        print('event:',event)
        """
        fig = plt.figure()
        ax = fig.add_subplot(111)
        DPI = fig.get_dpi()
        fig.set_size_inches(404 * 2 / float(DPI), 404 / float(DPI))
        pgm.draw_topview(ax)
        draw_figure_w_toolbar(window['top_cv'].TKCanvas, fig, window['top_control'].TKCanvas)
        """
    print(event, values)
    if event in (sg.WIN_CLOSED, 'Exit'):
        break

    elif event in increase_keys:
        key = event.split('_')[1]
        group = event.split('_')[0]
        window[f'{group}_{key}'].update(round(float(window[f'{group}_{key}'].get()) + float(window[f'{group}_{key}_inc'].get()),ndigits=3))
        window.write_event_value(f'{group}_{key}', round(float(window[f'{group}_{key}'].get()) + float(window[f'{group}_{key}_inc'].get()),ndigits=3))
        
    elif event in decrease_keys:
        key = event.split('_')[1]
        group = event.split('_')[0]
        window[f'{group}_{key}'].update(round(float(window[f'{group}_{key}'].get()) - float(window[f'{group}_{key}_inc'].get()),ndigits=3))
        window.write_event_value(f'{group}_{key}', round(float(window[f'{group}_{key}'].get()) - float(window[f'{group}_{key}_inc'].get()),ndigits=3))
    elif event == 'About':
        sg.popup(*about, title='About')
    
    elif event == 'sync_offsets':
        if window['sync_offsets'].get():
            window['c_val'].update(readonly = True)
            window['v_val'].update(readonly = True)
            window['b_val'].update(readonly = True)
            window['c_val_inc'].update(visible = False)
            window['v_val_inc'].update(visible = False)
            window['b_val_inc'].update(visible = False)
            window['c_val_up'].update(visible = False)
            window['v_val_up'].update(visible = False)
            window['b_val_up'].update(visible = False)
            window['c_val_down'].update(visible = False)
            window['v_val_down'].update(visible = False)
            window['b_val_down'].update(visible = False)
            window.refresh()


        elif window['sync_offsets'].get() == False:
            window['c_val'].update(readonly = False)
            window['v_val'].update(readonly = False)
            window['b_val'].update(readonly = False)
            window['c_val_inc'].update(visible = True)
            window['v_val_inc'].update(visible = True)
            window['b_val_inc'].update(visible = True)
            window['c_val_up'].update(visible = True)
            window['v_val_up'].update(visible = True)
            window['b_val_up'].update(visible = True)
            window['c_val_down'].update(visible = True)
            window['v_val_down'].update(visible = True)
            window['b_val_down'].update(visible = True)
            window.refresh()
            

            
            
            window.refresh()
    elif event == 'Print PGM':
        sg.popup(pgm)

window.close()