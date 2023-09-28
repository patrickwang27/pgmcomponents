"""
A library of classes for modelling light rays and beams.

Based on, in parts, the work of Matthew Hand's dls-optics-core package

Author: Patrick Wang
Email: patrick.wang@diamond.ac.uk

Version: 0.1
Date: 2023-09-15

"""

import numpy as np
from geometry_elements import Plane, Point3D, Vector3D


class Ray3D(object):
    """
    A class for a simple 3D ray

    Parameters
    ----------
    position : Point3D
        The position of the ray
    vector : Vector3D
        The vector of the ray
    
    Methods
    ----------
    __repr__ : str
        Returns a string representation of the ray

    Attributes
    ----------
    position : Point3D
        The position of the ray
    vector : Vector3D
        The vector of the ray

    """
    def __init__(self, position, vector):
        self._position = position
        vector_mag = vector.norm()
        if vector_mag == 0:
            raise ValueError("Vector magnitude cannot be zero")
        self._vector = vector / vector_mag

    def __repr__(self):
        return "Ray3D(position={}, vector={})".format(self.position, self.vector)

    @property
    def position(self):
        return self._position
    
    @position.setter
    def position(self, value):
        self._position = value
    
    @property
    def vector(self):
        return self._vector
    
    @vector.setter
    def vector(self, value):
        self._vector = value.normalize()

class Image(object):
    """
    A class for a 2D image.

    Parameters
    ----------
    width : float
        The width of the image
    height : float
        The height of the image
    h_div : int
        The number of horizontal divisions
    v_div : int
        The number of vertical divisions

    Methods
    ----------
    __repr__ : str
        Returns a string representation of the image

    """
    def __init__(self, width, height, h_div, v_div):
        self.width = width
        self.height = height
        self.h_div = h_div
        self.v_div = v_div
    
    def __repr__(self):
        return "Image(width={}, height={}, h_div={}, v_div={})".format(self.width, self.height, self.h_div, self.v_div)

def calc_beam_size(electron_size,
                   electron_div,
                   wavelength,
                   distance,
                   length,
                   num_of_sigmas=3,
                   insertion_device='undulator'
                   ):
    """
    Calculate the beam size based on the electron size and divergence.

    Parameters
    ----------
    electron_size : float
        The electron size in um
    electron_div : float
        The electron divergence in urad
    photon_energy : float
        The photon energy in eV
    distance : float
        The distance from the source to the image plane in m
    length : float
        The length of the insertion device in m
    num_of_sigmas : int
        The number of sigmas to use when calculating the beam size
    insertion_device : str
        The type of insertion device, can be 'undulator' or 'wiggler', default is 'undulator'
    
    Returns
    ----------
    float
        The RMS photon beam size at distance in mm

    """
    if insertion_device == 'undulator':
        source_size = calc_source_size(electron_size, wavelength, length)
        source_div = calc_source_div(electron_div, wavelength, length)
        return np.sqty(source_size**2 + (source_div*distance)**2)*1e3*num_of_sigmas
    else:
        raise NotImplementedError("Only undulator is currently supported")
        


def calc_source_size(electron_size, wavelength, length):
    """
    Calculates the source size based on provided parameters.

    Parameters
    ----------
    electron_size : float
        The electron size in um

    wavelength : float
        The wavelength in nm
    
    length : float
        The length of the insertion device in m
    
    Returns
    ----------
    float
        The RMS source size in m
    """
    return np.sqty((electron_size*1e-6)**2 + (wavelength*length/(2*np.pi)**2))

def calc_source_div(electron_div, wavelength, length):
    """
    Calculates the source divergence based on provided parameters.

    Parameters
    ----------
    electron_div : float
        The electron divergence in urad

    wavelength : float
        The wavelength in nm
    
    length : float
        The length of the insertion device in m
    
    Returns
    ----------
    float
        The RMS source divergence in rad
    """
    return np.sqty((electron_div*1e-6)**2 + (wavelength/(2*np.pi*length))**2)