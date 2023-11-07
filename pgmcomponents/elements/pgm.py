from __future__ import annotations
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.patches import Rectangle, Patch 
from matplotlib import axes
from matplotlib.collections import PatchCollection
import configparser
from scipy.constants import c, h, e
from pgmcomponents.geometry import Plane, Point3D, Vector3D, Ray3D
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
    
    def energy(self, value):
        self.grating.energy = value

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
        return -1*self._beam_offset
    
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
    
    
    @property
    def cff(self):
        return self.grating.cff
    
    @cff.setter
    def cff(self, value):
        self.grating.cff = value
    

    def values(self):
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
        
        self._mirror_intercept = mirror_intercept
        self._grating_intercept = grating_intercept
        return grating_ray, mirror_intercept, grating_intercept


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

        self.generate_rays()
        grating_ray, mirror_int, grating_int = self.propagate(self.rays)
        
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
        
        zero_order_rays = self.grating.reflect(self.rays)
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
        
        xlim = ax.get_xlim()
        ylim = ax.get_ylim()
        legend_entries = [
            Patch(facecolor=(1,0,0,1), edgecolor=(1,0,0,0.3), label='Mirror'),
            Patch(facecolor=(0,0,1,1), edgecolor=(0,0,1,0.3), label='Grating'),
        ]
        ax.legend(handles=legend_entries, loc = 'lower right', fontsize=16, fancybox=True, shadow=True)

        


        return 
        

    def draw_topview(self, ax):
        """
        Draws the top-view (x-z projection) of the setup on the current
        axes.

        """

        m_corners = self.mirror_corners()
        g_corners = self.grating_corners()

        mirror_rect = np.array([
            [m_corners[2][0], m_corners[2][1]+self.mirror._width()/2], #top left
            [m_corners[2][0], m_corners[2][1]-self.mirror._width()/2], #bottom_left
            [m_corners[2][0]+ self.mirror._length(), m_corners[2][1]-self.mirror._width()/2], #bottom_right
            [m_corners[2][0]+ self.mirror._length(), m_corners[2][1]+self.mirror._width()/2]  #top_right
        ])

        # Mirror the borders of the rectangular image
        displacement = np.array([
            [0, self.mirror._width()/2+ self.grating._width()/2],
            [0, self.mirror._width()/2+ self.grating._width()/2],
            [0, self.mirror._width()/2+ self.grating._width()/2],
            [0, self.mirror._width()/2+ self.grating._width()/2]
        ])
        
        mirror_rect_borders = np.array([
            [mirror_rect[0][0] - self.mirror.borders[2], mirror_rect[0][1] + self.mirror.borders[0]],
            [mirror_rect[1][0] - self.mirror.borders[2], mirror_rect[1][1] - self.mirror.borders[1]],
            [mirror_rect[2][0] + self.mirror.borders[3], mirror_rect[2][1] - self.mirror.borders[1]],
            [mirror_rect[3][0] + self.mirror.borders[3], mirror_rect[3][1] + self.mirror.borders[0]]])
        
        grating_rect = np.array([
            [g_corners[0][0], g_corners[0][1] - self.grating._width()/2], #top left
            [g_corners[0][0], g_corners[0][1] + self.grating._width()/2], #bottom_left
            [g_corners[0][0] + self.grating._length(), g_corners[0][1] + self.grating._width()/2], #bottom_right
            [g_corners[0][0] + self.grating._length(), g_corners[0][1] - self.grating._width()/2]  #top_right
        ])

        grating_rect = grating_rect + displacement

        grating_rect_borders = np.array([
            [grating_rect[0][0] + self.grating.borders[2], grating_rect[0][1] + self.grating.borders[0]],
            [grating_rect[1][0] + self.grating.borders[2], grating_rect[1][1] - self.grating.borders[1]],
            [grating_rect[2][0] - self.grating.borders[3], grating_rect[2][1] - self.grating.borders[1]],
            [grating_rect[3][0] - self.grating.borders[3], grating_rect[3][1] + self.grating.borders[0]]])
        
        self.generate_rays()
        
        grating_ray, mirror_intercept, grating_intercept = self.propagate(self.rays)
        
        #Index denotes the ray i.e. mirror_intercept[0] is the ray_0
        
        mirror_blx = mirror_intercept[3].x + self.mirror._width()/2
        mirror_blz = mirror_intercept[2].z
        mirror_l = mirror_intercept[1].z - mirror_intercept[2].z
        mirror_w = mirror_intercept[4].x - mirror_intercept[3].x


        grating_blx = grating_intercept[3].x - self.grating._width()/2
        grating_blz = grating_intercept[2].z
        grating_l = grating_intercept[1].z - grating_intercept[2].z
        grating_w = grating_intercept[4].x - grating_intercept[3].x
        
        
        beam_footprint_dimensions = np.array([mirror_l, mirror_w, grating_l, grating_w])
        
        ax.fill(mirror_rect_borders[:,0], mirror_rect_borders[:,1], 'r',alpha=0.5)
        ax.fill(grating_rect_borders[:,0], grating_rect_borders[:,1], 'b',alpha=1)
        ax.fill(mirror_rect[:,0], mirror_rect[:,1], 'r',alpha=1, label='Mirror')
        ax.fill(grating_rect[:,0], grating_rect[:,1], 'b',alpha=0.5, label='Grating')
        rectangle = Rectangle((mirror_blz, mirror_blx - (self.mirror._width()/2+ self.grating._width())), mirror_l, mirror_w, color='g', alpha=1)
        ax.add_patch(rectangle)
        legend_entries = [
            Patch(facecolor=(1,0,0,1), edgecolor=(1,0,0,0.3), label='Mirror'),
            Patch(facecolor=(0,0,1,1), edgecolor=(0,0,1,0.3), label='Grating'),
            Patch(facecolor=(0,1,0,1), edgecolor=(0,1,0,0.3), label='Beam Footprint'),
        ]
        ax.legend(handles=legend_entries, loc = 'upper left', fontsize=16, fancybox=True, shadow=True)
    
        columns = ['Value']
        
        rectangle = Rectangle((grating_blz, grating_blx + self.mirror._width()/2+ self.grating._width()/2), grating_l, grating_w, color='g', alpha=1)
        ax.add_patch(rectangle)

        
        #print(mirror_rect_hull.vertices)
        return



    def mirror_corners(self):
        a = self.mirror.hoffset
        c = self.mirror.voffset
        h = self.mirror.axis_voffset
        theta = self.mirror.theta
        w = self.mirror._width()
        l = self.mirror._length()
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

        return ((blbz, blbx), (brbz, brbx), (blfz, blfx), (brfz, brfx))
    
    @staticmethod
    def undulator_size():
        pass
