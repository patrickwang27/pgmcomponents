from __future__ import annotations
# List not used
from ast import List
from matplotlib.pyplot import isinteractive
import numpy as np
from pgmcomponents.geometry import Point3D, Vector3D, Plane, Ray3D
import configparser

class Plane_Mirror(object):
    """
    A class for a simple plane mirror.

    Parameters
    ----------
    voffset : float, optional
        The vertical offset of the mirror in mm
    hoffset : float, optional
        The horizontal offset of the mirror in mm
    axis_voffset : float, optional
        The vertical offset of the mirror axis in mm
    axis_hoffset : float, optional
        The horizontal offset of the mirror axis in mm
    dimensions : array_like, optional
        The dimensions of the mirror in mm [length, width, height]
        Dimensions are also accessible with lambda functions as:
        self._length(), self._width(), self._height()
    theta : float, optional
        The angle of the mirror in degrees
    plane : Plane, optional
        The plane of the mirror
    borders: array_like, optional
        Specifies the borders for a realistic plane mirror:
        borders : array_like
        Specifies the borders of a realistic grating component.
        |-----------Top------------|
        |                          |
       Left   Mirror Plane       Right
        |                          |       ---> +z direction
        |----------Bottom----------|        
        [top, bottom, left, right]
    

    Attributes
    ----------
    dimensions : array_like
        The dimensions of the mirror in mm
    position : Point3D
        The position of the mirror
    normal : Vector3D
        The normal vector of the mirror
    orientation : Vector3D
        The orientation of the mirror
    corners : array_like
        The corners of the grating in the global coordinate system:
        [bottom left back, 
        bottom right back, 
        bottom left front, 
        bottom right front,
        top left back,
        top right back,
        top left front,
        top right front]
    plane : Plane
        The plane of the mirror
    
    borders: array_like
        Specifies the borders for a realistic plane mirror:
        borders : array_like
        Specifies the borders of a realistic grating component.
        |-----------Top------------|
        |                          |
       Left   Mirror Plane       Right
        |                          |       ---> +z direction
        |----------Bottom----------|        
        [top, bottom, left, right]
    Methods
    -------
    set_position(position)
        Set the position of the mirror
    set_normal(normal)
        Set the normal vector of the mirror
    set_orientation(orientation)
        Set the orientation of the mirror
    set_dimensions(*args)
        Set the dimensions of the mirror
    set_offsets(voffset, hoffset, axis_voffset, axis_hoffset)
        Set the offsets of the mirror
    compute_corners()
        Compute the corners of the mirror in the global coordinate system,  
    
    
    """

    def __init__(self, 
                 voffset=13, 
                 hoffset=40, 
                 axis_voffset=6.5, 
                 axis_hoffset=0, 
                 dimensions = np.array([450, 70, 50]),
                 theta=45, 
                 plane=Plane(),
                 borders = np.array([0,0,0,0])
                 ):
        """
        Constructor for the Plane_Mirror class.

        Parameters
        ----------
        voffset : float
            The vertical offset of the mirror in mm
        hoffset : float
            The horizontal offset of the mirror in mm
        axis_voffset : float
            The vertical offset of the mirror axis in mm
        axis_hoffset : float
            The horizontal offset of the mirror axis in mm
        dimensions : array_like
            The dimensions of the mirror in mm [length, width, height]
            Dimensions are also accessible with lambda functions as:
            self._length(), self._width(), self._height()

        
        theta : float
            The angle of the mirror in degrees
        plane : Plane
            The plane of the mirror
        
        """

        self._voffset = voffset
        self._hoffset = hoffset
        self._axis_voffset = axis_voffset
        self._axis_hoffset = axis_hoffset
        self._dimensions = dimensions
        self._length = lambda: self._dimensions[0]
        self._width = lambda: self._dimensions[1]
        self._height = lambda: self._dimensions[2]
        self._plane = plane
        self._theta = theta
        # Just call method without assigning to _
        _ = self.compute_corners()
        self._borders = borders


    def __repr__(self):
        # Use f-string
        return """Plane_Mirror(voffset={}, 
        hoffset={}, 
        axis_voffset={}, 
        axis_hoffset={}, 
        length={}, 
        width={}, 
        height={}, 
        plane={},
        borders={})
        """.format(self.voffset,
                            self.hoffset, 
                            self.axis_voffset, 
                            self.axis_hoffset, 
                            self._length(), 
                            self._width(), 
                            self._height(), 
                            self.plane,
                            self.borders)
    

    # read_file is very similar to read_file in grating.py. Refactor to use common code.
    def read_file(self, filename):
        """
        Read mirror parameters from a file. 
        See config_pgm.ini for an example.
        A config_file may contain more than one sections, but only the
        mirror section will be read.

        Parameters
        ----------
        filename : str
            The name of the file to read from
        """
        config = configparser.ConfigParser()
        config.read(filename)
        
        if len(config['mirror']) != 7:
            raise ValueError("Expected exactly six parameters in mirror file")

        variables = ['voffset', 'hoffset', 'axis_voffset', 'axis_hoffset', 'dimensions', 'theta']
        for var in variables:
            if var not in config['mirror']:
                raise ValueError("Missing parameter {} in mirror file".format(var))
        
        items = [x for x in variables if x in config['mirror'] and x != 'dimensions' and x != 'borders']

        for key, value in zip(items, config['mirror'].values()):
            # Don't use exec. Either explicitly assign variables or if you will not know what they will be, use a dictionary not variables.
            exec(f"self._{key} = float({value})")
            print(key)
            print(value)
        
        
        self._dimensions = np.array([float(x) for x in config['mirror']['dimensions'].split(',')])
        self._borders= np.array([float(x) for x in config['mirror']['borders'].split(',')])
        

    @property
    def voffset(self)-> float:

        return self._voffset

    @voffset.setter
    def voffset(self, value: float)-> None:
        if isinstance(value, float):
            self._voffset = value  
        else:
            raise TypeError("Expected voffset to be float!")
    @property
    def a(self)-> float:
        return self._hoffset
    
    @a.setter
    def a(self, value: float)-> None:
        self.hoffset = float(value)

    @property
    def hoffset(self)-> float:
        return self._hoffset

    @hoffset.setter
    def hoffset(self, value: float):
        if isinstance(value, float):
            self._hoffset = value
        else:
            raise TypeError("Expected hoffset to be float!")

    @property
    def c(self)-> float:
        return self._voffset
    
    @c.setter
    def c(self, value: float)-> None:
        self.voffset = float(value)

    

    @property
    def axis_voffset(self)-> float:
        return self._axis_voffset

    @axis_voffset.setter
    def axis_voffset(self, value: float):
        if isinstance(value, float):
            self._axis_voffset = value
        else:
            raise TypeError("Expected axis voffset to be float!")

    @property
    def v(self)-> float:
        return self._axis_voffset
    
    @v.setter
    def v(self, value: float)-> None:
        self.axis_voffset = float(value)


    @property
    def axis_hoffset(self)-> float:
        return self._axis_hoffset

    @axis_hoffset.setter
    def axis_hoffset(self, value:float):
        if isinstance(value, float):
            self._axis_hoffset = value
        else:
            raise TypeError("Expected axis hoffset to be float!")

    @property
    def h(self)-> float:
        return self._axis_hoffset
    
    @h.setter
    def h(self, value: float)-> None:
        self.axis_hoffset = float(value)
    

    @property
    def dimensions(self)-> np.ndarray:
        return self._dimensions
    
    @dimensions.setter
    def dimensions(self, value:float):
        """
        Sets the dimensions of the mirror.
        The dimensions are specified as:
        [length, width, height]

        """
        self._dimensions = value

    @property
    def plane(self)-> Plane:
        return self._plane

    @plane.setter
    def plane(self, value: Plane)-> None:
        if isinstance(value, Plane):
            self._plane = value
        else:
            raise TypeError("Expected value to be Plane instance!")
    
    @property
    def theta(self)-> float:
        return self._theta
    
    @theta.setter
    def theta(self, value: float)-> float:
        self._theta = value
    
    @property
    def corners(self)-> np.ndarray:
        return self._corners
    
    @corners.setter
    def corners(self, value):
        print("Input value ignored, corners computed from parameters!")
        self.compute_corners()

    @property
    def borders(self)-> np.ndarray:
        return self._borders
    
    @borders.setter
    def borders(self, value)-> None:
        """
        Sets the borders of the mirror.
        The borders are specified as:
        |-----------Top------------|
        |                          |
         Left   Mirror Plane       Right
        |                          |       ---> +z direction
        |----------Bottom----------|
        [top, bottom, left, right]
        """
        if isinstance(value, np.ndarray) and len(value)==4:
            if all(value > 0):
                self._borders = value
            else:
                raise ValueError("Lengths should be positive.")
        else:
            raise ValueError("Expected 1D numpy array with length 4")


    def set_position(self, position: Point3D)-> None:
        if isinstance(position, Point3D):
            self._plane.position = position
        else:
            raise TypeError("Expected Point3D instance for position value!")

    def set_normal(self, normal: Vector3D)-> None:
        if isinstance(normal, Vector3D):
            self._plane.normal = normal
        else:
            raise TypeError("Expected Vector3D instance for normal value!")

    # Combine with setter
    def set_dimensions(self, *args: np.ndarray | float)-> None:
        """
        Set the dimensions of the mirror.

        Parameters
        ----------
        *args : array_like
            Either one or three arguments for the dimensions

        Raises
        ------
        ValueError
            If the number of arguments is not one or three

        """
        # compute length once and assign to variable. Can use this in error msg.
        # Will raise ValueError if args does not have length, so check that too.
        length_of_args = len(args)
        if length_of_args == 1:
            self._dimensions = args[0]
        elif length_of_args == 3:
            self._dimensions = np.array(args)
        else:
            raise ValueError(f"Expected either one or three arguments for dimensions, got length of {length_of_args} instead.")

    def set_offsets(self, voffset: float, hoffset: float, axis_voffset: float, axis_hoffset: float)-> None:
        self.voffset(voffset)
        self.hoffset(hoffset)
        self.axis_voffset(axis_voffset)
        self.axis_hoffset(axis_hoffset)

    def compute_corners(self)-> np.ndarray:
        """
        Compute the corners of the mirror in the global coordinate system,
        in addition to the plane and normal of the mirror.
    

        Returns
        -------
        corners : np.ndarray
            The corners of the mirror in the global coordinate system
            [top left front,
            top right front,
            bottom left front,
            bottom right front,
            top left back,
            top right back,
            bottom left back,
            bottom right back]
        
        
        """
        cot = lambda x: 1/np.tan(x)
        theta = np.deg2rad(self.theta)
        theta_g = 90 - self._theta
        theta_g = np.deg2rad(theta_g)
        a = self._hoffset
        c = self._voffset
        v = self._axis_voffset
        h = self._axis_hoffset
        w = self._width()
        l = self._length()
        d = self._height()
        #Top left front

        tlfz = -((a - c * cot(theta)) * np.sin(theta)) + h
        tlfy = -(c / np.sin(theta) + 
                 (a - c*cot(theta)) * np.cos(theta)) + v
        tlfx = -w/2
        tlf = Point3D(tlfx, tlfy, tlfz)

        #Bottom left front
        blfz = tlfz + d*np.cos(theta)
        blfy = tlfy - d*np.sin(theta)        
        blfx = -w/2
        blf = Point3D(blfx, blfy, blfz)

        #Top right front
        trfz = tlfz
        trfy = tlfy
        trfx = w/2
        trf = Point3D(trfx, trfy, trfz)

        #Bottom right front
        brfz = blfz
        brfy = blfy
        brfx = w/2
        brf = Point3D(brfx, brfy, brfz)

        #Top left back
        tlbz = tlfz - l*np.sin(theta)
        tlby = tlfy - l*np.cos(theta)
        tlbx = -w/2
        tlb = Point3D(tlbx, tlby, tlbz)

        #Bottom left back
        blbz = tlbz + d*np.cos(theta)
        blby = tlby - d*np.sin(theta)
        blbx = -w/2
        blb = Point3D(blbx, blby, blbz)

        #Top right back
        trbz = tlbz
        trby = tlby
        trbx = w/2
        trb = Point3D(trbx, trby, trbz)

        #Bottom right back
        brbz = blbz
        brby = blby
        brbx = w/2
        brb = Point3D(brbx, brby, brbz)

        self._plane = Plane(tlf, trf, tlb)

        self._corners = np.array([
            tlf,
            trf,
            blf,
            brf,
            tlb,
            trb,
            blb,
            brb
        ])

        return self._corners

    @classmethod

    def mirror_from_file(cls, filename: str)-> Plane_Mirror:
        """
        Create a mirror from a file. 
        See config_pgm.ini for an example.
        A config_file may contain more than one sections, but only the
        mirror section will be read.

        Parameters
        ----------
        filename : str
            The name of the file to read from
        """
        mirror = cls()
        mirror.read_file(filename)
        return mirror

    def reflect(self, *args: Ray3D | list) -> list:
        """
        A method to reflect rays off the mirror.

        Parameters
        ----------
        *args : Ray3D
            The rays to be reflected

        Returns
        -------
        reflected_rays : list of Ray3D
            A list of reflected rays

        """
        reflected_rays = []
        
        if len(args) == 0:
            raise ValueError("Expected at least one ray")
        
        if isinstance(args[0], list):
            args = args[0]
        

        for index, ray in enumerate(args):
            if not isinstance(ray, Ray3D):
                raise TypeError("Expected Ray3D object")
            try:
                _, plane_intersection = self._plane.intersectQ(ray)
            except ValueError:
                print(f'Ray of index {index} does not intersect mirror, tread with caution!')
                continue
            ray_array = ray.vector
            mirror_normal = self._plane.normal
            reflected_ray_array = ray_array - 2 * np.dot(ray_array, mirror_normal) * mirror_normal
            reflected_ray_array = reflected_ray_array / np.linalg.norm(reflected_ray_array)
            reflected_ray = Ray3D(plane_intersection, reflected_ray_array)
            reflected_rays.append(reflected_ray)
        
        return reflected_rays
