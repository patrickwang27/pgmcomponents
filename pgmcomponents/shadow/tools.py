from pgmcomponents.elements import *
from pgmcomponents.geometry import *
from Shadow import OE, Beam
from colorama import Fore
import json
from scipy.interpolate import CubicSpline

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
        pgm.grating.alpha,
        pgm.grating.beta]
    
    pgm_dict = dict(zip(keys, values))

    return pgm_dict

def config_oe(pgm: PGM, grating_oe:OE, mirror_oe:OE, slit1_oe:OE, slit2_oe:OE, T_SOURCE = 0, T_IMAGE = 0)-> None:
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
    T_SOURCE : float
        The source distance relative to the centre of the grating.
        Default is 0.
    T_IMAGE : float
        The image distance relative to the centre of the grating.
        Default is 0.
    
    Returns
    -------
    None
    """
    
    pgm.generate_rays()
    delta_y_mirror, delta_y_grating = pgm.find_offset()
    
    alpha_rad = np.deg2rad(pgm.grating.alpha)
    beta_rad = np.deg2rad(pgm.grating.beta)
    theta_rad = np.deg2rad(pgm.theta)
    a = pgm.mirror._hoffset
    c = pgm.mirror._voffset
    v = pgm.mirror._axis_voffset
    h = pgm.mirror._axis_hoffset
    b = pgm.beam_offset
    

    print(Fore.YELLOW + f"Initialising grating, \n alpha= {pgm.grating.alpha}, \n beta= {pgm.grating.beta}, \n offset = {delta_y_grating} mm, \n line_density= {pgm.grating.line_density}"+ Fore.RESET)
    #grating_oe.ALPHA = 180
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
    grating_oe.FHIT_C = 1
    #grating_oe.F_RIPPLE = 0
    grating_oe.ORDER = -1*pgm.grating.order

    b_prime = np.abs(delta_y_grating + b)
    d = b_prime / (np.cos(alpha_rad - (np.pi/2 + beta_rad)))
    grating_oe.T_SOURCE = d
    grating_oe.T_IMAGE = 0


    print(Fore.GREEN + "Grating initialised"+ Fore.RESET)

    print(Fore.YELLOW + f"Initialising mirror, \n theta = {pgm.theta} \n offset = {delta_y_mirror} mm"+ Fore.RESET)
    
    #mirror_oe.ALPHA = 0
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
    #mirror_oe.F_REFLEC = 0
    #mirror_oe.F_RIPPLE = 0
    mirror_oe.T_IMAGE = 0
    mirror_oe.T_SOURCE = 0

    print(Fore.GREEN + "Mirror initialised"+ Fore.RESET)




    slit2_oe.F_REFRAC = 2
    slit2_oe.F_SCREEN = 1 #any screens 1-yes 0-no
    slit2_oe.I_SLIT = np.array([1, 0, 0, 0, 0, 0, 0, 0, 0, 0]) #Aperature 1-yes 0-no
    slit2_oe.N_SCREEN = 1
    slit2_oe.RX_SLIT = np.array([pgm.mirror._width(), 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    slit2_oe.RZ_SLIT = np.array([1000, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    slit2_oe.T_INCIDENCE = 0.0
    slit2_oe.T_REFLECTION = 180.0

    slit2_oeT_SOURCE = delta_y_grating*np.cos(beta_rad) - (h - (a-c*1/np.tan(theta_rad))*np.sin(theta_rad))
    slit2_oeT_IMAGE = -1*slit2_oe.T_SOURCE

    

    slit1_oe.F_REFRAC = 2
    slit1_oe.F_SCREEN = 1 #any screens 1-yes 0-no
    slit1_oe.I_SLIT = np.array([1, 0, 0, 0, 0, 0, 0, 0, 0, 0]) #Aperature 1-yes 0-no
    slit1_oe.N_SCREEN = 1
    slit1_oe.RX_SLIT = np.array([pgm.mirror._width(), 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    slit1_oe.RZ_SLIT = np.array([1000, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    slit1_oe.T_INCIDENCE = 0.0
    slit1_oe.T_REFLECTION = 180.0


    
    B_prime = delta_y_grating*np.cos(beta_rad)
    D_y = -(pgm.mirror._voffset / np.sin(theta_rad) + (pgm.mirror._hoffset - pgm.mirror._voffset*1/np.tan(theta_rad)) * np.cos(theta_rad)) + pgm.mirror._axis_voffset
    delta_z_2 = B_prime - D_y
    #print('correct?',-(pgm.mirror._voffset / np.sin(theta_rad) + (pgm.mirror._hoffset - pgm.mirror._voffset*1/np.tan(theta_rad)) * np.cos(theta_rad)) + pgm.mirror._axis_voffset)
    slit2_oe.CZ_SLIT = np.array([-500+delta_z_2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])#Centre of slit (z)
    B_prime_z = -1*delta_y_grating*np.sin(beta_rad)
    D_z = -((a-c*1/np.tan(theta_rad)*np.sin(theta_rad))) + h
    print(D_z)
    slit2_oe.T_SOURCE = D_z - B_prime_z
    slit2_oe.T_IMAGE = -1*slit2_oe.T_SOURCE + T_IMAGE
    print(Fore.GREEN + "Initialisation complete"+ Fore.RESET)

    s = (b + v - c*np.sin(theta_rad))/np.cos(theta_rad) - a
    delta_z_1 = (pgm.grating._length()/2)*np.cos(beta_rad) - (v - c*np.sin(theta_rad) - (s + a)*np.cos(theta_rad))
    s = (np.abs(b) + v - c*np.sin(theta_rad))/np.cos(theta_rad) - a
    
    slit1_oe.T_IMAGE =  (pgm.grating._length()/2)*-1*np.sin(beta_rad) + (h - c*np.cos(theta_rad) - (s + a)*np.sin(theta_rad))
    slit1_oe.T_SOURCE = T_SOURCE - slit1_oe.T_IMAGE - grating_oe.T_SOURCE
    
    slit1_oe.CZ_SLIT = np.array([500+delta_z_1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    
    distances = {
        'grating_oe.T_SOURCE': grating_oe.T_SOURCE,
        'grating_oe.T_IMAGE': grating_oe.T_IMAGE,
        'mirror_oe.T_SOURCE': mirror_oe.T_SOURCE,
        'mirror_oe.T_IMAGE': mirror_oe.T_IMAGE,
        'slit1_oe.T_SOURCE': slit1_oe.T_SOURCE,
        'slit1_oe.T_IMAGE': slit1_oe.T_IMAGE,
        'slit2_oe.T_SOURCE': slit2_oe.T_SOURCE,
        'slit2_oe.T_IMAGE': slit2_oe.T_IMAGE,
        'delta_z_1': delta_z_1,
        'delta_z_2': delta_z_2,
        'mirror_oe.OFFY': delta_y_mirror,
        'grating_oe.OFFY': delta_y_grating,
        'd': d,
        'b_prime': b_prime,
        'B_prime': B_prime

    }
    
    
    
    return delta_z_2, distances


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
    return np.sum([beam.getshonecol(7,nolost=1)**2,
                   beam.getshonecol(8,nolost=1)**2,
                   beam.getshonecol(9,nolost=1)**2])


def get_eff(file, order, E, cff, polarisation='s', interpolate_energy=True, return_interpolate=False):
    """
    Reads the grating efficiencies from a JSON file.
    
    Parameters
    __________
    
    file: str 
        path to JSON file containing grating efficiencies
    order: int 
        1, 2, 3, 4, or 5
    E: float 
        Energy 50 to 15000 eV
    cff: float 
        cff value from 1.2 to 3 in steps of 0.2
    polarisation: str
        's' for sigma polarisation
        'p' for pi polarisation
        'd' for diagonal polarisation
        'c' for circular polarisation
    extrapolate_energy: bool
        True to return cubic extrapolated efficiency at given E
        False to return an array of energy and efficiency as supplied by file
        
    """
    with open(file, 'r') as f:
        data = json.load(f)
    
    order_index = int(np.abs(order))-1
    cff_index_dict = {f'{x:.1f}': y for x, y in zip(np.arange(1.2,3.2, 0.2), range(0, 11))} 
    cff_index = cff_index_dict[f"{cff}"]
    energy = data['order'][order_index]['cff'][cff_index]['energy']
    eff = data['order'][order_index]['cff'][cff_index][polarisation]
    
    if interpolate_energy == True:
        energy_interpolate = CubicSpline(energy, eff)

        if return_interpolate == True:
            return energy_interpolate
        else:
            return energy_interpolate(E)

    else:
        return np.hstack(energy, eff)


def initial_read(file, polarisation='s'):
    with open(file, 'r') as f:
        data= json.load(f)
    order_len = len(data['order'])
    order_list = [order + 1 for order in range(order_len)]
    cff_dict = {i:[data['order'][i-1]['cff'][j]['cff'] for j in range(len(data['order'][i-1]['cff']))] for i in order_list}
    #energy_dict = {i:data['order'][i-1]['cff']['energy']}
    master_dict = {order+1: 
                   {cff: 
                    np.array([data['order'][order]['cff'][cff_dict[order+1].index(cff)]['energy'], 
                              data['order'][order]['cff'][cff_dict[order+1].index(cff)]['s']]) for cff in cff_dict[order+1]} for order in range(order_len)}
    return order_list, cff_dict, master_dict