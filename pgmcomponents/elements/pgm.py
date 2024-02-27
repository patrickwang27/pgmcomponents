from __future__ import annotations
from matplotlib.axes import Axes
import numpy as np
from matplotlib.patches import Patch 
import configparser
from pgmcomponents.geometry import Point3D, Ray3D
from scipy.spatial import ConvexHull
from matplotlib.lines import Line2D
from pgmcomponents.elements import Plane_Mirror, Grating

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
    rays : list
        The rays to be propagated through the PGM
    beam_offset : float
        The vertical offset of the beam in mm
    beam_width : float
        The width of the beam in mm
    beam_height : float
        The height of the beam in mm
    
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
        # It's unclear what is happening here and there will be uncaught errors if kwargs is not as expected.
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
        self._beam_offset = 13
        self._beam_width = 6.43
        self._beam_height = 5
        self._energy = 2400

    def __repr__(self):
        return """PGM(grating={}, \nmirror={}, \nb={},\nbeam_width={},\nbeam_height={})""".format(self.grating, 
                                                               self.mirror,
                                                               self.beam_offset,
                                                               self.beam_width,
                                                               self.beam_height)
    
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
    

    def set_theta(self):
        """
        Set the angle of the grating.
        """
        self.mirror.theta = 0.5 * (self.grating.alpha-self.grating.beta)

    @property

    def theta(self):
        return self.mirror.theta

    @theta.setter

    def theta(self, value):
        self.theta = value
        self.mirror.theta = value

    @property

    def energy(self):
        return self.grating.energy
    
    @property
    def wavelength(self):
        return 1239.8419843320025/self.energy
    
    @energy.setter
    # need validation for energy value, e.g. non-zero
    def energy(self, value: float)-> None:
        if isinstance(value, (float, int)) and value > 0:
            self.grating.energy = value
        else:
            print(value, type(value))
            raise ValueError("Expected energy to be a positive float!")
    @property
    def grating(self)-> Grating:
        return self._grating
    
    @grating.setter
    def grating(self, value: Grating)-> None:
        if isinstance(value, Grating):
            self._grating = value
        else: 
            raise TypeError("Expected Grating instance for grating!")
    
    @property
    def mirror(self)-> Plane_Mirror:
        return self._mirror
    
    @mirror.setter
    def mirror(self, value: Plane_Mirror):
        if isinstance(value, Plane_Mirror):
            self._mirror = value
        else:
            raise TypeError("Expected Plane_Mirror instance for mirror!")
    @property
    def rays(self)-> list[Ray3D]:
        return self._rays
    
    @rays.setter
    def rays(self, value: list[Ray3D])-> None:
        self._rays = value
    
    @property
    def beam_offset(self)-> float:
        return -1*self._beam_offset
    
    @beam_offset.setter
    def beam_offset(self, value: float)-> None:
        if isinstance(value, (float, int)):
            self._beam_offset = -1*value
        else:
            raise TypeError("Expected float for beam_offset!")
        
    @property
    def b(self)-> float:
        return self._beam_offset
    
    @b.setter
    def b(self, value: float)-> None:
        self.beam_offset = value

    @property
    def beam_width(self)-> float:
        return self._beam_width
    
    @beam_width.setter
    def beam_width(self, value: float)-> None:
        if isinstance(value, (float, int)) and value >= 0:
            self._beam_width = value
        else:
            raise TypeError("Expected non-negative float for beam_width!")
    
    @property
    def beam_height(self)-> float:
        return self._beam_height
    
    @beam_height.setter
    def beam_height(self, value: float)-> None:
        if isinstance(value, (float, int)) and value >= 0:
            self._beam_height = value
        else:
            raise ValueError("Expected non-negative float for beam_height!")


    @property
    def mirror_intercept(self)-> Point3D:
        return self._mirror_intercept
    
    @property
    def grating_intercept(self)-> Point3D:
        return self._grating_intercept
    
    
    @property
    def cff(self)-> float:
        return self.grating.cff
    
    @cff.setter
    def cff(self, value: float)-> None:
        if isinstance(value, (float, int)) and value > 1:
            self.grating.cff = value
        else:
            raise ValueError("Expected cff to be a positive float bigger than 1!")

    def values(self)-> dict:

        dictionary = {'beam_vertical': self.beam_offset,
                      'beam_width': self.beam_width,
                      'beam_height': self.beam_height,
                      'line_density': self.grating.line_density,
                      'energy': self.grating.energy,
                      'cff': self.grating.cff,
                      'order': self.grating.order,
                      'grating_dimensions': self.grating.dimensions,
                      'grating.borders': self.grating.borders,
                      'mirror_voffset': self.mirror.voffset,
                      'mirror_hoffset': self.mirror.hoffset,
                      'mirror_axis_voffset': self.mirror.axis_voffset,
                      'mirror_axis_hoffset': self.mirror.axis_hoffset,
                      'mirror_dimensions': self.mirror.dimensions,
                      'mirror_theta': self.mirror.theta,
                      'mirror_borders': self.mirror.borders}
        return dictionary

    @classmethod

    def pgm_from_file(cls, filename:float)-> PGM:
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

    def propagate(self, *args: Ray3D | list)-> tuple:
        """
        Propagate rays through the PGM setup.

        Parameters
        ----------
        *args : Ray3D
            The rays to be propagated
        
        Returns
        -------
        grating_ray : list of Ray3D objects
            A list of propagated rays originating at the grating intercept
        
        mirror_intercept : list of array_like
            A list of the mirror intercepts

        grating_intercept : list of array_like
            A list of the grating intercepts

        """
        _ = self._mirror.compute_corners()
        _ = self._grating.compute_corners()

        mirr_ray = self._mirror.reflect(*args)
        grating_ray = self._grating.diffract(*mirr_ray)
        mirror_intercept = [mirr_ray.position for mirr_ray in mirr_ray]
        grating_intercept = [grating_ray.position for grating_ray in grating_ray]
        
        # _mirror_intercept and _grating_intercept not defined in __init__
        self._mirror_intercept = mirror_intercept
        self._grating_intercept = grating_intercept
        return grating_ray, mirror_intercept, grating_intercept


    def draw_sideview(self, ax: Axes):
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
        # ConvexHull sp?
        # ConvelHull method used to ensure the entire region is filled regardless
        # of point order.
        hull_grating = ConvexHull(mirror_corners_yz)

        grating_corners_y, grating_corners_z = grating_corners[::2,1], grating_corners[::2,2]
        grating_corners_yz = np.array([grating_corners_z, grating_corners_y]).T
        hull_mirror = ConvexHull(grating_corners_yz)

        ax.fill(mirror_corners_yz[hull_mirror.vertices,0], mirror_corners_yz[hull_mirror.vertices,1], 'r')
        ax.fill(grating_corners_yz[hull_grating.vertices,0], grating_corners_yz[hull_grating.vertices,1], 'b')

        self.generate_rays()
        grating_ray, mirror_int, grating_int = self.propagate(self.rays)
        #print("Side view r3 int:", mirror_int[3])
        for index, ray in enumerate(grating_ray):
            r_z = np.array([
            self.rays[index].position.z,
            mirror_int[index].z,
            grating_int[index].z,
            grating_int[index].z + 1000*ray.vector[-1]
            ])

            r_x = np.array([
            self.rays[index].position.y,
            mirror_int[index].y,
            grating_int[index].y,
            grating_int[index].y + 1000*ray.vector[-2]
            ])

            line = Line2D(r_z, r_x, color='green', linewidth=1, label='Dispersed Rays')
            ax.add_line(line)
        
        zero_order_rays = self.grating.reflect(self.rays, zero_order=True)

        """
        for index, ray in enumerate(zero_order_rays):
            r_z = np.array([
            grating_int[index].z,
            grating_int[index].z + 1000*ray.vector[-1]
            ])

            r_x = np.array([
            grating_int[index].y,
            grating_int[index].y + 1000*ray.vector[-2]
            ])

            line = Line2D(r_z, r_x, color='gray', linewidth=1, label='Zero Order Reflections')
            ax.add_line(line)
        """
        legend_entries = [
            Patch(facecolor=(1,0,0,1), edgecolor=(1,0,0,0.3), label='Mirror'),
            Patch(facecolor=(0,0,1,1), edgecolor=(0,0,1,0.3), label='Grating'),
        ]
        ax.legend(handles=legend_entries, loc = 'lower right', fontsize=16, fancybox=True, shadow=True)
        ax.axhline(y=0, color='black', linestyle='--', linewidth=1.3)
        ax.axvline(x=0, color='black', linestyle='--', linewidth=1.3)
        
    def draw_topview(self, ax: Axes)-> None:
        """
        Draws the top-view (x-z projection) of the setup on the current
        axes.

        """

        m_corners = self.mirror_corners()
        g_corners = self.grating_corners()
        m_corners = np.array(m_corners)
        
        self.generate_rays()
        
        grating_corners = np.array(self.grating_corners())
        mirror_corners = np.array(self.mirror_corners())
        _, mirror_int_1, grating_int_1 =  self.propagate(self.rays[1])
        _, mirror_int_2, grating_int_2 =  self.propagate(self.rays[2])
        _, mirror_int_3, grating_int_3 =  self.propagate(self.rays[3])
        _, mirror_int_4, grating_int_4 =  self.propagate(self.rays[4])

        mirror_intercepts = [
            mirror_int_1[0].to_point(),
            mirror_int_2[0].to_point(),
            mirror_int_3[0].to_point(),
            mirror_int_4[0].to_point()
        ]

        grating_intercepts = [
            grating_int_1[0].to_point(),
            grating_int_2[0].to_point(),
            grating_int_3[0].to_point(),
            grating_int_4[0].to_point()
        ]

        mirror_footprint_width, mirror_footprint_height = self.calc_footprint_size(mirror_intercepts)
        grating_footprint_width, grating_footprint_height = self.calc_footprint_size(grating_intercepts)
        #print("Mirror footprint width:", mirror_footprint_width)
       # print("Mirror footprint height:", mirror_footprint_height)
        #print("Grating footprint width:", grating_footprint_width)
       # print("Grating footprint height:", grating_footprint_height)
        
        mirr_footprint_corners = np.array([
            [mirror_int_2[0].z, mirror_int_3[0].x],
            [mirror_int_1[0].z, mirror_int_3[0].x],
            [mirror_int_1[0].z, mirror_int_4[0].x],
            [mirror_int_2[0].z, mirror_int_4[0].x]
        ])

        grating_footprint_corners = np.array([
            [grating_int_2[0].z, grating_int_3[0].x],
            [grating_int_1[0].z, grating_int_3[0].x],
            [grating_int_1[0].z, grating_int_4[0].x],
            [grating_int_2[0].z, grating_int_4[0].x]
        ])

        offset = 0.5*(self.mirror._width() + self.grating._width())* np.array([
            [0,1],
            [0,1],
            [0,1],
            [0,1]
        ])

        grating_corners = grating_corners + offset
        grating_footprint_corners = grating_footprint_corners + offset

        ax.fill(mirror_corners[:,0], mirror_corners[:,1], 'r',alpha=1, label='Mirror')
        ax.fill(grating_corners[:,0], grating_corners[:,1], 'b',alpha=0.5, label='Grating')
        ax.fill(mirr_footprint_corners[:,0], mirr_footprint_corners[:,1], c='black')
        ax.fill(grating_footprint_corners[:,0], grating_footprint_corners[:,1], c='green')
        ax.grid(axis='both', which='both', alpha = 0.5)
        ax.set_xticks(np.arange(-1000, 1000, 10), minor=True)
        ax.set_xticks(np.arange(-1000, 1000, 100), minor=False)
        ax.set_yticks(np.arange(-1000, 1000, 10), minor=True)
        ax.set_xlim(min(mirror_corners[:,0]), max(grating_corners[:,0]))
        ax.set_ylim(min(mirror_corners[:,1]), max(grating_corners[:,1]))
        #ax.fill(mirror_rect_borders[:,0], mirror_rect_borders[:,1], 'r',alpha=0.5)
        #ax.fill(m_corners[:,] , 'r',alpha=1)
        #x.fill(grating_rect_borders[:,0], grating_rect_borders[:,1], 'b',alpha=1)
        #ax.fill(grating_rect[:,0], grating_rect[:,1], 'b',alpha=0.5, label='Grating')
        #ax.fill([mirror_blz, mirror_blz + mirror_l, mirror_blz + mirror_l, mirror_blz], [mirror_blx, mirror_blx, mirror_blx + mirror_w, mirror_blx + mirror_w], 'g', alpha=0.5, label='Beam Footprint')
        #ax.fill([grating_blz, grating_blz + grating_l, grating_blz + grating_l, grating_blz], [grating_blx, grating_blx, grating_blx + grating_w, grating_blx + grating_w], 'g', alpha=0.5)
        legend_entries = [
            Patch(facecolor=(1,0,0,1), edgecolor=(1,0,0,0.3), label='Mirror'),
            Patch(facecolor=(0,0,1,1), edgecolor=(0,0,1,0.3), label='Grating'),
            Patch(facecolor=(0,0,0,1), edgecolor=(0,1,0,0.3), label=rf'Beam Footprint (Mirror): {mirror_footprint_width:.2f} mm x {mirror_footprint_height:.2f} mm'),
            Patch(facecolor=(0,1,0,1), edgecolor=(0,1,0,0.3), label=rf'Beam Footprint (Grating): {grating_footprint_width:.2f} mm x {grating_footprint_height:.2f} mm')

        ]

        ax.legend(handles=legend_entries, loc = 'upper left', fontsize=12, fancybox=True, shadow=True)


    def topview_trace(self)-> None:
        """
        Draws the top-view (x-z projection) of the setup on the current
        axes.

        """

        m_corners = self.mirror_corners()
        g_corners = self.grating_corners()
        m_corners = np.array(m_corners)
        # use your _width and _length setters
        
        self.generate_rays()
        
        # _, mirror_intercept, grating_intercept
        grating_corners = np.array(self.grating_corners())
        mirror_corners = np.array(self.mirror_corners())
        grating_ray, mirror_int_1, grating_int_1 =  self.propagate(self.rays[1])
        grating_ray, mirror_int_2, grating_int_2 =  self.propagate(self.rays[2])
        grating_ray, mirror_int_3, grating_int_3 =  self.propagate(self.rays[3])
        grating_ray, mirror_int_4, grating_int_4 =  self.propagate(self.rays[4])

        mirror_intercepts = [
            mirror_int_1[0].to_point(),
            mirror_int_2[0].to_point(),
            mirror_int_3[0].to_point(),
            mirror_int_4[0].to_point()
        ]

        grating_intercepts = [
            grating_int_1[0].to_point(),
            grating_int_2[0].to_point(),
            grating_int_3[0].to_point(),
            grating_int_4[0].to_point()
        ]

        mirror_footprint_width, mirror_footprint_height = self.calc_footprint_size(mirror_intercepts)
        grating_footprint_width, grating_footprint_height = self.calc_footprint_size(grating_intercepts)

        mirr_footprint_corners = np.array([
            [mirror_int_2[0].z, mirror_int_3[0].x],
            [mirror_int_1[0].z, mirror_int_3[0].x],
            [mirror_int_1[0].z, mirror_int_4[0].x],
            [mirror_int_2[0].z, mirror_int_4[0].x]
        ])

        grating_footprint_corners = np.array([
            [grating_int_2[0].z, grating_int_3[0].x],
            [grating_int_1[0].z, grating_int_3[0].x],
            [grating_int_1[0].z, grating_int_4[0].x],
            [grating_int_2[0].z, grating_int_4[0].x]
        ])

        offset = 0.5*(self.mirror._width() + self.grating._width())* np.array([
            [0,1],
            [0,1],
            [0,1],
            [0,1]
        ])

        grating_corners = grating_corners + offset
        grating_footprint_corners = grating_footprint_corners + offset

        return mirror_intercepts, grating_intercepts
        

    def calc_footprint_size(self, intercepts: list[Point3D])-> tuple:
        """
        Calculate the size of the footprint of the beam on the grating or the mirror
        when given the intercepts of the beam with the grating or the mirror.
         
        
        Parameters
        ----------
        intercepts : list of Point3D objects
            The intercepts of the beam with the grating or the mirror
            [r_1, r_2, r_3, r_4]

        Returns
        -------
        size : tuple
            The size of the footprint of the beam on the grating or the mirror in mm
        """

        r_1, r_2, r_3, r_4 = intercepts
    
        width = r_1.distance(r_2)
        height = r_3.distance(r_4)

        return width, height


    def centre_of_footprint(self):
        """
        Calculate the centre of the footprint of the beam on the grating or the mirror.
        
        Returns
        -------
        centre : Point3D
            The centre of the footprint of the beam on the grating or the mirror
        """
        _, mirror_int_0, grating_int_0 =  self.propagate(self.rays[0])

        return mirror_int_0, grating_int_0
        
    def find_offset(self):

        mirror_int, grating_int = self.centre_of_footprint()
        mirror_int = mirror_int[0]
        grating_int = grating_int[0]
        mirror_corners = self.mirror.compute_corners()
        mirror_corners = np.array(mirror_corners)
        #print(mirror_corners)
        centre_of_mirror_top = np.mean([mirror_corners[0], mirror_corners[1], mirror_corners[4], mirror_corners[5]], axis=0)
        #print([mirror_corners[0], mirror_corners[1], mirror_corners[4], mirror_corners[5]])
        #print(centre_of_mirror_top)
        mirror_offset =  np.array([mirror_int.x, mirror_int.y, mirror_int.z]) - centre_of_mirror_top
        #print(mirror_offset)
        mirror_offset = np.linalg.norm(mirror_offset) * mirror_offset[1]/np.abs(mirror_offset[1])

        grating_offset = np.linalg.norm(grating_int) * grating_int[1]/np.abs(grating_int[1])
        return mirror_offset, grating_offset
    
    def centre_of_mirror(self):
        """
        Calculate the centre of the mirror.
        
        Returns
        -------
        centre : Point3D
            The centre of the mirror
        """
        mirror_corners = self.mirror.compute_corners()
        mirror_corners = np.array(mirror_corners)
        centre_of_mirror = np.mean([mirror_corners[0], mirror_corners[1], mirror_corners[4], mirror_corners[5]], axis=0)
        return centre_of_mirror


    def mirror_corners(self)-> tuple:

        cot = lambda x: 1/np.tan(x)
        theta = np.deg2rad(self.mirror.theta)
        theta_g = 90 - self.theta
        theta_g = np.deg2rad(theta_g)
        a = self.mirror._hoffset
        c = self.mirror._voffset
        v = self.mirror._axis_voffset
        h = self.mirror._axis_hoffset

        w = self.mirror._width()
        l = self.mirror._length()
        d = self.mirror._height()
        #Top left front

        tlfz = -((a - c * cot(theta)) * np.sin(theta)) + h
        tlfy = -(c / np.sin(theta) + 
                 (a - c*cot(theta)) * np.cos(theta)) + v
        tlfx = -w/2

        #Top right front
        trfz = tlfz
        trfy = tlfy
        trfx = w/2

        #Top left back
        tlbz = tlfz - l*np.sin(theta)
        tlby = tlfy - l*np.cos(theta)
        tlbx = -w/2

        #Top right back
        trbz = tlbz
        trby = tlby
        trbx = w/2
        trb = Point3D(trbx, trby, trbz)

        return ((tlfz, tlfx), (trfz, trfx), (trbz, trbx), (tlbz, tlbx))

    def grating_corners(self)-> tuple:
        
        l = self.grating._length()
        w = self.grating._width()
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

        return ((blbz, blbx), (brbz, brbx), (brfz, brfx), (blfz, blfx))
    
    def corners(self)-> tuple[dict]:
        """
        Calculate the corners of the mirror and grating.
        
        Returns
        -------
        corners : dict
            The corners of the grating and mirror in the following order:
            bottom left back, bottom right back, bottom left front, bottom right front,
            top left back, top right back, top left front, top right front
        """
        positions = [
            "bottom left back",
            "bottom right back",
            "bottom left front",
            "bottom right front",
            "top left back",
            "top right back",
            "top left front",
            "top right front"
        ]
        grating_corners = self.grating.compute_corners()
        grating_corners_dict = dict(zip(positions, grating_corners))
        mirror_corners = self.mirror.compute_corners()
        mirror_corners_dict = dict(zip(positions, mirror_corners))

        return grating_corners_dict, mirror_corners_dict
            

    @staticmethod
    def undulator_size():
        pass
