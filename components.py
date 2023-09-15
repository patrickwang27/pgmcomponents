"""
A python class for simple ray tracing optics.

Based heavily in parts on the work of Matthew Hand's dls-optics-core package
Author: Patrick Wang
Email: patrick.wang@diamond.ac.uk
"""

import numpy as np
import matplotlib.pyplot as plt
from matplotlib.patches import Circle, Rectangle, Polygon
from matplotlib.collections import PatchCollection
import configparser

class Vector3D(object):
    """A class for a simple 3D vector
    
    Parameters
    ----------
    x : float
    The x component of the vector
    y : float
    The y component of the vector
    z : float
    The z component of the vector
    
    Methods:
    ----------
    __repr__ : str
    Returns a string representation of the vector
    __add__ : Vector3D
    Adds two vectors together
    __sub__ : Vector3D
    Subtracts two vectors
    __mul__ : Vector3D
    Finds the dot product of two vectors
    __div__ : Vector3D
    Finds the cross product of two vectors
    __abs__ : float
    Finds the magnitude of the vector
    __neg__ : Vector3D
    Finds the negative of the vector
    __eq__ : bool
    Checks if two vectors are equal
    __ne__ : bool
    Checks if two vectors are not equal
    __getitem__ : float
    Returns the x, y or z component of the vector
    __setitem__ : float
    Sets the x, y or z component of the vector
    __iter__ : float
    Returns an iterator over the vector
    __len__ : int
    Returns the length of the vector
    __hash__ : int
    Returns the hash of the vector
    __copy__ : Vector3D
    Returns a copy of the vector
    __deepcopy__ : Vector3D
    Returns a deep copy of the vector
    copy : Vector3D
    Returns a copy of the vector
    dot : float
    Finds the dot product of two vectors
    cross : Vector3D
    Finds the cross product of two vectors
    norm : float
    Finds the magnitude of the vector
    normalize : Vector3D
    Normalizes the vector
    angle : float
    Finds the angle between two vectors
    rotate : Vector3D
    Rotates the vector around an axis
    rotate_x : Vector3D
    Rotates the vector around the x axis
    rotate_y : Vector3D
    Rotates the vector around the y axis
    rotate_z : Vector3D
    Rotates the vector around the z axis

    """
    def __init__(self, x, y, z):
        self._vector = np.array([x, y, z], dtype=float)

    def __repr__(self):
        return "Vector3D(x={}, y={}, z={})".format(self.x, self.y, self.z)
    
    def __add__(self, other):
        return Vector3D(self.x + other.x, self.y + other.y, self.z + other.z)
    
    def __sub__(self, other):
        return Vector3D(self.x - other.x, self.y - other.y, self.z - other.z)
    
    def __mul__(self, other):
        return self.x*other.x + self.y*other.y + self.z*other.z
    
    def __div__(self, other):
        return Vector3D(np.cross(self._vector, other._vector))
    
    def __abs__(self):
        return np.linalg.norm(self._vector)
    
    def __neg__(self):
        return Vector3D(-self.x, -self.y, -self.z)
    
    def __eq__(self, other):
        return np.array_equal(self._vector, other._vector)
    
    def __ne__(self, other):
        return not np.array_equal(self._vector, other._vector)
    
    def __getitem__(self, key):
        return self._vector[key]
    
    def __setitem__(self, key, value):
        self._vector[key] = value

    def __iter__(self):
        return iter(self._vector)
    
    def __len__(self):
        return len(self._vector)
    
    def __hash__(self):
        return hash(self._vector.tostring())
    
    def __copy__(self):
        return Vector3D(self.x, self.y, self.z)
    
    def __deepcopy__(self, memo):
        return Vector3D(self.x, self.y, self.z)
    
    def copy(self):
        return Vector3D(self.x, self.y, self.z)
    
    def dot(self, other):
        return self.x*other.x + self.y*other.y + self.z*other.z
    
    def cross(self, other):
        return Vector3D(np.cross(self._vector, other._vector))
    
    def norm(self):
        return np.linalg.norm(self._vector)
    
    def normalize(self):
        return Vector3D(self.x/self.norm(), self.y/self.norm(), self.z/self.norm())
    
    def angle(self, other):
        return np.arccos(self.dot(other)/(self.norm()*other.norm()))
    
    def rotate(self, axis, angle):
        axis = axis.normalize()
        return Vector3D(self.x*np.cos(angle) + (1 - np.cos(angle))*axis.x*axis.x + np.sin(angle)*(axis.y*self.z - axis.z*self.y),
                        self.y*np.cos(angle) + (1 - np.cos(angle))*axis.y*axis.y + np.sin(angle)*(axis.z*self.x - axis.x*self.z),
                        self.z*np.cos(angle) + (1 - np.cos(angle))*axis.z*axis.z + np.sin(angle)*(axis.x*self.y - axis.y*self.x))
    
    def rotate_x(self, angle):
        return Vector3D(self.x, self.y*np.cos(angle) - self.z*np.sin(angle), self.y*np.sin(angle) + self.z*np.cos(angle))
    
    def rotate_y(self, angle):
        return Vector3D(self.x*np.cos(angle) + self.z*np.sin(angle), self.y, -self.x*np.sin(angle) + self.z*np.cos(angle))
    
    def rotate_z(self, angle):
        return Vector3D(self.x*np.cos(angle) - self.y*np.sin(angle), self.x*np.sin(angle) + self.y*np.cos(angle), self.z)
    
    @property
    def x(self):
        return self._vector[0]
    
    @x.setter
    def x(self, value):
        self._vector[0] = value

    @property
    def y(self):
        return self._vector[1]
    
    @y.setter
    def y(self, value):
        self._vector[1] = value

    @property
    def z(self):
        return self._vector[2]
    
    @z.setter
    def z(self, value):
        self._vector[2] = value

    

class Ray3D(object):

    def __init__(self, position, vector):
        self.position = position
        vector_mag = np.linalg.norm(vector)
        if vector_mag == 0:
            raise ValueError("Vector magnitude cannot be zero")
        self.vector = vector / vector_mag

    def __repr__(self):
        return "Ray3D(position={}, vector={})".format(self.position, self.vector)

class Plane(object):
    """
    A class for a simple plane

    Based on the work of Matthew Hand

    Parameters
    ----------
    *args
        Either a point and a normal vector, or three points defining the plane, np.array_like

    Attributes
    ----------
    point : array_like
        A point on the plane

    """

    def __init__(self, *args):

        if len(args) == 2:
            self.point = args[0]
            self.normal = args[1]

        elif len(args) == 3:
            v1 = args[2] - args[0]
            v2 = args[1] - args[0]

            self.normal = np.cross(v1, v2) / np.linalg.norm(np.cross(v1, v2))
            self.point = args[0]

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
    

class