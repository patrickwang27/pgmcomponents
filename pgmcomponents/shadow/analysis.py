"""
A collection of functions to help with the analysis of the data
produced by SHADOW.


"""

import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

def calc_ratio(df:pd.DataFrame , column = 'Intensity')-> np.ndarray:
    heading = {"Intensity": 'Intensity_dict', "Height":"Height_dict", "Rays": "Ray Dict"}
    E = df['E'].to_numpy()
    vals = df[heading[column]]
    evaluated_vals = [eval(row) for row in vals]
    #print(evaluated_vals)
    vals_list = np.array([np.array(list(row.values())) for row in evaluated_vals])
    offset_vals = np.array([np.hstack((row[0], row[:-1])) for row in vals_list])
    ratios = (vals_list/offset_vals)[:,1:]
    if column == 'Rays':
        return E, vals_list
    data = np.array([np.hstack((e, ratio)) for e, ratio in zip(E, ratios)])
    
    return data


def draw_ratio(df:pd.DataFrame, 
               ax:plt.Axes, 
               column= 'Intensity', 
               return_lines=False, 
               title = None, 
               xlabel=None, 
               ylabel=None)-> tuple | None:
    labels = {"Intensity":"Relative Intensity","Height": "Relative Beam Height","Rays": "Relative Ray Ratio"} 
    if column == "Rays":
        E, data = calc_ratio(df, column=column)
        labels = [f"OE{i+1}" for i in range(0,9)]
    else:
        data = calc_ratio(df, column=column)
        labels = [f"OE{i+2}/OE{i+1}" for i in range(9)]

    lines = []
    
    for i, label in zip(np.arange(0,10,1), labels):
        lines.append(ax.plot(E, data[0:,i], label=label, markersize=1, marker='^', linewidth=20-2*i))
    #lines = [l1, l2, l3, l4, l5, l6, l7, l8]
    if title != None: ax.set_title(title)
    if xlabel != None: ax.set_xlabel(xlabel)
    if ylabel != None: ax.set_ylabel(ylabel)
    return (lines, labels) if return_lines else None