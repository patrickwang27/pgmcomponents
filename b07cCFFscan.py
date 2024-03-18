import Shadow
import numpy as np
import sys
from pgmcomponents.elements import Plane_Mirror, Grating, PGM
from pgmcomponents.shadow.tools import config_oe, intensity, get_eff
import tqdm
import csv
import matplotlib.pyplot as plt
from multiprocessing import Pool, set_start_method

from datetime import datetime
import scipy.interpolate as ip
from colorama import Fore
import contextlib
import os
import configparser
import time
import json

set_start_method("spawn", force=True)



def trace(list_oe, beam):
    iwrite = 0
    num_oe = len(list_oe)
    int_dict = {}
    height_dict = {}
    ray_dict = {}
    for i in range(num_oe):
        oe = list_oe[i]
        print(f"Running optical element: {i+1}")
        if iwrite:
            oe.write(f"start.{i:02d}")
        
        
        
        # Redirect stdout and stderr to the file
        beam.traceOE(oe, i+1)
        num_of_rays= len(beam.getshonecol(23, nolost=1))
        intensity_val = beam.getshonecol(23, nolost=1).sum()
        int_dict[f"OE{i+1}"] = intensity_val
        if num_of_rays < 500:
            height_dict[f'OE{i+1}'] = 0
            ray_dict[f"OE{i+1}"] = 0
        else:
            height_dict[f'OE{i+1}'] = beam.histo1(3, nbins=50, nolost=1)['fwhm']
            ray_dict[f"OE{i+1}"] = num_of_rays
        print(f"Intensity after OE{i+1}: {intensity_val}")

        if i == 8:
            
            if num_of_rays < 500:
                print("Number of rays too low, skipping")
                return 0, 0, int_dict, height_dict, 0
            else:
                result = Shadow.ShadowTools.histo1(beam, 11, nbins=50, nolost=1)
                if result['fwhm'] == 0 or result['fwhm'] == None:
                    print("FWHM too low, skipping")
                    return 0, 0, int_dict, height_dict, 0
                
                return result['fwhm'], intensity_val, int_dict, height_dict, ray_dict

