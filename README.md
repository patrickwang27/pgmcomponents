# PGM-Components Package
[![Documentation Status](https://readthedocs.org/projects/pgmcomponents/badge/?version=latest)](https://pgmcomponents.readthedocs.io/en/latest/?badge=latest)

The pgm-components package provides the class PGM for use in simple ray tracing calculations.

The package also contains a linear algebra library for simple manipulation of 3D geometrical objects. These are provided by geometry_elements.py

See documentation html for more details.

Documentation located in ./docs/pgm-components as html files.

Picture of a setup is shown below:

![Simple pgm diagram](demo.png "PGM-Components Demo")

## Installation Instructions

To install, download the latest release and unzip.

In the root directory of pgmcomponents, run:
`$ python -m pip install -e .`

Before using the GUI for the first time, run:
`$ pgmcomponents-upgrade`
follow popup instructions to upgrade PySimpleGUI.

To run the GUI:
`$ pgmcomponents`


