.. PyGM documentation master file, created by
   sphinx-quickstart on Wed Oct 18 09:51:49 2023.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

Welcome to pgmcomponents' documentation!
================================

**pgmcomponents** is a Python library for performing simple ray tracing calculations for the
plane grating monochromator (PGM) used in soft X-ray beamlines. Its main capabilities are:

- Performing ray tracing for a PGM with specified geometry
- Producing a beam footprint diagram as well as a side view ray diagram
- Calculating beam size given parameters about the insertion device

.. note::
   This project is under active development.

.. toctree::
   :maxdepth: 2
   :caption: Contents:

This library has an API for programmatic interaction as well as a GUI front-end for interactive
use. The GUI is based on PySimpleGUI's wrap of tk-inter.

You may wish to start with the :doc:`usage` section for installation instructions.

If you wish to use the API, see :doc:`tutorial` for an step-by-step guide on how to use the
library and produce diagrams.


Indices and tables
==================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`

Contents
========

.. toctree::
   usage
   tutorial
