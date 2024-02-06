#
# Python script to run shadow3. Created automatically with ShadowTools.make_python_script_from_list().
#
import Shadow
import numpy

# write (1) or not (0) SHADOW files start.xx end.xx star.xx
iwrite = 0

#
# initialize shadow3 source (oe0) and beam
#
beam = Shadow.Beam()
oe0 = Shadow.Source()
oe1 = Shadow.OE()
oe2 = Shadow.OE()
oe3 = Shadow.OE()
oe4 = Shadow.OE()
oe5 = Shadow.OE()
oe6 = Shadow.OE()
oe7 = Shadow.OE()

#
# Define variables. See meaning of variables in: 
#  https://raw.githubusercontent.com/srio/shadow3/master/docs/source.nml 
#  https://raw.githubusercontent.com/srio/shadow3/master/docs/oe.nml
#

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
oe0.NPOINT = 100000
oe0.N_COLOR = 0
oe0.PH1 = 2399.2
oe0.PH2 = 2400.8
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
oe1.FILE_REFL = b'/home/sleepychemist/Oasys/Rh_coating.dat'
oe1.FILE_RIP = b'/home/sleepychemist/Oasys/B07_m1c_se.dat'
oe1.FMIRR = 3
oe1.FWRITE = 1
oe1.F_EXT = 1
oe1.F_G_S = 2
oe1.F_REFLEC = 1
oe1.F_RIPPLE = 1
oe1.RLEN1 = 700.0
oe1.RLEN2 = 700.0
oe1.RWIDX1 = 35.0
oe1.RWIDX2 = 35.0
oe1.R_MAJ = 755343.76
oe1.R_MIN = 504.0
oe1.T_IMAGE = 8200.0
oe1.T_INCIDENCE = 88.9
oe1.T_REFLECTION = 88.9
oe1.T_SOURCE = 13124.0

oe2.ALPHA = 270.0
oe2.DUMMY = 0.1
oe2.FHIT_C = 1
oe2.FILE_REFL = b'/home/sleepychemist/Oasys/Rh_coating.dat'
oe2.FILE_RIP = b'/home/sleepychemist/Oasys/B07_m2c_se.dat'
oe2.FWRITE = 1
oe2.F_G_S = 2
oe2.F_REFLEC = 1
oe2.F_RIPPLE = 1
oe2.RLEN1 = 225.0
oe2.RLEN2 = 225.0
oe2.RWIDX1 = 30.0
oe2.RWIDX2 = 30.0
oe2.T_IMAGE = 500.0
oe2.T_INCIDENCE = 88.76459254861233
oe2.T_REFLECTION = 88.76459254861233
oe2.T_SOURCE = 0.0

oe3.ALPHA = 180.0
oe3.DUMMY = 0.1
oe3.FHIT_C = 1
oe3.FILE_RIP = b'/home/sleepychemist/Oasys/B07_PG1c_se.dat'
oe3.FWRITE = 1
oe3.F_GRATING = 1
oe3.F_G_S = 2
oe3.F_MOVE = 1
oe3.F_RIPPLE = 1
oe3.RLEN1 = 100.0
oe3.RLEN2 = 100.0
oe3.RULING = 600.0
oe3.RWIDX1 = 11.5
oe3.RWIDX2 = 11.5
oe3.T_IMAGE = 1500.0
oe3.T_INCIDENCE = 89.17645176827041
oe3.T_REFLECTION = 88.35273332895424
oe3.T_SOURCE = 0.0

oe4.ALPHA = 90.0
oe4.CIL_ANG = 90.0
oe4.DUMMY = 0.1
oe4.FCYL = 1
oe4.FHIT_C = 1
oe4.FILE_REFL = b'/home/sleepychemist/Oasys/Rh_coating.dat'
oe4.FILE_RIP = b'/home/sleepychemist/Oasys/B07_M3c_se.dat'
oe4.FMIRR = 1
oe4.FWRITE = 1
oe4.F_EXT = 1
oe4.F_G_S = 2
oe4.F_REFLEC = 1
oe4.F_RIPPLE = 1
oe4.RLEN1 = 300.0
oe4.RLEN2 = 300.0
oe4.RMIRR = 188.48780774184928
oe4.RWIDX1 = 16.0
oe4.RWIDX2 = 16.0
oe4.T_IMAGE = 6000.0
oe4.T_INCIDENCE = 89.1
oe4.T_REFLECTION = 89.1
oe4.T_SOURCE = 0.0

oe5.DUMMY = 0.1
oe5.FWRITE = 3
oe5.F_REFRAC = 2
oe5.F_SCREEN = 1
oe5.I_SLIT = numpy.array([1, 0, 0, 0, 0, 0, 0, 0, 0, 0])
oe5.N_SCREEN = 1
oe5.RX_SLIT = numpy.array([0.02, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
oe5.RZ_SLIT = numpy.array([1000.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
oe5.T_IMAGE = 4000.0
oe5.T_INCIDENCE = 0.0
oe5.T_REFLECTION = 180.0
oe5.T_SOURCE = 0.0

oe6.ALPHA = 270.0
oe6.DUMMY = 0.1
oe6.FCYL = 1
oe6.FHIT_C = 1
oe6.FILE_REFL = b'/home/sleepychemist/Oasys/Rh_coating.dat'
oe6.FILE_RIP = b'/home/sleepychemist/Oasys/B07_M4c_se.dat'
oe6.FMIRR = 1
oe6.FWRITE = 1
oe6.F_DEFAULT = 0
oe6.F_G_S = 2
oe6.F_REFLEC = 1
oe6.F_RIPPLE = 1
oe6.RLEN1 = 300.0
oe6.RLEN2 = 300.0
oe6.RWIDX1 = 20.0
oe6.RWIDX2 = 20.0
oe6.SIMAG = 4000.0
oe6.SSOUR = 4000.0
oe6.THETA = 89.0
oe6.T_IMAGE = 2500.0
oe6.T_INCIDENCE = 89.0
oe6.T_REFLECTION = 89.0
oe6.T_SOURCE = 0.0

oe7.ALPHA = 270.0
oe7.DUMMY = 0.1
oe7.FCYL = 1
oe7.FHIT_C = 1
oe7.FILE_REFL = b'/home/sleepychemist/Oasys/Rh_coating.dat'
oe7.FILE_RIP = b'/home/sleepychemist/Oasys/B07_M5c_se.dat'
oe7.FMIRR = 2
oe7.FWRITE = 1
oe7.F_DEFAULT = 0
oe7.F_G_S = 2
oe7.F_REFLEC = 1
oe7.F_RIPPLE = 1
oe7.RLEN1 = 300.0
oe7.RLEN2 = 300.0
oe7.RWIDX1 = 20.0
oe7.RWIDX2 = 20.0
oe7.SIMAG = 1500.0
oe7.SSOUR = 6500.0
oe7.THETA = 88.9
oe7.T_IMAGE = 1500.0
oe7.T_INCIDENCE = 88.9
oe7.T_REFLECTION = 88.9
oe7.T_SOURCE = 0.0



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

if iwrite:
    oe7.write("end.07")
    beam.write("star.07")


Shadow.ShadowTools.plotxy(beam,1,3,nbins=101,nolost=1,title="Real space")
# Shadow.ShadowTools.plotxy(beam,1,4,nbins=101,nolost=1,title="Phase space X")
# Shadow.ShadowTools.plotxy(beam,3,6,nbins=101,nolost=1,title="Phase space Z")
    