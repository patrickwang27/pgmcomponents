

Welcome to pgmcomponents's documentation!
=========================================
.. note::
   This project is under active development. If you spot issues, please report them on the `github issues page <https://github.com/patrickwang27/pgmcomponents/issues>`_.

This is the documentation for pgmcomponents, a python library for simple ray tracing simulations for soft X-ray 
plane grating monochromators.

The library contains an application programming interface (API) and a graphical user interface fron-end.

To install the latest release, visit the `releases page <https://github.com/patrickwang27/pgmcomponents/releases>`_ and download the latest release. 

.. code-block:: bash

   pip install pgmcomponents-version_number.tar.gz

To install/upgrade to the lates development version, you can install directly from git:

.. code-block:: bash

   python -m pip install git+https://github.com/patrickwang27/pgmcomponents.git
   python -m pip install --upgrade --no-deps --force-reinstall git+https://github.com/patrickwang27/pgmcomponents.git


The API is documented below, it can be accessed via:

.. code-block:: python

   from pgmcomponents.elements import Plane_Mirror, Grating, PGM
   from pgmcomponents.geometry import Ray3D, Point3D, Vector3D, Plane, calc_beam_size

This could be done in a notebook environment for interactive programming. For an example workflow please see :ref:`example`.

To access the GUI, run the following command in a terminal:

.. code-block:: bash

   pgm-gui

This will only work if the location where the package is installed is in your PATH variable.

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
