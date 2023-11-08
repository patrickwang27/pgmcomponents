Example
=======

.. code-block:: python
    import numpy as np
    import matplotlib.pyplot as plt
    from pgmcomponents.elements import *

    mirror = Plane_Mirror.mirror_from_file('config-pgm.ini')
    grating = Grating.grating_from_file('config-pgm.ini')
    pgm = PGM(grating = grating, mirror = mirror)

    #set up a self-consistent pgm geometry with correct offsets

    pgm.beam_offset = 20
    pgm.mirror.voffset = 20
    pgm.mirror.axis_voffset = 10

    #Computes all angles and coordinates of the mirror and grating
    #based on given parameters

    alpha, beta = pgm.grating.compute_angles()
    grating_corners = pgm.grating.compute_corners()
    pgm.set_theta()
    mirror_corners = pgm.mirror.compute_corners()

    fig, ax = plt.subplots()
    pgm.draw_sideview(ax)
    fig.savefig('sideview.png')

    fig, ax = plt.subplots()
    pgm.draw_topview(ax)
    fig.savefig('topview.png')


.. toctree::
   :maxdepth: 2
   :caption: Contents:

   pgmcomponents.elements
   pgmcomponents.geometry
   pgmcomponents.gui
   pgmcomponents
   example
   acknowledgements





Indices and tables
==================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`