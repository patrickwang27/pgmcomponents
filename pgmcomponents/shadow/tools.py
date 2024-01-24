from pgmcomponents.elements import *
from pgmcomponents.geometry import *
from Shadow import OE
from colorama import Fore

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

def config_oe(pgm, grating_oe:OE, mirror_oe:OE)-> None:
    """
    Configures the given OEs appropriately 
    for the given PGM object.

    Parameters
    ----------
    pgm : PGM
        The PGM object.
    grating_oe : OE
        The grating OE.
    mirror_oe : OE
        The mirror OE.
    
    Returns
    -------
    None
    """

    mirror_offsets, grating_offsets = pgm.centre_of_footprint()

    print(Fore.YELLOW + f"Initialising grating, \n alpha= {pgm.grating.alpha}, \n beta= {pgm.grating.beta}, \n offset = {grating_offsets.z} mm, \n line_density= {pgm.grating.line_density}"+ Fore.RESET)
    grating_oe.T_INCIDENCE = pgm.grating.alpha
    grating_oe.T_REFLECTION = pgm.grating.beta
    grating_oe.RULING = pgm.grating.line_density
    grating_oe.F_MOVE = 1
    grating_oe.OFFY = grating_offsets[2]
    print(Fore.GREEN + "Grating initialised"+ Fore.RESET)

    print(Fore.YELLOW + f"Initialising mirror, \n theta = {pgm.theta} \n offset = {mirror_offsets.z} mm"+ Fore.RESET)
    
    mirror_oe.T_INCIDENCE = pgm.theta
    mirror_oe.T_REFLECTION = pgm.theta
    mirror_oe.F_MOVE = 1
    mirror_oe.OFFY = mirror_offsets[2]
    print(Fore.GREEN + "Mirror initialised"+ Fore.RESET)

    print(Fore.GREEN + "Initialisation complete"+ Fore.RESET)

    return None