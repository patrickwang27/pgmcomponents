import Shadow
import numpy as np
from pgmcomponents.elements import Plane_Mirror, Grating, PGM
from pgmcomponents.shadow.tools import config_oe, intensity
import tqdm

# write (1) or not (0) SHADOW files start.xx end.xx star.xx
iwrite = 0

#
# initialize shadow3 source (oe0) and beam
#

pgm = PGM(mirror = Plane_Mirror(), grating = Grating())

pgm.energy = 200.
pgm.grating.line_density = 400.
pgm.cff = 1.4
pgm.beam_offset = -13.
pgm.mirror.hoffset =40.
pgm.mirror.voffset = 13.
pgm.mirror.axis_voffset = 6.5
pgm.grating.order = 1
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
oe0.PH1 = 200-0.04
oe0.PH2 = 200+0.04
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
oe1.FILE_RIP = b'/home/sleepychemist/Oasys/B07_m1c_se.dat'
oe1.FMIRR = 3
oe1.FWRITE = 1
oe1.F_EXT = 1
oe1.F_G_S = 2
oe1.F_RIPPLE = 1
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
oe3.FILE_RIP = b'/home/sleepychemist/Oasys/B07_m2c_se.dat'
oe3.FWRITE = 1
oe3.F_G_S = 2
oe3.F_RIPPLE = 1
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
oe4.FILE_RIP = b'/home/sleepychemist/Oasys/B07_PG1c_se.dat'
oe4.FWRITE = 1
oe4.F_GRATING = 1
oe4.F_G_S = 2
oe4.F_RIPPLE = 1
oe4.RLEN1 = 100.0
oe4.RLEN2 = 100.0
oe4.RULING = 600.0
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
oe6.FILE_RIP = b'/home/sleepychemist/Oasys/B07_M3c_se.dat'
oe6.FMIRR = 1
oe6.FWRITE = 1
oe6.F_EXT = 1
oe6.F_G_S = 2
oe6.F_RIPPLE = 1
oe6.RLEN1 = 300.0
oe6.RLEN2 = 300.0
oe6.RMIRR = 188.48780774184928
oe6.RWIDX1 = 16.0
oe6.RWIDX2 = 16.0
oe6.T_IMAGE = 6000.0
oe6.T_INCIDENCE = 89.1
oe6.T_REFLECTION = 89.1
oe6.T_SOURCE = 0.0

oe7.DUMMY = 0.1
oe7.FWRITE = 3
oe7.F_REFRAC = 2
oe7.F_SCREEN = 1
oe7.I_SLIT = np.array([1, 0, 0, 0, 0, 0, 0, 0, 0, 0])
oe7.N_SCREEN = 1
oe7.RX_SLIT = np.array([0.02, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
oe7.RZ_SLIT = np.array([1000.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
oe7.T_IMAGE = 4000.0
oe7.T_INCIDENCE = 0.0
oe7.T_REFLECTION = 180.0
oe7.T_SOURCE = 0.0

oe8.ALPHA = 270.0
oe8.DUMMY = 0.1
oe8.FCYL = 1
oe8.FHIT_C = 1
oe8.FILE_RIP = b'/home/sleepychemist/Oasys/B07_M4c_se.dat'
oe8.FMIRR = 1
oe8.FWRITE = 1
oe8.F_DEFAULT = 0
oe8.F_G_S = 2
oe8.F_RIPPLE = 1
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
oe9.FILE_RIP = b'/home/sleepychemist/Oasys/B07_M5c_se.dat'
oe9.FMIRR = 2
oe9.FWRITE = 1
oe9.F_DEFAULT = 0
oe9.F_G_S = 2
oe9.F_RIPPLE = 1
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



#Run SHADOW to create the source

if iwrite:
    oe0.write("start.00")

beam.genSource(oe0)

if iwrite:
    oe0.write("end.00")
    beam.write("begin.dat")


#
#run optical element 1
#
print("    Running optical element: %d"%(1))
if iwrite:
    oe1.write("start.01")

beam.traceOE(oe1,1)
print(f"Intensity after M1: {intensity(beam)}")
if iwrite:
    oe1.write("end.01")
    beam.write("star.01")


#
#run optical element 2
#
print("    Running optical element: %d"%(2))
if iwrite:
    oe2.write("start.02")

beam.traceOE(oe2,2)
print(f"Intensity after slit 1: {intensity(beam)}")
if iwrite:
    oe2.write("end.02")
    beam.write("star.02")


#
#run optical element 3
#
print("    Running optical element: %d"%(3))
if iwrite:
    oe3.write("start.03")

beam.traceOE(oe3,3)
print(f"Intensity after M2: {intensity(beam)}")
if iwrite:
    oe3.write("end.03")
    beam.write("star.03")


#
#run optical element 4
#
print("    Running optical element: %d"%(4))
if iwrite:
    oe4.write("start.04")

beam.traceOE(oe4,4)
print(f"Intensity after grating: {intensity(beam)}")

if iwrite:
    oe4.write("end.04")
    beam.write("star.04")


#
#run optical element 5
#
print("    Running optical element: %d"%(5))
if iwrite:
    oe5.write("start.05")

beam.traceOE(oe5,5)
print(f"Intensity after slit 2: {intensity(beam)}")

if iwrite:
    oe5.write("end.05")
    beam.write("star.05")


#
#run optical element 6
#
print("    Running optical element: %d"%(6))
if iwrite:
    oe6.write("start.06")

beam.traceOE(oe6,6)
print(f"Intensity after M3: {intensity(beam)}")

if iwrite:
    oe6.write("end.06")
    beam.write("star.06")


#
#run optical element 7
#
print("    Running optical element: %d"%(7))
if iwrite:
    oe7.write("start.07")

beam.traceOE(oe7,7)
print(f"Intensity after slit 3: {intensity(beam)}")

if iwrite:
    oe7.write("end.07")
    beam.write("star.07")


#
#run optical element 8
#
print("    Running optical element: %d"%(8))
if iwrite:
    oe8.write("start.08")

beam.traceOE(oe8,8)
print(f"Intensity after M4: {intensity(beam)}")

if iwrite:
    oe8.write("end.08")
    beam.write("star.08")


#
#run optical element 9
#
print("    Running optical element: %d"%(9))
if iwrite:
    oe9.write("start.09")

beam.traceOE(oe9,9)
print(f"Intensity after M5: {intensity(beam)}")

if iwrite:
    oe9.write("end.09")
    beam.write("star.09")


result = Shadow.ShadowTools.histo1(beam,11, nbins=101,nolost=1, nofwhm=0)
print(result['fwhm'])
# Shadow.ShadowTools.plotxy(beam,1,4,nbins=101,nolost=1,title="Phase space X")
# Shadow.ShadowTools.plotxy(beam,3,6,nbins=101,nolost=1,title="Phase space Z")