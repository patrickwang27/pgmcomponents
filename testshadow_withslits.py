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

#
# Define variables. See meaning of variables in: 
#  https://raw.githubusercontent.com/srio/shadow3/master/docs/source.nml 
#  https://raw.githubusercontent.com/srio/shadow3/master/docs/oe.nml
#

oe0.FDISTR = 3
oe0.F_COLOR = 3
oe0.F_PHOT = 0
oe0.HDIV1 = 0.0
oe0.HDIV2 = 0.0
oe0.ISTAR1 = 5676561
oe0.PH1 = 14250.0
oe0.PH2 = 15750.0
oe0.SIGDIX = 3.2921339805169593e-06
oe0.SIGDIZ = 3.2921339805169593e-06
oe0.SIGMAX = 0.003965941795507044
oe0.SIGMAZ = 0.003965941795507044
oe0.VDIV1 = 0.0
oe0.VDIV2 = 0.0

oe1.DUMMY = 0.1
oe1.FWRITE = 1

oe2.DUMMY = 0.1
oe2.FWRITE = 1
oe2.F_GRATING = 1
oe2.T_SOURCE = 10000.0

oe3.DUMMY = 0.1
oe3.FSTAT = 1
oe3.FWRITE = 3
oe3.F_REFRAC = 2
oe3.F_SCREEN = 1
oe3.N_SCREEN = 1
oe3.OFF_SOUX = 10.0
oe3.OFF_SOUY = 10.0
oe3.OFF_SOUZ = 10.0
oe3.T_INCIDENCE = 0.0
oe3.T_REFLECTION = 180.0
oe3.X_SOUR = 20.0
oe3.Y_SOUR = 20.0
oe3.Z_SOUR = 20.0



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


Shadow.ShadowTools.plotxy(beam,1,3,nbins=101,nolost=1,title="Real space")
# Shadow.ShadowTools.plotxy(beam,1,4,nbins=101,nolost=1,title="Phase space X")
# Shadow.ShadowTools.plotxy(beam,3,6,nbins=101,nolost=1,title="Phase space Z")
    