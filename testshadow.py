#
# Python script to run shadow3. Created automatically with ShadowTools.make_python_script_from_list().
try:
    import Shadow
except RuntimeError:
    import Shadow
import numpy
#from pgmcomponents.shadow.tools import *
from pgmcomponents.elements import *
import numpy as np
# write (1) or not (0) SHADOW files start.xx end.xx star.xx
iwrite = 0
from time import sleep


#
# initialize shadow3 source (oe0) and beam
#

def calculate(E):
    pgm = PGM(mirror=Plane_Mirror(),grating = Grating())
    beam = Shadow.Beam()
    oe0 = Shadow.Source()

    oe0.DUMMY = 0.1

    oe0.FDISTR = 1
    oe0.FSOUR = 1
    oe0.F_PHOT = 0
    oe0.F_POLAR = 0
    oe0.HDIV1 = 0.0
    oe0.NPOINT = 5000
    oe0.HDIV2 = 0.0
    oe0.IDO_VX = 0
    oe0.IDO_VZ = 0
    oe0.IDO_X_S = 0
    oe0.IDO_Y_S = 0
    oe0.IDO_Z_S = 0
    oe0.ISTAR1 = 5676561
    oe0.PH1 = E
    oe0.VDIV1 = 0.0
    oe0.VDIV2 = 0.0
    oe0.WXSOU = 1.0
    oe0.WZSOU = 1.0
    oe0.NCOL = 1
    

    oe2 = Shadow.OE()
    oe3 = Shadow.OE()


    oe2.ALPHA = 0
    oe2.DUMMY = 0.1
    oe2.FHIT_C = 1
    oe2.FWRITE = 1
    oe2.F_G_S = 2
    oe2.F_REFLEC = 0
    oe2.F_RIPPLE = 0
    oe2.RLEN1 = 225.0
    oe2.RLEN2 = 225.0
    oe2.RWIDX1 = 30.0
    oe2.RWIDX2 = 30.0
    oe2.T_IMAGE = 500.0
    oe2.F_MOVE = 1
    oe2.T_INCIDENCE = 88.76459254861233
    oe2.T_REFLECTION = 88.76459254861233
    oe2.T_SOURCE = 0.0

    oe3.ALPHA = 180.0
    oe3.DUMMY = 0.1
    oe3.FHIT_C = 1
    oe3.FWRITE = 1
    oe3.F_GRATING = 1
    oe3.F_G_S = 2
    oe3.F_MOVE = 1
    oe3.F_RIPPLE = 0
    oe3.RLEN1 = 100.0
    oe3.RLEN2 = 100.0
    oe3.RULING = 600.0
    oe3.RWIDX1 = 11.5
    oe3.RWIDX2 = 11.5
    oe3.T_IMAGE = 1500.0
    oe3.T_INCIDENCE = 89.17645176827041
    oe3.T_REFLECTION = 88.35273332895424
    oe3.T_SOURCE = 0.0
    pgm.energy = E
    pgm.grating.line_density = 600
    pgm.grating.compute_angles()
    pgm.set_theta()
    pgm.generate_rays()
    mirror_offset, grating_offset = pgm.find_offset()
    oe2.T_INCIDENCE = pgm.theta
    oe2.T_REFLECTION = pgm.theta
    oe3.T_INCIDENCE = pgm.grating.alpha
    oe3.T_REFLECTION = np.abs(pgm.grating.beta)
    oe2.OFFY = mirror_offset
    oe3.OFFY = grating_offset
        

    beam.genSource(oe0)
    beam.traceOE(oe2,2)
    beam.traceOE(oe3,3)
    oe0 = None
    oe2 = None
    oe3 = None
    return beam.intensity(nolost=1)
#Run SHADOW to create the source

data = [[x, calculate(x)] for x in np.linspace(1, 10000, 1000)]
print(data)


#Shadow.ShadowTools.plotxy(beam,1,3,nbins=101,nolost=1,title="Real space")
# Shadow.ShadowTools.plotxy(beam,1,4,nbins=101,nolost=1,title="Phase space X")
# Shadow.ShadowTools.plotxy(beam,3,6,nbins=101,nolost=1,title="Phase space Z")
#Shadow.ShadowTools.histo1(beam, 11)