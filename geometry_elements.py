"""
A module containing classes for simple 3D geometry
used in ray tracing of X-ray optics.

Author: Patrick Wang
Email: patrick.wang@diamond.ac.uk

Version: 0.1
Date: 2023-09-15

"""
import numpy as np
from light import Ray3D


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
        return "Point3D(x={}, y={}, z={})".format(self.x, self.y, self.z)
    
    def __add__(self, other):
        return Point3D(self.x + other.x, self.y + other.y, self.z + other.z)
    
    def __sub__(self, other):
        return Point3D(self.x - other.x, self.y - other.y, self.z - other.z)
    
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

        self.d = -self.normal.dot(self.point)

    def __repr__(self):
        return "Plane(point={}, normal={})".format(self.point, self.normal)
    
    def __eq__(self, other):
        return np.array_equal(self.point, other.point) and np.array_equal(self.normal, other.normal)
    
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
            if not np.isclose(self.normal.dot(other.direction), 0.0, atol=atol):
                w = other.point - self.point
                fac = -self.normal.dot(w) / self.normal.dot(other.vector)
                plane_intersect = w + fac * other.vector + self.point
                return True, plane_intersect
            
            else:
                raise ValueError("The plane and ray are parallel")    
