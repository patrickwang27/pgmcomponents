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

#
# Define variables. See meaning of variables in: 
#  https://raw.githubusercontent.com/srio/shadow3/master/docs/source.nml 
#  https://raw.githubusercontent.com/srio/shadow3/master/docs/oe.nml
#

oe0.FDISTR = 1
oe0.FSOUR = 1
oe0.F_PHOT = 0
oe0.IDO_VX = 0
oe0.IDO_VZ = 0
oe0.IDO_X_S = 0
oe0.IDO_Y_S = 0
oe0.IDO_Z_S = 0
oe0.ISTAR1 = 5676561
oe0.PH1 = 2000.0
oe0.WXSOU = 6
oe0.WZSOU = 8
oe1.ALPHA=0
oe1.CZ_SLIT = numpy.array([0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
oe1.DUMMY = 0.1
oe1.FWRITE = 3
oe1.F_REFRAC = 2
oe1.F_SCREEN = 1
oe1.I_SLIT = numpy.array([1, 0, 0, 0, 0, 0, 0, 0, 0, 0])
oe1.N_SCREEN = 1
oe1.RX_SLIT = numpy.array([10, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
oe1.RZ_SLIT = numpy.array([10, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
oe1.T_INCIDENCE = 0.0
oe1.T_REFLECTION = 180.0



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


Shadow.ShadowTools.plotxy(beam,1,3,nbins=101,nolost=1,title="Real space")
# Shadow.ShadowTools.plotxy(beam,1,4,nbins=101,nolost=1,title="Phase space X")
# Shadow.ShadowTools.plotxy(beam,3,6,nbins=101,nolost=1,title="Phase space Z")