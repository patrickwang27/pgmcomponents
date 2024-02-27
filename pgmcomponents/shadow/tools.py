from pgmcomponents.elements import *
from pgmcomponents.geometry import *
from Shadow import OE, Beam
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

def shadow_dict(pgm: PGM)-> dict:
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

def config_oe(pgm: PGM, grating_oe:OE, mirror_oe:OE, slit1_oe:OE, slit2_oe:OE)-> None:
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
    slit1_oe : OE
        The first slit OE to handle blockage
        by upstream edge of grating.
    slit2_oe : OE
        The second slit OE to handle blockage
        by downstream edge of mirror.
    
    Returns
    -------
    None
    """
    
    pgm.generate_rays()
    delta_y_mirror, delta_y_grating = pgm.find_offset()
    

    print(Fore.YELLOW + f"Initialising grating, \n alpha= {pgm.grating.alpha}, \n beta= {pgm.grating.beta}, \n offset = {delta_y_grating} mm, \n line_density= {pgm.grating.line_density}"+ Fore.RESET)
    grating_oe.ALPHA = 180
    grating_oe.DUMMY = 0.1
    grating_oe.RULING = pgm.grating.line_density
    grating_oe.F_MOVE = 1
    grating_oe.F_GRATING = 1
    grating_oe.OFFY = delta_y_grating
    grating_oe.T_INCIDENCE = pgm.grating.alpha
    grating_oe.T_REFLECTION = np.abs(pgm.grating.beta)
    grating_oe.RWIDX1 = pgm.grating._width()/2
    grating_oe.RWIDX2 = pgm.grating._width()/2
    grating_oe.RLEN1 = pgm.grating._length()/2
    grating_oe.RLEN2 = pgm.grating._length()/2
    grating_oe.T_SOURCE = 500
    grating_oe.FHIT_C = 1
    grating_oe.F_RIPPLE = 0
    print(Fore.GREEN + "Grating initialised"+ Fore.RESET)

    print(Fore.YELLOW + f"Initialising mirror, \n theta = {pgm.theta} \n offset = {delta_y_mirror} mm"+ Fore.RESET)
    
    mirror_oe.ALPHA = 0
    mirror_oe.DUMMY = 0.1
    mirror_oe.T_INCIDENCE = pgm.theta
    mirror_oe.T_REFLECTION = pgm.theta
    mirror_oe.F_MOVE = 1
    mirror_oe.OFFY = delta_y_mirror
    mirror_oe.RWIDX1 = pgm.mirror._width()/2
    mirror_oe.RWIDX2 = pgm.mirror._width()/2
    mirror_oe.RLEN1 = pgm.mirror._length()/2
    mirror_oe.RLEN2 = pgm.mirror._length()/2
    mirror_oe.T_INCIDENCE = pgm.theta
    mirror_oe.T_REFLECTION = pgm.theta
    mirror_oe.FHIT_C = 1
    mirror_oe.FWRITE = 0
    mirror_oe.F_G_S = 2
    mirror_oe.F_REFLEC = 0
    mirror_oe.F_RIPPLE = 0
    mirror_oe.T_SOURCE = 500
    print(Fore.GREEN + "Mirror initialised"+ Fore.RESET)

    #slit2_oe.DUMMY = 0.1
    #slit2_oe.FWRITE = 3
    slit2_oe.F_REFRAC = 2
    slit2_oe.F_SCREEN = 1 #any screens 1-yes 0-no
    slit2_oe.I_SLIT = np.array([1, 0, 0, 0, 0, 0, 0, 0, 0, 0]) #Aperature 1-yes 0-no
    slit2_oe.N_SCREEN = 1
    slit2_oe.RX_SLIT = np.array([pgm.mirror._width(), 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    slit2_oe.RZ_SLIT = np.array([1000, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    slit2_oe.T_INCIDENCE = 0.0
    slit2_oe.T_REFLECTION = 180.0
    beta_rad = np.abs(np.deg2rad(pgm.grating.beta))
    theta_rad = np.deg2rad(pgm.theta)
    a = pgm.mirror.hoffset
    c = pgm.mirror.voffset
    v = pgm.mirror.axis_voffset
    h = pgm.mirror.axis_hoffset
    delta_z_2 = delta_y_grating*np.cos(beta_rad) - ((-c)/np.sin(theta_rad) + (a - c*1/(np.tan(theta_rad)))*np.cos(theta_rad)+ v)
    slit2_oe.CZ_SLIT = np.array([500 - delta_z_2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])#Centre of slit (z)
    t_source = np.abs(delta_y_grating*np.sin(beta_rad)- (-((a-c*1/(np.tan(theta_rad)))*np.sin(theta_rad) + h)))
    slit2_oe.T_SOURCE = t_source

    print(Fore.GREEN + "Initialisation complete"+ Fore.RESET)

    return delta_z_2


def intensity(beam:Beam)-> float:
    """
    Calculate the intensity of the given beam.

    Parameters
    ----------
    beam : Beam
        The beam object.

    Returns
    -------
    intensity : float
        The intensity of the beam.
    """
    return np.sum([beam.getshonecol(6,nolost=1)**2,
                   beam.getshonecol(7,nolost=1)**2,
                   beam.getshonecol(8,nolost=1)**2])