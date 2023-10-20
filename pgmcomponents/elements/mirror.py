
import numpy as np
from pgmcomponents.geometry import Point3D, Vector3D, Plane, Ray3D

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
                 voffset=20, 
                 hoffset=0, 
                 axis_voffset=0, 
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
        _ = self.compute_corners()
        self._borders = borders
    def __repr__(self):
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
            exec(f"self._{key} = float({value})")
            print(key)
            print(value)
        
        
        self._dimensions = np.array([float(x) for x in config['mirror']['dimensions'].split(',')])
        self._borders= np.array([float(x) for x in config['mirror']['borders'].split(',')])
        

    @property
    def voffset(self):
        return self._voffset

    @voffset.setter
    def voffset(self, value):
        self._voffset = value  

    @property
    def hoffset(self):
        return self._hoffset

    @hoffset.setter
    def hoffset(self, value):
        self._hoffset = value

    @property
    def axis_voffset(self):
        return self._axis_voffset

    @axis_voffset.setter
    def axis_voffset(self, value):
        self._axis_voffset = value

    @property
    def axis_hoffset(self):
        return self._axis_hoffset

    @axis_hoffset.setter
    def axis_hoffset(self, value):
        self._axis_hoffset = value

    @property
    def dimensions(self):
        return self._dimensions
    
    @dimensions.setter
    def dimensions(self, value):
        """
        Sets the dimensions of the mirror.
        The dimensions are specified as:
        [length, width, height]

        """
        self._dimensions = value

    @property
    def plane(self):
        return self._plane

    @plane.setter
    def plane(self, value):
        self._plane = value
    
    @property
    def theta(self):
        return self._theta
    
    @theta.setter
    def theta(self, value):
        self._theta = value
    
    @property
    def corners(self):
        return self._corners
    
    @corners.setter
    def corners(self, value):
        raise AttributeError("Corners should be calculated via compute_corners().")

    @property
    def borders(self):
        return self._borders
    
    @borders.setter
    def borders(self, value):
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
        if len(value) != 4:
            raise ValueError("Expected exactly four values for borders")
        self._borders = value


    def set_position(self, position):
        self._plane.position = position

    def set_normal(self, normal):
        self._plane.normal = normal

    def set_dimensions(self, *args):
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
        if len(args) == 1:
            self._dimensions = args[0]
        elif len(args) == 3:
            self._dimensions = np.array(args)
        else:
            raise ValueError("Expected either one or three arguments for dimensions")

    def set_offsets(self, voffset, hoffset, axis_voffset, axis_hoffset):
        self._voffset = voffset
        self._hoffset = hoffset
        self._axis_voffset = axis_voffset
        self._axis_hoffset = axis_hoffset

    def compute_corners(self):
        """
        Compute the corners of the mirror in the global coordinate system,
        in addition to the plane and normal of the mirror.
    

        Returns
        -------
        corners : array_like
            The corners of the mirror in the global coordinate system
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

    def draw(self, ax):
        pass

    @classmethod

    def mirror_from_file(cls, filename):
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

    def reflect(self, *args):
        """
        A method to reflect rays off the mirror.

        Parameters
        ----------
        *args : Ray3D
            The rays to be reflected

        Returns
        -------
        reflected_rays : list
            A list of reflected rays

        """
        reflected_rays = []
        
        if len(args) == 0:
            raise ValueError("Expected at least one ray")
        
        if type(args[0]) == list:
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