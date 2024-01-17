# pgmcomponents canvas branch

This is the development branch for switching visualisation to using tkcanvas in lieu of matplotlib.
Matplotlib suffers from performance issues when modifying parameters quickly which leads to a jarring
user experience.

## Roadmap/To-do:

- Modify current visualisation widget classes to create a pysimplegui.graph instance 
- Design how axes and axis labels are best presented
- Modifying methods for drawing beam footprints in the new reference frame.



