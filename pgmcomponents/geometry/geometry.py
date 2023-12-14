"""
A module containing classes for simple 3D geometry
used in ray tracing of X-ray optics.

Author: Patrick Wang
Email: patrick.wang@diamond.ac.uk

Version: 0.2.2
Date: 2023-09-15

"""
from __future__ import division, print_function
import numpy as np
from colorama import Fore

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
        vector_mag = np.linalg.norm(vector)
        if vector_mag == 0:
            raise ValueError("Vector magnitude cannot be zero")
        self._vector = vector / vector_mag

    def __repr__(self):
        # use f-string
        return f"Ray3D(position={self.position}, vector={self.vector})"
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
        self._vector = value / np.linalg.norm(value)

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



class Point3D(object):
    """
    A class for a simple 3D point.

    Parameters
    ----------
    x : float
        The x coordinate of the point
    y : float
        The y coordinate of the point
    z : float
        The z coordinate of the point

    Methods
    ----------
    __repr__ : str
        Returns a string representation of the point
    __add__ : Point3D
        Adds two points together
    __sub__ : Point3D
        Subtracts two points
    __eq__ : bool
        Checks if two points are equal
    __ne__ : bool
        Checks if two points are not equal
    __getitem__ : float
        Returns the x, y or z coordinate of the point
    __setitem__ : float
        Sets the x, y or z coordinate of the point
    __iter__ : float
        Returns an iterator over the point
    __len__ : int
        Returns the length of the point
    __hash__ : int 
        Returns the hash of the point
    __copy__ : Point3D
        Returns a copy of the point
    __deepcopy__ : Point3D
        Returns a deep copy of the point
    copy : Point3D
        Returns a copy of the point
    distance : float
        Finds the distance between two points
    """

    def __init__(self, x, y, z):
        self._point = np.array([x, y, z], dtype=float)

    def __repr__(self):
        # f-string
        return "Point3D(x={}, y={}, z={})".format(self.x, self.y, self.z)
    
    def __add__(self, other):
        return Point3D(self.x + other.x, self.y + other.y, self.z + other.z)
    
    def __sub__(self, other):
        return Vector3D(self.x - other.x, self.y - other.y, self.z - other.z)
    
    def __eq__(self, other):
        return np.array_equal(self._point, other._point)
    
    def __ne__(self, other):
        return not np.array_equal(self._point, other._point)
    
    def __getitem__(self, key):
        return self._point[key] 
    
    def __setitem__(self, key, value):
        self._point[key] = value

    def __iter__(self):
        return iter(self._point)    

    def __len__(self):
        return len(self._point)
    
    def __hash__(self):
        return hash(self._point.tostring())
    
    def __copy__(self):
        return Point3D(self.x, self.y, self.z)
    
    def __deepcopy__(self, memo):
        return Point3D(self.x, self.y, self.z)
    
    def copy(self):
        return Point3D(self.x, self.y, self.z)
    
    def distance(self, other):
        # use point property rather than accessing other._point
        return np.linalg.norm(self._point - other._point)
    
    @property
    def x(self):
        return self._point[0]
    
    @x.setter
    def x(self, value):
        self._point[0] = value

    @property
    def y(self):
        return self._point[1]
    
    @y.setter
    def y(self, value):
        self._point[1] = value

    @property
    def z(self):
        return self._point[2]
    
    @z.setter
    def z(self, value):
        self._point[2] = value

    @property
    def list(self):
        return self._point.tolist()
    

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
        return f"Vector3D(x={self.x}, y={self.y}, z={self.z})"
    
    def __add__(self, other):
        return Vector3D(self.x + other[0], self.y + other[1], self.z + other[2])
    
    def __sub__(self, other):
        return Vector3D(self.x - other.x, self.y - other.y, self.z - other.z)
    
    def __mul__(self, other):
        if isinstance(other, (int, float)):
            return Vector3D(self.x*other, self.y*other, self.z*other)
        return self.x*other.x + self.y*other.y + self.z*other.z
    
    def __div__(self, other):
        # np.cross returns np ndarray but Vector3D expects x, y, z params
        cp = np.cross(self._vector, other._vector)
        return Vector3D(cp[0],cp[1],cp[2])
    
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
        # Vector3D expects x, y, z
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

    def to_point(self)-> Point3D:
        """
        Converts the vector to a Point3D
        """
        return Point3D(self.x, self.y, self.z)


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

    normal : array_like
        The normal vector of the plane

    Methods
    ----------
    __repr__ : str
        Returns a string representation of the plane
    __eq__ : bool
        Checks if two planes are equal
    intersectQ : bool
        Checks if the plane intersects another plane or ray3d

    """

    def __init__(self, *args):
        if len(args) == 0:
            print("No arguments given, plane at origin with normal (0, 0, 1) initialised! Tread carefully!")
            self._point = np.array([0, 0, 0])
            self._normal = np.array([0, 0, 1])


        if len(args) == 2:
            self._point = args[0]
            self._normal = args[1]

        elif len(args) == 3:
            v1 = args[2] - args[0]
            v2 = args[1] - args[0]


            self._normal = np.cross(v1, v2) / np.linalg.norm(np.cross(v1, v2))
            self._point = args[0]

        self.d = -self._normal.dot(self._point)

    def __repr__(self):
        #f-string
        return "Plane(point={}, normal={})".format(self._point, self._normal)
    
    def __eq__(self, other):
        return np.array_equal(self._point, other.point) and np.array_equal(self._normal, other.normal)
    
    @property
    def point(self):
        return self._point
    
    @point.setter
    def point(self, value):
        self._point = np.array(value)

    @property
    def position(self):
        return self._point
    
    @position.setter
    def position(self, value):
        self._point = np.array(value)

    @property
    def normal(self):
        return self._normal
    
    @normal.setter
    def normal(self, value):
        self._normal = np.array(value)
            
    # rename intersect_q
    def intersectQ(self, other, atol=1e-6):
        """
        Checks if the plane intersects another plane or ray3d

        Parameters
        ----------
        other : Plane or Ray3D
            The other plane or ray3d
        atol : float
            The absolute tolerance for the dot product of the normal vectors

        Returns
        ----------
        bool
            True if the plane intersects the other plane or ray3d, False otherwise
        Point3D or None
            The point of intersection if the plane intersects the other plane or ray3d, None otherwise
        """
    
        if isinstance(other, Plane):
            return not np.isclose(self.normal.dot(other.normal), 1.0, atol=atol), None

        elif isinstance(other, Ray3D):
            if not np.isclose(self.normal.dot(other.vector), 0.0, atol=atol):
                w = other.position - self.point
                fac = -self.normal.dot(w) / self.normal.dot(other.vector)
                plane_intersect = w + fac * other.vector + self.point
                return True, plane_intersect
            
            else:
                raise ValueError("The plane and ray are parallel")    
        # return type is different to return type from if and elif above
        print(Fore.RED + 'Not handled!' + Fore.RESET)



# Image class already defined
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

def calc_beam_size(electron_size: float,
                   electron_div: float,
                   wavelength: float,
                   distance: float,
                   length: float,
                   num_of_sigmas=3,
                   insertion_device='undulator') -> float:
    """
    Calculate the beam size based on the electron size and divergence.

    Parameters
    ----------
    electron_size : float
        The electron size in um
    electron_div : float
        The electron divergence in urad
    wavelength not photon_energy in params
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
        return np.sqrt(source_size**2 + (source_div*distance)**2)*1e3*num_of_sigmas
    else:
        raise NotImplementedError("Only undulator is currently supported")
        


def calc_source_size(electron_size: float, wavelength:float, length:float)-> float:
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
    return np.sqrt((electron_size*1e-6)**2 + (wavelength*1e-9*length/(2*np.pi**2)))

def calc_source_div(electron_div: float, wavelength: float, length: float)-> float:
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
    return np.sqrt((electron_div*1e-6)**2 + (wavelength*1e-9/(2*length)))