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
from matplotlib import axes
from matplotlib.collections import PatchCollection
import configparser
from scipy.constants import c, h, e
from geometry_elements import Plane, Point3D, Vector3D, Ray3D
from scipy.spatial import ConvexHull
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
        The dimensions of the grating in mm [length, width, height],
        dimensions are also accessible with lambda functions as:
        self._length(), self._width(), self._height()
    
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
    borders : array_like
        Specifies the borders of a realistic grating component.
        |-----------Top------------|
        |                          |
       Left   Grating Plane      Right
        |                          |      ----> +z direction
        |----------Bottom----------|
        [top, bottom, left, right]
    Methods
    -------
    set_angles(alpha, beta)
        Set the incident and diffraction angles of the grating
    wavelength()
        Calculate the wavelength of the beam in Angstroms
    compute_corners()
        Compute the corners of the grating in the global coordinate system
    diffract(*args)
        A method to diffract rays off the grating
    compute_beta(alpha, line_density, energy, order)
        Calculate the diffraction angle beta from the incident angle alpha
    reflect(*args)
        A method to 'reflect' rays off the grating
    """
    def __init__(self, line_density=600, energy=250, cff=2, order=1, dimensions = np.array([1,1,1]), borders = np.array([0,0,0,0])):

        self._line_density=line_density
        self._energy=energy
        self._cff=cff
        self._order=order
        self._alpha = None
        self._beta = None
        self._dimensions = dimensions
        self._length = lambda: self._dimensions[0]
        self._width = lambda: self._dimensions[1]
        self._height = lambda: self._dimensions[2]
        self._borders = borders
        _,_ = self.compute_angles()
        _ = self.compute_corners()



    def __repr__(self):
        return "Grating(line_density={},\n energy={}, \n cff={}, \n order={}, \n dimensions={})".format(self.line_density, 
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

        variables = ['line_density', 'energy', 'cff', 'order', 'dimensions']
        for var in variables:
            if var not in config['grating']:
                raise ValueError("Missing parameter {} in grating file".format(var))

        for key, value in list(config['grating'].items())[0:-1]:
            exec(f"self._{key} = float({value})")
            print(key)
            print(value)
        
        self._order = int(self._order)
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
        if len(value) != 3:
            raise ValueError("Expected exactly three values for dimensions")
        self._dimensions = value


    @property
    def borders(self):
        return self._borders
    
    @borders.setter

    def borders(self, value):
        if len(value) != 4:
            raise ValueError("Expected exactly four values for borders")
        self._borders = value


    def set_angles(self, alpha, beta):
        wavelength = (np.sin(np.deg2rad(alpha)) + np.sin(np.deg2rad(beta))) / (self.line_density*1000*self._order)
        
        try:
            self._energy = 12398.42 / wavelength #converts wavelength to eV
        except ZeroDivisionError:
            raise ValueError("Unexpected divide by zero in grating.set_angles")
        
        self._alpha = alpha
        self._beta = beta
        self._cff = self.cff

    @property
    def corners(self):
        return self._corners
    
    @corners.setter
    def corners(self, value):
        raise AttributeError("Corners should be calculated via compute_corners().")

    def compute_beta(self):
        beta = 0
        try:
            wavelength = self.wavelength(self.energy)
            u = self.order*self.line_density*1000*wavelength - np.sin(np.deg2rad(self.alpha))
            beta = np.rad2deg(np.arcsin(u))
        
        except ZeroDivisionError:
            print('Error in grating.compute_beta')
        
        return beta

    def compute_angles(self):
        """
        Compute the incident and diffraction angles of the grating.
        The incident angle is calculated from the diffraction angle
        using the fixed focus constant.

        Returns
        -------
        alpha : float
            The incident angle in degrees

        beta : float
            The diffraction angle in degrees
        
        """
        wavelength = self.wavelength(self.energy)
        lambda_u = self.order*self.line_density*1000*wavelength/(1-self.cff**2)
        sin_alpha = lambda_u + np.sqrt(1+lambda_u**2*self.cff**2)
        self._alpha = np.rad2deg(np.arcsin(sin_alpha))
        self._beta = -np.rad2deg(np.arccos(np.cos(np.arcsin(sin_alpha))*self.cff))

        return self._alpha, self._beta

    def diffract(self, *args):
        """
        A method to diffract rays off the grating.

        Parameters
        ----------
        rays : list
            The rays to be diffracted

        Returns
        -------
        diffracted_rays : list
            A list of diffracted rays

        """
        diffracted_rays = []
        
        if len(args) == 0:
            raise ValueError("Expected at least one ray")
        
        if type(args[0]) == list:
            args = args[0]


        for index, ray in enumerate(args):
            if not isinstance(ray, Ray3D):
                raise TypeError("Expected Ray3D object")
            raydotplane = ray.vector.dot(self._grating_plane.normal)
            angle = np.arccos(raydotplane/self._grating_plane.normal.norm())
            alpha = np.rad2deg(np.pi/2-angle)
            beta = self.calc_beta(alpha, self._line_density, self._energy, self._order)
            diff_ray = self.reflect(ray)
            angle = -90 - beta - alpha
            diff_ray.vector[2] += np.cos(np.deg2rad(angle))
            diff_ray.vector[1] += np.sin(np.deg2rad(angle))
            diff_ray.vector.normalize()
            diffracted_rays.append(diff_ray)
        return diffracted_rays
    
    @staticmethod

    def calc_beta(alpha, line_density, energy, order):
        """
        Calculate the diffraction angle beta from the incident angle alpha.
        
        Parameters
        ----------
        alpha : float
            The incident angle in degrees
        line_density : float
            The line density of the grating in lines per mm
        energy : float
            The energy of the incident beam in eV
        order : int
            The diffraction order of the grating

        Returns
        -------
        beta : float
            The diffraction angle in degrees
        """
        beta = 0 

        try:
            wavelength = wavelength(energy)
            u = order*line_density*1000*wavelength - np.sin(np.deg2rad(alpha))
            beta = np.rad2deg(np.arcsin(u))

        except ZeroDivisionError:
            raise ValueError("Unexpected divide by zero in grating.calc_beta")
        
        return beta
    
    def wavelength(self, energy):
        return h*c/(e*energy)
    
    def compute_corners(self):
        
        beta = np.deg2rad(self._beta)
        beta_g = np.deg2rad(self._beta + 90)
        l = self._length()
        w = self._width()
        d = self._height()        
        #Bottom left back
        blbz = (l/2)*np.sin(beta)
        blby = -(l/2)*np.cos(beta)
        blbx = -w/2
        blb = Point3D(blbx, blby, blbz)
        #Bottom right back
        brbz = blbz
        brby = blby
        brbx = w/2
        brb = Point3D(brbx, brby, brbz)

        #Bottom left front
        blfz = -(l/2)*np.sin(beta)
        blfy = (l/2)*np.cos(beta)
        blfx = -w/2
        blf = Point3D(blfx, blfy, blfz)

        #Bottom right front
        brfz = blfz
        brfy = blfy
        brfx = w/2
        brf = Point3D(brfx, brfy, brfz)

        #Top left back
        tlbz = blbz - d*np.cos(beta)
        tlby = blby - d*np.sin(beta)
        tlbx = -w/2
        tlb = Point3D(tlbx, tlby, tlbz)

        #Top right back
        trbz = brbz - d*np.cos(beta)
        trby = brby - d*np.sin(beta)
        trbx = w/2
        trb = Point3D(trbx, trby, trbz)

        #Top left front
        tlfz = blfz - d*np.cos(beta)
        tlfy = blfy - d*np.sin(beta)
        tlfx = -w/2
        tlf = Point3D(tlfx, tlfy, tlfz)

        #Top right front
        trfz = brfz - d*np.cos(beta)
        trfy = brfy - d*np.sin(beta)
        trfx = w/2
        trf = Point3D(trfx, trfy, trfz)

        self._grating_plane = Plane(
            Point3D(blfx, blfy, blfz),
            Point3D(brfx, brfy, brfz),
            Point3D(blbx, blby, blbz)
        )

        self._corners = np.array([
            blb,
            brb,
            blf,
            brf,
            tlb,
            trb,
            tlf,
            trf
        ])

        return self._corners

    def reflect(self, *args):
        """
        A method to reflect rays off the grating.

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
                plane_intersection = self._grating_plane.intersectQ(ray)
            except ValueError:
                print(f'Ray of index {index} does not intersect grating, tread with caution!')
                continue
            ray_array = ray.vector
            grating_normal = self._grating_plane.normal
            reflected_ray_array = ray_array - 2 * np.dot(ray_array, grating_normal) * grating_normal
            reflected_ray_array = reflected_ray_array / np.linalg.norm(reflected_ray_array)
            reflected_ray = Ray3D(plane_intersection, reflected_ray_array)
            reflected_rays.append(reflected_ray)
        
        return reflected_rays

    @classmethod
    def grating_from_file(cls, filename):
        """
        Create a grating from a file. 
        See config_pgm.ini for an example.
        A config_file may contain more than one sections, but only the
        grating section will be read.

        Parameters
        ----------
        filename : str
            The name of the file to read from
        """
        grating = cls()
        grating.read_file(filename)
        return grating
    

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
        plane={})""".format(self.voffset,
                            self.hoffset, 
                            self.axis_voffset, 
                            self.axis_hoffset, 
                            self._length(), 
                            self._width(), 
                            self._height(), 
                            self.plane)
    
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
        
        if len(config['mirror']) != 6:
            raise ValueError("Expected exactly six parameters in mirror file")

        variables = ['voffset', 'hoffset', 'axis_voffset', 'axis_hoffset', 'dimensions', 'theta']
        for var in variables:
            if var not in config['mirror']:
                raise ValueError("Missing parameter {} in mirror file".format(var))
            
        for key, value in list(config['mirror'].items())[0:-1]:
            exec(f"self._{key} = float({value})")
            print(key)
            print(value)
        
        
        self._dimensions = np.array([float(x) for x in config['mirror']['dimensions'].split(',')])

        

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
                plane_intersection = self._plane.intersectQ(ray)
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
            

class PGM(object):
    """
    A class for a PGM setup.

    Parameters
    ----------
    grating : Grating
        The grating component of the PGM
    mirror : Plane_Mirror
        The mirror component of the PGM

    Attributes
    ----------
    grating : Grating
        The grating component of the PGM
    mirror : Plane_Mirror
        The mirror component of the PGM

    Methods
    -------
    read_file(filename)
        Read PGM parameters from a file. 
        See config_pgm.ini for an example.
        The config file should contain a grating and a mirror section.
    propagate(*args)
        Propagate rays through the PGM setup.
    draw_sideview(ax)
        Draws the setup on a y-z projection on a given axis.
    draw_topview(ax)
        Draws the setup on a x-z projection on a given axis, along with the beam footprints.
    """

    def __init__(self, grating = None, mirror = None, **kwargs):
        """
        
        Constructor for the PGM class.
        
        Parameters
        ----------
        grating : Grating
            The grating component of the PGM
        mirror : Plane_Mirror
            The mirror component of the PGM
        **kwargs : 
            Keyword arguments for the grating and mirror components.
            See Grating and Plane_Mirror classes for details.

        
        """
        if grating is None:
            grating_kwargs = [
                'line_density',
                'energy',
                'cff',
                'order',
                'grating_dimensions'
            ]
            grating_kwarg_keys = [
                'line_density',
                'energy',
                'cff',
                'order',
                'dimensions'
            ]
        
            grating_args = [kwargs.get(x) for x in grating_kwargs]
            grating_kwargs = dict(zip(grating_kwarg_keys, grating_args))
            self._grating = Grating(**grating_kwargs)

        else:
            self._grating = grating
        
        if mirror is None:
            mirror_kwargs = [
                'voffset',
                'hoffset',
                'axis_voffset',
                'axis_hoffset',
                'mirror_dimensions',
                'theta'
            ]
            mirror_kwarg_keys = [
                'voffset',
                'hoffset',
                'axis_voffset',
                'axis_hoffset',
                'dimensions',
                'theta'
            ]
        
            mirror_args = [kwargs.get(x) for x in mirror_kwargs]
            mirror_kwargs = dict(zip(mirror_kwarg_keys, mirror_args))
            self._mirror = Plane_Mirror(**mirror_kwargs)
        
        else:
            self._mirror = mirror

        
        self._rays = []
        self._beam_offset = 0 
        self._beam_width = 0
        self._beam_height = 0

    def __repr__(self):
        return """PGM(grating={}, mirror={})""".format(self.grating, self.mirror)
    
    def generate_rays(self):
        """
        Generate rays for the PGM setup.
        """
        
        r0 = Ray3D(Point3D(0, self.beam_offset, -1000),
                   Point3D(0, self.beam_offset, 0)-
                   Point3D(0, self.beam_offset, -1000))
        
        r1 = Ray3D(Point3D(0, self.beam_offset + self.beam_height/2, -1000),
                   Point3D(0, self.beam_offset + self.beam_height/2, 0)-
                     Point3D(0, self.beam_offset + self.beam_height/2, -1000)
                   )

        r2 = Ray3D(Point3D(0, self.beam_offset - self.beam_height/2, -1000),
                   Point3D(0, self.beam_offset - self.beam_height/2, 0) -
                   Point3D(0, self.beam_offset - self.beam_height/2, -1000))

        r3 = Ray3D(Point3D(-self.beam_width/2, self.beam_offset, -1000),
                   Point3D(-self.beam_width/2, self.beam_offset, 0) -
                   Point3D(-self.beam_width/2, self.beam_offset, -1000))

        r4 = Ray3D(Point3D(self.beam_width/2, self.beam_offset, -1000),
                   Point3D(self.beam_width/2, self.beam_offset, 0) -
                   Point3D(self.beam_width/2, self.beam_offset, -1000))

        self._rays = [r0, r1, r2, r3, r4]


    def read_file(self, filename):
        """
        Read PGM parameters from a file. 
        See config_pgm.ini for an example.
        The config file should contain a grating and a mirror section.

        Parameters
        ----------
        filename : str
            The name of the file to read from
        """
        
        self._grating.read_file(filename)
        self._mirror.read_file(filename)
        pgm_config = configparser.ConfigParser()
        pgm_config.read(filename)

        self._energy = float(pgm_config['beam']['energy'])
        self._beam_offset = float(pgm_config['beam']['beam_offset'])
        self._beam_width = float(pgm_config['beam']['beam_width'])
        self._beam_height = float(pgm_config['beam']['beam_height'])
    

    @property

    def theta(self):
        return 0.5*(self.grating.alpha - self.grating.beta)

    @theta.setter

    def theta(self, value):
        self.theta = value

    @classmethod

    def pgm_from_file(cls, filename):
        """
        Create a PGM from a file. 
        See config_pgm.ini for an example.
        The config file should contain a grating and a mirror section.

        Parameters
        ----------
        filename : str
            The name of the file to read from
        """
        pgm = cls()
        pgm.read_file(filename)
        return pgm

    def propagate(self, *args):
        """
        Propagate rays through the PGM setup.

        Parameters
        ----------
        *args : Ray3D
            The rays to be propagated
        
        Returns
        -------
        propagated_rays : list
            A list of propagated rays

        """
        _ = self._mirror.compute_corners()
        _ = self._grating.compute_corners()

        mirr_ray = self._mirror.reflect(*args)
        grating_ray = self._grating.diffract(*mirr_ray)
        mirror_intercept = [mirr_ray.position for mirr_ray in mirr_ray]
        grating_intercept = [grating_ray.position for grating_ray in grating_ray]
        
        self._mirror_intercept = mirror_intercept
        self._grating_intercept = grating_intercept
        return grating_ray, mirror_intercept, grating_intercept

    @property
    def grating(self):
        return self._grating
    
    @grating.setter
    def grating(self, value):
        self._grating = value

    @property
    def mirror(self):
        return self._mirror
    
    @mirror.setter
    def mirror(self, value):
        self._mirror = value

    @property
    def rays(self):
        return self._rays
    
    @rays.setter
    def rays(self, value):
        self._rays = value

    @property
    def beam_offset(self):
        return self._beam_offset
    
    @beam_offset.setter
    def beam_offset(self, value):
        self._beam_offset = value
    
    @property
    def beam_width(self):
        return self._beam_width
    
    @beam_width.setter
    def beam_width(self, value):
        self._beam_width = value

    @property
    def beam_height(self):
        return self._beam_height
    
    @beam_height.setter
    def beam_height(self, value):
        self._beam_height = value

    @property
    def mirror_intercept(self):
        return self._mirror_intercept
    
    @property
    def grating_intercept(self):
        return self._grating_intercept
    
    
    def draw_sideview(self, ax):
        """
        Draws the setup on a y-z projection on a given axis.

        Parameters
        ----------
        ax : matplotlib.axes
            The axis to draw on

        """
        mirror_corners = self.mirror.compute_corners()
        grating_corners = self.grating.compute_corners()
        mirror_corners_y, mirror_corners_z = mirror_corners[::2,1], mirror_corners[::2,2]
        mirror_corners_yz = np.array([mirror_corners_z, mirror_corners_y]).T
        # ConvelHull method used to ensure the entire region is filled regardless
        # of point order.
        hull_grating = ConvexHull(mirror_corners_yz)

        grating_corners_y, grating_corners_z = grating_corners[::2,1], grating_corners[::2,2]
        grating_corners_yz = np.array([grating_corners_z, grating_corners_y]).T
        hull_mirror = ConvexHull(grating_corners_yz)

        ax.fill(mirror_corners_yz[hull_mirror.vertices,0], mirror_corners_yz[hull_mirror.vertices,1], 'r')
        ax.fill(grating_corners_yz[hull_grating.vertices,0], grating_corners_yz[hull_grating.vertices,1], 'b')

        return 
    
    def draw_topview(self, ax):
        """
        Draws the top-view (x-z projection) of the setup on a given axis.

        Parameters
        ----------
        ax : matplotlib.axes
            The axis to draw on
        """

        m_corners = self.mirror_corners()
        g_corners = self.grating_corners()

        mirror_rect = np.array([
            [m_corners[2][0]]
        ])

        mirror_blx = self.mirror_intercept[3].x + self.mirror_width/2
        mirror_blz = self.mirror_intercept[2].z
        mirror_l = self.mirror_intercept[1].z - self.mirror_intercept[2].z
        mirror_w = self.mirror_intercept[4].x - self.mirror_intercept[3].x

        grating_blx = self.grating_intercept[3].x - self.grating_width/2
        grating_blz = self.grating_intercept[2].z
        grating_l = self.grating_intercept[1].z - self.grating_intercept[2].z
        grating_w = self.grating_intercept[4].x - self.grating_intercept[3].x

       
        grating_corners = np.array([])



    def mirror_corners(self):
        a = self.mirror.hoffset
        c = self.mirror.voffset
        h = self.mirror.axis_voffset
        theta = self.mirror.theta
        w = self.mirror._width
        l = self.mirror._length
        theta_g = 90 - theta
        theta_rad = theta_g*np.pi/180

        tlfz = -((a - c * np.tan(theta_rad)) * np.cos(theta_rad)) + h
        tlfx = -w/2

        trfz = tlfz
        trfx = w/2

        tlbz = tlfz - l*np.cos(theta_rad)
        tlbx = -w/2

        trbz = tlbz
        trbx = w/2

        return ((tlfz, tlfx), (trfz, trfx), (tlbz, tlbx), (trbz, trbx))

    def grating_corners(self):
        
        l = self.grating._length
        w = self.grating._width
        beta = self.grating.beta
        
        beta_g = 90 + beta
        beta_rad = beta_g*np.pi/180

        blbz = -(l/2)*np.cos(beta_rad)
        blbx = -w/2

        brbz = -(l/2)*np.cos(beta_rad)
        brbx = w/2

        blfz = (l/2)*np.cos(beta_rad)
        blfx = -w/2

        brfz = (l/2)*np.cos(beta_rad)
        brfx = w/2

        return ((blbz, blbx), (brbz, brbx), (blfz, blfx), (brfz, brfx))