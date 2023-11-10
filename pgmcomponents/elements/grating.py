from __future__ import annotations
import numpy as np
import configparser
from pgmcomponents.geometry import Point3D, Plane, Ray3D
from scipy.constants import c, h, e


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
    borders : array_like
        Specifies the borders of a realistic grating component.
        |-----------Top------------|
        |                          |
       Left   Grating Plane      Right
        |                          |      ----> +z direction
        |----------Bottom----------|
        [top, bottom, left, right]

        Left - Right => Tangential
        Top - Bottom => Sagittal
    
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

        Left - Right => Tangential
        Top - Bottom => Sagittal
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
    # Run a code formatter and linter to fix code style adn syntax errors. Black & Falke8 are good for this.
    def __init__(self, 
                 line_density=600, 
                 energy=250, 
                 cff=2, 
                 order=1, 
                 dimensions = np.array([1,1,1]), 
                 borders = np.array([0,0,0,0])):

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
        # Use f-strings
        return f"Grating(line_density={self.line_density},\n energy={}, \n cff={}, \n order={}, \n dimensions={},\n borders={})"
    
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
        
        if len(config['grating']) != 6:
            # You could add config['grating'] into the error message
            raise ValueError("Expected exactly five parameters in grating file")

        # Could use tuple instead of list
        variables = ['line_density', 'energy', 'cff', 'order', 'dimensions']
        for var in variables:
            if var not in config['grating']:
                raise ValueError("Missing parameter {} in grating file".format(var))
            
        # You already check if variables in config['grating'] above and repeat below.
        # Could use sets to create items from variable and config['grating'] to avoid list comprehension.
        items = [x for x in variables if x in config['grating'] and x != 'dimensions' and x != 'borders']

        for key, value in zip(items, config['grating'].values()):
            # Avoid using exec
            exec(f"self._{key} = float({value})")
            print(key)
            print(value)
        
        self._order = int(self._order)
        self._dimensions = np.array([float(x) for x in config['grating']['dimensions'].split(',')])
        self._borders= np.array([float(x) for x in config['grating']['borders'].split(',')])

    @property
    def line_density(self):
        return self._line_density
    
    # Is there any validation you could add to any of these setters?
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
        return int(self._order)
    
    @order.setter
    def order(self, value):
        self._order = int(value)
    
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
    def plane(self):
        return self._grating_plane
    
    @plane.setter
    def plane(self, value):
        self._grating_plane = value if isinstance(value, Plane) else Plane()
    @property
    def borders(self):
        return self._borders
    
    @borders.setter

    def borders(self, value):
        if len(value) != 4:
            raise ValueError("Expected exactly four values for borders")
        self._borders = value


    def set_angles(self, alpha, beta):
        """
        Set the incident and diffraction angles of the grating.

        Parameters
        ----------
        alpha : float
            The incident angle in degrees
        beta : float 
            The diffraction angle in degrees

        Raises
        ------
        ValueError
            If the wavelength is zero

        """
        wavelength = (np.sin(np.deg2rad(alpha)) + np.sin(np.deg2rad(beta))) / (self.line_density*1000*self._order)
        
        try:
            self._energy = 12398.42 / wavelength #converts wavelength to eV
        # better to check explicity if wavelength is zero and raise ValueError
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
        # could call compute_corners() here instead of raising error
        raise AttributeError("Corners should be calculated via compute_corners().")

    def compute_beta(self):
        """
        Compute the diffraction angle beta from the incident angle alpha.

        Returns
        -------
        beta : float
            The diffraction angle in degrees
        
        Raises
        ------
        ValueError
            If the wavelength is zero
        
        """
        beta = 0
        try:
            wavelength = self.wavelength(self.energy)
            u = self.order*self.line_density*1000*wavelength - np.sin(np.deg2rad(self.alpha))
            beta = np.rad2deg(np.arcsin(u))
        # Better to validate value and raise ValueError on that directly (e.g. -1 <= u <= 1) with descriptive error message
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
        print(self.energy,
              self.order,
                self.line_density,
                self.cff,
               wavelength)
        
        lambda_u = self.order*self.line_density*1000*wavelength/(1-self.cff**2)
        sin_alpha = lambda_u + np.sqrt(1+lambda_u**2*self.cff**2)
        self._alpha = np.rad2deg(np.arcsin(sin_alpha))
        self._beta = -np.rad2deg(np.arccos(np.cos(np.arcsin(sin_alpha))*self.cff))

        return self._alpha, self._beta

    # Could add type annotations on all your functions
    def diffract(self, *args)-> list:
        """
        A method to diffract rays off the grating.

        Parameters
        ----------
        *args : Ray3D or list of Ray3D
            The rays to be diffracted

        Returns
        -------
        diffracted_rays : list of Ray3D
            A list of diffracted rays

        Raises
        ------
        raises ValueError too
        TypeError
            If the rays are not Ray3D objects

        """
        diffracted_rays = []
        
        # You check len before checking args is a list. Is this checking for an empty list? If so would be better after list check. 
        if len(args) == 0:
            raise ValueError("Expected at least one ray")
        
        # Use isinstance()
        if type(args[0]) == list:
            args = args[0]


        # Index isn't used, so can use _ as palceholder (for _, ray in (enumerate))
        for index, ray in enumerate(args):
            if not isinstance(ray, Ray3D):
                raise TypeError("Expected Ray3D object")
            raydotplane = ray.vector.dot(self._grating_plane.normal)
            angle = np.arccos(raydotplane/np.linalg.norm(self._grating_plane.normal))
            alpha = np.rad2deg(np.pi/2-angle)
            beta = self.compute_beta()
            diff_ray = self.reflect(ray)[0]
            angle = -90 - beta - alpha
            diff_ray.vector[2] += np.cos(np.deg2rad(angle))
            diff_ray.vector[1] += np.sin(np.deg2rad(angle))
            diff_ray.vector = diff_ray.vector/np.linalg.norm(diff_ray.vector)
            diffracted_rays.append(diff_ray)
        return diffracted_rays
    
    # accesses Grating.wavelength
    @staticmethod

    # Isn't this the same as compute_beta?
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
        
        Raises
        ------ 
        ValueError
            If the wavelength is zero
        
        """
        beta = 0 

        try:
            wavelength = Grating.wavelength(energy)
            u = order*line_density*1000*wavelength - np.sin(np.deg2rad(alpha))
            beta = np.rad2deg(np.arcsin(u))

        except ZeroDivisionError:
            raise ValueError("Unexpected divide by zero in grating.calc_beta")
        
        return beta

    # rename something like energy_to_wavelength
    def wavelength(self, energy):
        return h*c/(e*energy)
    
    def compute_corners(self)-> np.ndarray:
        """
        Compute the corners of the grating in the global coordinate system.

        Returns
        -------
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
        """
        
        beta = np.deg2rad(self._beta)
        # beta_g not used
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

    def reflect(self, *args, zero_order = False)-> list:
        """
        A method to reflect rays off the grating.

        Parameters
        ----------
        *args : Ray3D or list of Ray3D
            The rays to be reflected

        Returns
        -------
        reflected_rays : list
            A list of reflected rays

        """
        reflected_rays = []
        
        # Check after determining if list
        if len(args) == 0:
            raise ValueError("Expected at least one ray")
        
        # se isinstance
        if type(args[0]) == list:
            args = args[0]
        

        for index, ray in enumerate(args):
            if not isinstance(ray, Ray3D):
                raise TypeError("Expected Ray3D object")
            try:
                _, plane_intersection = self._grating_plane.intersectQ(ray)
            except ValueError:
                print(f'Ray of index {index} does not intersect grating, tread with caution!')
                continue
            ray_array = ray.vector
            grating_normal = self._grating_plane.normal
            if zero_order:
                
                reflected_ray_array = ray_array - 2 * np.dot(ray_array, -grating_normal) * grating_normal
            else:
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
    
