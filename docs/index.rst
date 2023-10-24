.. pgmcomponents documentation master file, created by
   sphinx-quickstart on Tue Oct 24 12:04:09 2023.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

Welcome to pgmcomponents's documentation!
=========================================
.. note::
   This project is under active development. If you spot issues, please report them on the `github issues page <https://github.com/patrickwang27/pgmcomponents/issues>`_.

This is the documentation for pgmcomponents, a python library for simple ray tracing simulations for soft X-ray 
plane grating monochromators.

The library contains an application programming interface (API) and a graphical user interface fron-end.

To install, visit the `releases page <https://github.com/patrickwang27/pgmcomponents/releases>`_ and download the latest release. 

.. code-block:: bash

   pip install pgmcomponents-version_number.tar.gz

The API is documented below, it can be accessed via:

.. code-block:: python

   from pgmcomponents.elements import Plane_Mirror, Grating, PGM
   from pgmcomponents.geometry import Ray3D, Point3D, Vector3D, Plane, calc_beam_size

This could be done in a notebook environment for interactive programming. For an example workflow please see :ref:`example`.


.. toctree::
   :maxdepth: 2
   :caption: Contents:




Indices and tables
==================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`