# write (1) or not (0) SHADOW files start.xx end.xx star.xx
def set_up(E, delta_E, cff, order):
    iwrite = 0

    #
    # initialize shadow3 source (oe0) and beam
    #

    pgm = PGM(mirror = Plane_Mirror(), grating = Grating())

    pgm.energy = float(E)
    pgm.grating.line_density = 400.
    pgm.cff = float(cff)
    pgm.beam_offset = -13.
    pgm.mirror.hoffset =40.
    pgm.mirror.voffset = 13.
    pgm.mirror.axis_voffset = 6.5
    pgm.grating.order = int(order)
    pgm.grating.dimensions = [200, 23, 50]

    pgm.grating.compute_angles()
    pgm.set_theta()
    pgm.generate_rays()
    _ = pgm.grating.compute_corners()
    _ = pgm.mirror.compute_corners()



    beam = Shadow.Beam()
    oe0 = Shadow.Source()
    oe1 = Shadow.OE() # Toroidal M1
    oe2 = Shadow.OE() # Slit 1
    oe3 = Shadow.OE() # Plane M2
    oe4 = Shadow.OE() # Grating
    oe5 = Shadow.OE() # Slit 2
    oe6 = Shadow.OE() # Spherical M3
    oe7 = Shadow.OE() # Slit 3
    oe8 = Shadow.OE() # Spherical M4
    oe9 = Shadow.OE() # Ellipsoidal M5



    #
    # Define variables. See meaning of variables in: 
    #  https://raw.githubusercontent.com/srio/shadow3/master/docs/source.nml 
    #  https://raw.githubusercontent.com/srio/shadow3/master/docs/oe.nml
    #

    ##Bending Magnet Source Configuration

    oe0.BENER = 3.0
    oe0.EPSI_X = 2.7e-06
    oe0.EPSI_Z = 8.2e-09
    oe0.FDISTR = 4
    oe0.FSOURCE_DEPTH = 4
    oe0.F_COLOR = 3
    oe0.F_PHOT = 0
    oe0.HDIV1 = 0.001
    oe0.HDIV2 = 0.001
    oe0.ISTAR1 = 1
    oe0.NCOL = 0
    oe0.N_COLOR = 0
    oe0.NPOINT = 50000
    oe0.PH1 = E - delta_E
    oe0.PH2 = E + delta_E
    oe0.POL_DEG = 0.0
    oe0.R_ALADDIN = 7147.8020399604
    oe0.R_MAGNET = 7.147802039960401
    oe0.SIGDIX = 0.0
    oe0.SIGDIZ = 0.0
    oe0.SIGMAX = 0.0545
    oe0.SIGMAY = 0.0
    oe0.SIGMAZ = 0.0154
    oe0.VDIV1 = 0.00025
    oe0.VDIV2 = 0.00025
    oe0.WXSOU = 0.0
    oe0.WYSOU = 0.0
    oe0.WZSOU = 0.0

    oe1.ALPHA = 90.0
    oe1.DUMMY = 0.1
    oe1.FHIT_C = 1
    oe1.FILE_RIP = b'./b07c_raytracing/B07_m1c_se.dat'
    oe1.FILE_REFL = b'./b07c_raytracing/Rhodium_coating.dat'
    oe1.FMIRR = 3
    oe1.FWRITE = 1
    oe1.F_EXT = 1
    oe1.F_G_S = 2
    oe1.F_RIPPLE = 1
    oe1.F_REFLEC = 1
    oe1.RLEN1 = 700.0
    oe1.RLEN2 = 700.0
    oe1.RWIDX1 = 35.0
    oe1.RWIDX2 = 35.0
    oe1.R_MAJ = 755343.76
    oe1.R_MIN = 504.0
    oe1.T_IMAGE = 10200.0
    oe1.T_INCIDENCE = 88.9
    oe1.T_REFLECTION = 88.9
    oe1.T_SOURCE = 13124.0

    oe2.ALPHA = 270
    oe2.DUMMY = 0.1
    oe2.FWRITE = 3
    oe2.F_REFRAC = 2
    oe2.F_SCREEN = 1
    oe2.I_SLIT = np.array([1, 0, 0, 0, 0, 0, 0, 0, 0, 0])
    oe2.N_SCREEN = 1
    oe2.RX_SLIT = np.array([1000.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    oe2.RZ_SLIT = np.array([1000.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    oe2.T_IMAGE = 0.0
    oe2.T_INCIDENCE = 0.0
    oe2.T_REFLECTION = 180.0
    oe2.T_SOURCE = 0.0

    oe3.ALPHA = 0
    oe3.DUMMY = 0.1
    oe3.FHIT_C = 1
    oe3.FILE_RIP = b'./b07c_raytracing/B07_m2c_se.dat'
    oe3.FILE_REFL = b'./b07c_raytracing/Platinum_coating.dat'
    oe3.FWRITE = 1
    oe3.F_G_S = 2
    oe3.F_RIPPLE = 1
    oe3.F_REFLEC = 1
    oe3.RLEN1 = 225.0
    oe3.RLEN2 = 225.0
    oe3.RWIDX1 = 30.0
    oe3.RWIDX2 = 30.0
    oe3.T_IMAGE = 0.0
    oe3.T_INCIDENCE = 88.76459254861233
    oe3.T_REFLECTION = 88.76459254861233
    oe3.T_SOURCE = 0.0

    oe4.ALPHA = 180.0
    oe4.DUMMY = 0.1
    oe4.FHIT_C = 1
    oe4.FILE_RIP = b'./b07c_raytracing/B07_PG1c_se.dat'
    oe4.FWRITE = 1
    oe4.F_GRATING = 1
    oe4.F_G_S = 2
    oe4.F_RIPPLE = 1
    oe4.RLEN1 = 100.0
    oe4.RLEN2 = 100.0
    oe4.RULING = 400.0
    oe4.RWIDX1 = 11.5
    oe4.RWIDX2 = 11.5
    oe4.T_IMAGE = 0.0
    oe4.T_INCIDENCE = 89.17645176827041
    oe4.T_REFLECTION = 88.35273332895424
    oe4.T_SOURCE = 0.0


    oe5.ALPHA = 0
    oe5.DUMMY = 0.1
    oe5.FWRITE = 3
    oe5.F_REFRAC = 2
    oe5.F_SCREEN = 1
    oe5.I_SLIT = np.array([1, 0, 0, 0, 0, 0, 0, 0, 0, 0])
    oe5.N_SCREEN = 1
    oe5.RX_SLIT = np.array([1000.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    oe5.RZ_SLIT = np.array([1000.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    oe5.T_IMAGE = 0.0
    oe5.T_INCIDENCE = 0.0
    oe5.T_REFLECTION = 180.0
    oe5.T_SOURCE = 0.0


    config_oe(pgm, oe4, oe3, oe2, oe5)


    oe6.ALPHA = 90.0
    oe6.CIL_ANG = 90.0
    oe6.DUMMY = 0.1
    oe6.FCYL = 1
    oe6.FHIT_C = 1
    oe6.FILE_REFL = b'./b07c_raytracing/Rhodium_coating.dat'
    oe6.FILE_RIP = b'./b07c_raytracing/B07_M3c_se.dat'
    oe6.FMIRR = 1
    oe6.FWRITE = 1
    oe6.F_EXT = 1
    oe6.F_G_S = 2
    oe6.F_RIPPLE = 1
    oe6.F_REFLEC = 1
    oe6.RLEN1 = 300.0
    oe6.RLEN2 = 300.0
    oe6.RMIRR = 209.42887724740214
    oe6.RWIDX1 = 16.0
    oe6.RWIDX2 = 16.0
    oe6.T_IMAGE = 6000.0
    oe6.T_INCIDENCE = 89.0
    oe6.T_REFLECTION = 89.0
    oe6.T_SOURCE = 0.0

    oe7.DUMMY = 0.1
    oe7.FWRITE = 3
    oe7.F_REFRAC = 2
    oe7.F_SCREEN = 1
    oe7.I_SLIT = np.array([1, 0, 0, 0, 0, 0, 0, 0, 0, 0])
    oe7.N_SCREEN = 1
    oe7.RX_SLIT = np.array([0.1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    oe7.RZ_SLIT = np.array([0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    oe7.T_IMAGE = 4000.0
    oe7.T_INCIDENCE = 0.0
    oe7.T_REFLECTION = 180.0
    oe7.T_SOURCE = 0.0

    oe8.ALPHA = 270.0
    oe8.DUMMY = 0.1
    oe8.FCYL = 1
    oe8.FHIT_C = 1
    oe8.FILE_RIP = b'./b07c_raytracing/B07_M4c_se.dat'
    oe8.FILE_REFL = b'./b07c_raytracing/Rhodium_coating.dat'
    oe8.FMIRR = 1
    oe8.FWRITE = 1
    oe8.F_DEFAULT = 0
    oe8.F_G_S = 2
    oe8.F_RIPPLE = 1
    oe8.F_REFLEC = 1
    oe8.RLEN1 = 300.0
    oe8.RLEN2 = 300.0
    oe8.RWIDX1 = 20.0
    oe8.RWIDX2 = 20.0
    oe8.SIMAG = 4000.0
    oe8.SSOUR = 4000.0
    oe8.THETA = 89.0
    oe8.T_IMAGE = 2500.0
    oe8.T_INCIDENCE = 89.0
    oe8.T_REFLECTION = 89.0
    oe8.T_SOURCE = 0.0

    oe9.ALPHA = 270.0
    oe9.DUMMY = 0.1
    oe9.FCYL = 1
    oe9.FHIT_C = 1
    oe9.FILE_RIP = b'./b07c_raytracing/B07_M5c_se.dat'
    oe9.FILE_REFL = b'./b07c_raytracing/Rhodium_coating.dat'
    oe9.FMIRR = 2
    oe9.FWRITE = 1
    oe9.F_DEFAULT = 0
    oe9.F_G_S = 2
    oe9.F_RIPPLE = 1
    oe9.F_REFLEC = 1
    oe9.RLEN1 = 300.0
    oe9.RLEN2 = 300.0
    oe9.RWIDX1 = 20.0
    oe9.RWIDX2 = 20.0
    oe9.SIMAG = 1500.0
    oe9.SSOUR = 6500.0
    oe9.THETA = 88.9
    oe9.T_IMAGE = 1500.0
    oe9.T_INCIDENCE = 88.9
    oe9.T_REFLECTION = 88.9
    oe9.T_SOURCE = 0.0

    list_oe = [oe1, oe2, oe3, oe4, oe5, oe6, oe7, oe8, oe9]
    beam.genSource(oe0)    
    return list_oe, beam

def optimize(E, delta_E, cff, order):
    list_oe, beam = set_up(E, delta_E, cff, order)
    fwhm = trace(list_oe, beam)[0]
    if type(fwhm) == None:
        return 0
    delta_E_prime = fwhm*2
    while np.abs(delta_E_prime - delta_E)/delta_E > 0.30:
        delta_E = delta_E_prime
        list_oe, beam = set_up(E, delta_E, cff, order)
        fwhm = trace(list_oe, beam)[0]

        delta_E_prime = fwhm*2
        plt.close()
    return 2*fwhm


def simulate(args):
    E, cff, order, grating_eff, flux = args
    #print(f"{E}, {cff}, {order}, {grating_eff}, {flux}")
    delta_E = optimize(E, 0.1, cff, order)
    list_oe, beam = set_up(E, delta_E, cff, order)
    fwhm, intensity, intensity_dict, height_dict, ray_dict = trace(list_oe, beam)
    bandwidth = delta_E / E
    flux_calc = bandwidth/0.001 * flux * grating_eff * intensity/50000
    
    return E, fwhm, bandwidth, flux_calc, intensity, intensity_dict, height_dict, ray_dict



def main():

    flux_E, flux = np.loadtxt("./b07c_raytracing/B07_flux_2mradH_0p5mradV_E50eVto15000eV_12Mar2024.dat", unpack=True, skiprows=1)
    interpolated_flux = ip.CubicSpline(flux_E, flux)

    for cff in np.arange(1.2, 1.6, 0.2):
        for order in range(1, 3):
            interpolated_eff = get_eff("./b07c_raytracing/B07cN4_grateffs/B07grating15Mar24.json", order, None, cff, return_interpolate=True)

            args = [(E, cff, order, interpolated_eff(E), interpolated_flux(E)) for E in np.arange(300, order*3000, 10)]
            
            outfile = f"./b07c_raytracing/cff_scan/cff_{cff}_order_{order}.csv"

            with Pool(24) as p:
                results = list(tqdm.tqdm(p.imap(simulate, args), total=len(args)))
            
            with open(outfile, "w") as f:
                writer = csv.writer(f)
                writer.writerow([f"cff = {cff}, order = {order}, {datetime.now()}"])
                writer.writerow(["E", "FWHM", "Bandwidth", "Flux", "Intensity", "Intensity_dict", "Height_dict", "Ray Dict"])
                writer.writerows(results)
            print(Fore.GREEN + f"File {outfile} written")
    #result = simulate((5851, 1.4, 3, interpolated_grating_eff(5851), interpolated_flux(5851)))
    #print(result)

if __name__ == "__main__": 
    main()

        
        

