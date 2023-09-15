"""
A library of classes for modelling light rays and beams.

Based on, in parts, the work of Matthew Hand's dls-optics-core package

Author: Patrick Wang
Email: patrick.wang@diamond.ac.uk

Version: 0.1
Date: 2023-09-15

"""

import numpy as np
from geometry_elements import *
from components import *


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

