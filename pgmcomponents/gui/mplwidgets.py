"""
File supplies necessary mpl widgets for
gui_widgets.py

version: 0.2.2

"""

# plt not used
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2Tk
# Canvas not used
from PySimpleGUI import Canvas

def draw_figure_w_toolbar(canvas, fig, canvas_toolbar):
    """
    Method to draw on a given canvas and toolbar.

    Parameters
    ----------
    canvas : Canvas
        Canvas to draw on.
    fig : Figure
        Figure to draw.
    canvas_toolbar : Canvas
        Canvas to draw toolbar on.
    
    """
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


class Toolbar(NavigationToolbar2Tk):
    # no need for this __init__ method as calls it's parent class's __init__
    def __init__(self, *args, **kwargs):
        super(Toolbar, self).__init__(*args, **kwargs)