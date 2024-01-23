from pgmcomponents.elements import *
from pgmcomponents.geometry import *

def make_pgm(grating_params, mirror_params):
    """
    Create a PGM object from the given parameters.

    Parameters
    ----------
    grating_params : dict
        Dictionary of parameters for the grating.

        line_density=600, 
        energy=250, 
        cff=2, 
        order=1, 
        dimensions = np.array([1,1,1]), 
        borders = np.array([0,0,0,0])

    mirror_params : dict
        Dictionary of parameters for the mirror.

        voffset=20, 
        hoffset=0, 
        axis_voffset=0, 
        axis_hoffset=0, 
        dimensions = np.array([450, 70, 50]),
        theta=45, 
        plane=Plane(),
        borders = np.array([0,0,0,0]

    pgm_params : dict
        Dictionary of parameters for the PGM.

    Returns
    -------
    pgm : PGM
        The PGM object.
    """
    # Create the grating.
    grating = Grating(**grating_params)

    # Create the mirror.
    mirror = Plane_Mirror(**mirror_params)

    # Create the PGM.
    pgm = PGM(grating=grating, mirror=mirror)

    return pgm

def shadow_dict(pgm):
    """
    Create a dictionary of parameters for the PGM object.

    Parameters
    ----------
    pgm : PGM
        The PGM object.

    Returns
    -------
    pgm_dict : dict
        Dictionary of parameters for the PGM object.
    """
    keys = [
        'line_density', 
        'energy', 
        'cff', 
        'order', 
        'grating_dimensions', 
        'voffset', 
        'hoffset', 
        'axis_voffset', 
        'axis_hoffset', 
        'mirror_dimensions',
        'theta', 
        'alpha',
        'beta']
    values = [
        pgm.grating.line_density, 
        pgm.grating.energy, 
        pgm.grating.cff, 
        pgm.grating.order, 
        pgm.grating.dimensions, 
        pgm.mirror.voffset, 
        pgm.mirror.hoffset, 
        pgm.mirror.axis_voffset, 
        pgm.mirror.axis_hoffset, 
        pgm.mirror.dimensions,
        pgm.mirror.theta, 
        pgm.mirror.alpha,
        pgm.mirror.beta]
    
    pgm_dict = dict(zip(keys, values))

    return pgm_dict