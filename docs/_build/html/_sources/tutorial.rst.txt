API Tutorial
============

Ray tracing may be performed either in a script file or interactively in a jupyter notebook.

To start, import all the necessary components:

.. code-block:: python

    from pgmcomponents import Plane_Mirror, Grating, PGM

Then create the components according to specification:

.. code-block:: python
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

To ray trace, the steps are:
- Generating a list of rays according to the offsets
- Calculating the angles (theta, alpha, beta)
- Calculating the corners of the optical elements and their surfaces

for fixed cff mode of operation, the code may look something like this:

.. code-block:: python
    pgm.generate_rays() # this generate the rays and stores them in pgm.rays
    pgm.grating.calculate_angles() # this calculates the angles of the rays
    pgm.set_theta() # this sets the theta angle of the rays make with the mirror
    pgm.grating.calculate_corners() # this calculates the corners of the grating
    pgm.mirror.calculate_corners() # this calculates the corners of the mirror

Now all there is left to do is to plot and save the figures. To do that, the methods :func:draw_topview()

