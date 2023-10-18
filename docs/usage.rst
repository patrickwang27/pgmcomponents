Usage
=====

Installation
------------
To install pgmcomponents, simple run:

.. code-block:: bash

   $ pip install pgmcomponents

If your local python installation is correctly configured,
i.e. the directory where pip installs to is in your PATH, 
the following commands will be available in your console.

The next step is to upgrade your pysimplegui to the latest
development version from the official github repository:

.. code-block:: bash

   $ pgmcomponents-upgrade

Then, either use the provided API in a notebook environment:

.. code-block:: python

    from pgmcomponents import Plane_Mirror, Grating, PGM

    # create a plane mirror
    mirror = Plane_Mirror(voffset=20, 
		      hoffset=0, 
		      axis_voffset=0, 
		      axis_hoffset=0, 
		      dimensions = np.array([450, 70, 50]),
		      theta=45, 
		      plane=Plane(),
		      borders = np.array([0,0,0,0]))

    grating = Grating(line_density=600, 
            energy=250, 
            cff=2, 
            order=1, 
            dimensions = np.array([1,1,1]), 
            borders = np.array([0,0,0,0]))
            
    pgm = PGM(grating=grating, mirror=mirror)

or use the provided GUI front-end:

.. code-block:: bash

   $ pgmcomponents-gui

The GUI front-end provides a simple wrapper for around the API. Its capabilities
are currently limited to drawing figures and exporting them to a file but this is 
under active development.