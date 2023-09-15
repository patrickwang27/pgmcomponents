"""
A python class for simple ray tracing optics.

Based heavily in parts on the work of Matthew Hand's dls-optics-core package
Author: Patrick Wang
Email: patrick.wang@diamond.ac.uk

Version: 0.1
Date: 2023-09-15

"""

import numpy as np
import matplotlib.pyplot as plt
from matplotlib.patches import Circle, Rectangle, Polygon
from matplotlib.collections import PatchCollection
import configparser
from geometry_elements import *

class Grating(object):
    """
    A class for a simple grating

    Based on the work of Matthew Hand

    Parameters
    ----------
    line_density : float
        The line density of the grating in lines per mm
    energy : float
        The energy of the incident beam in eV
    cff : float
        The fixed focus constant of the grating
    order : int
        The diffraction order of the grating
    dimensions : array_like
        The dimensions of the grating in mm
    
    Attributes
    ----------
    line_density : float
        The line density of the grating in lines per mm
    energy : float
        The energy of the incident beam in eV
    cff : float
        The fixed focus constant of the grating
    order : int
        The diffraction order of the grating
    alpha : float
        The incident angle of the beam in degrees
    beta : float    
        The diffraction angle of the beam in degrees
    dimensions : array_like
        The dimensions of the grating in mm

    """
    def __init__(self, line_density=600, energy=250, cff=2, order=1, dimensions = np.array([1,1,1])):

        self._line_density=line_density
        self._energy=energy
        self._cff=cff
        self._order=order
        self._alpha = None
        self._beta = None
        self._dimensions = dimensions
    
    def __repr__(self):
        return "Grating(line_density={}, energy={}, cff={}, order={}, dimensions={})".format(self.line_density, 
                                                                                             self.energy, 
                                                                                             self.cff, 
                                                                                             self.order, 
                                                                                             self.dimensions)
    
    def read_file(self, filename):
        """
        Read grating parameters from a file. 
        See config_pgm.ini for an example.
        A config_file may contain more than one sections, but only the
        grating section will be read.

        Parameters
        ----------
        filename : str
            The name of the file to read from
        """
        config = configparser.ConfigParser()
        config.read(filename)
        
        if len(config['grating']) != 5:
            raise ValueError("Expected exactly five parameters in grating file")

        for key, value in list(config['grating'].items())[0:-1]:
            exec(f"self._{key} = float({value})")
            print(key)
            print(value)
        
        
        self._dimensions = np.array([float(x) for x in config['grating']['dimensions'].split(',')])


    @property
    def line_density(self):
        return self._line_density
    
    @line_density.setter
    def line_density(self, value):
        self._line_density = value

    @property
    def energy(self):
        return self._energy
    
    @energy.setter
    def energy(self, value):
        self._energy = value
        
    @property
    def cff(self):
        return self._cff
    
    @cff.setter
    def cff(self, value):
        self._cff = value
    
    @property
    def order(self):
        return self._order
    
    @order.setter
    def order(self, value):
        self._order = value
    
    @property
    def alpha(self):   
        return self._alpha
    
    @alpha.setter
    def alpha(self, value):
        self._alpha = value

    @property
    def beta(self):
        return self._beta
    
    @beta.setter
    def beta(self, value):
        self._beta = value
    
    @property
    def dimensions(self):
        return self._dimensions
    
    @dimensions.setter
    def dimensions(self, value):
        self._dimensions = value

    def set_angles(self, alpha, beta):
        wavelength = (np.sin(np.deg2rad(alpha)) + np.sin(np.deg2rad(beta))) / (self.line_density*1000*self._order)
        
        try:
            self._energy = 12398.42 / wavelength
        except ZeroDivisionError:
            raise ValueError("Unexpected divide by zero in grating.set_angles")
        
        self._alpha = alpha
        self._beta = beta
        self._cff = self.cff
    
    @staticmethod

    def calc_beta(alpha, line_density, order, energy):
        beta = 0 

        try:
            wavelength = wavelength(energy)
            u = order*line_density*1000*wavelength - np.sin(np.deg2rad(alpha))
            beta = np.rad2deg(np.arcsin(u))

        except ZeroDivisionError:
            raise ValueError("Unexpected divide by zero in grating.calc_beta")
        
        return beta
    
    def wavelength(self):
        return 12398.42 / self.energy
    

class Plane_Mirror(object):
    """
    A class for a simple plane mirror.

    Parameters
    ----------
    dimensions : array_like
        The dimensions of the mirror in mm
    position : Point3D
        The position of the mirror
    normal : Vector3D
        The normal vector of the mirror
    orientation : Vector3D
    """
    
class PGM(object):
    """
    A class for a PGM setup.

    Parameters
    ----------
    grating : Grating
        The grating of the PGM
    mirror : Mirror
        The mirror of the PGM
    mirror_voffset : float
        The vertical offset of the mirror in mm
    mirror_hoffset : float
        The horizontal offset of the mirror in mm
    mirror_axis_voffset : float
        The vertical offset of the mirror axis in mm
    mirror_axis_hoffset : float
        The horizontal offset of the mirror axis in mm
    mirror_leng
    """