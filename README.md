# PGM-Components Package
[![Documentation Status](https://readthedocs.org/projects/pgmcomponents/badge/?version=latest)](https://pgmcomponents.readthedocs.io/en/latest/?badge=latest)
[![Static Badge](https://img.shields.io/badge/unstable-v0.2-blue?labelColor=red&color=blue)](https://github.com/patrickwang27/pgmcomponents/releases)


The pgm-components package provides the class PGM for use in simple ray tracing calculations.

The package also contains a linear algebra library for simple manipulation of 3D geometrical objects. These are provided by geometry_elements.py


Picture of a setup is shown below:

![Simple pgm diagram](gui.png "PGM-Components Demo")

## Installation Instructions

To install, download the latest [release](https://github.com/patrickwang27/pgmcomponents/releases) and run the following command in the directory containing setup.py:

```bash
pip install pgmcomponents-some-version.tar.gz
```
To run the GUI:
```bash
python -m pgmcomponents.gui.main
```
or
```bash
pgm-gui
```

