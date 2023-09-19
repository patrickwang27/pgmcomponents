"""
A CLI Tool for simple raytracing for the PGM component.

author: Patrick Wang
email: patrick.wang@diamond.ac.uk
date: 12/09/2023

To run, invoke:
python3 pgm_cli.py -c config.ini
"""

import argparse
import numpy
import configparser
import os
import matplotlib.pyplot as plt
#from optics.components.pgm import PGM
#from optics.geometry import Point3D, Ray3D
#import matplotlib.patches as patches

def main():
    # Initialise parser
    parser = argparse.ArgumentParser(description='PGM Raytracing CLI Tool')
    parser.add_argument('-c', '--config', type=str, help='Config file')
    args = parser.parse_args()

    # Read config file
    config = configparser.ConfigParser()
    config.read(args.config)

    # Check if config file is valid
    if not config.has_section('PGM_GEOMETRY'):
        print('Invalid config file!')
        return
    
    if len(config_sections) != 5:
        print('Config file is missing sections/have too many sections!')
        return
    
    # Get config values
    pgm = PGM()

    config_sections = config.sections()


    
    pgm = PGM()
    pgm.mirror_voffset = float(config['MIRROR']['vertical_offset'])
    pgm.mirror_hoffset = float(config['MIRROR']['horizontal_offset'])
    pgm.mirror_length = float(config['MIRROR']['length'])
    pgm.mirror_width = float(config['MIRROR']['width'])
    pgm.mirror_height = float(config['MIRROR']['height'])

    pgm.grating_height = float(config['GRATING']['height'])
    pgm.grating_width = float(config['GRATING']['width'])
    pgm.grating_length = float(config['GRATING']['length'])

    beam_offset = float(config['BEAM']['offset'])

    #rays = [Ray3D(Point3D(0,beam_offset,-1000), Point3D(0,beam_offset,0) - Point3D(0,beam_offset,-1000))]
    
    generate_rays(config, pgm)

def generate_rays(ray_config, pgm):
    """
    Generate a list of rays based on given config.

    :param ray_config: ConfigParser object containing ray config
    """

    beam_width = float(ray_config['BEAM']['width'])
    beam_height = float(ray_config['BEAM']['height'])
    beam_offset = float(ray_config['BEAM']['offset'])
    r0 = Ray3D(
        Point3D(0, beam_offset, -1000),
        Point3D(0, beam_offset, 0) - Point3D(0, beam_offset, -1000)
    )
    r1 = Ray3D(
        Point3D(0, beam_offset + beam_height/2, -1000),
        Point3D(0, beam_offset + beam_height/2, 0) - Point3D(0, beam_offset + beam_height/2, -1000)
    )

    r2 = Ray3D(
        Point3D(0, beam_offset - beam_height/2, -1000),
        Point3D(0, beam_offset - beam_height/2, 0) - Point3D(0, beam_offset - beam_height/2, -1000)
    )

    r3 = Ray3D(
        Point3D(-beam_width/2, beam_offset, -1000),
        Point3D(-beam_width/2, beam_offset, 0) - Point3D(-beam_width/2, beam_offset, -1000)
    )

    r4 = Ray3D(
        Point3D(beam_width/2, beam_offset, -1000),
        Point3D(beam_width/2, beam_offset, 0) - Point3D(beam_width/2, beam_offset, -1000)
    )

    rays = [r0, r1, r2, r3, r4]

    rays_updated = []
    energy = float(ray_config['BEAM']['energy'])
    for ray in rays:
        r, _, _ = pgm.propagate_ray(ray)
        rays_updated.append({
            'label': 'ray',
            'points': r,
            'energy': energy})
    return rays_updated

def ray_trace(pgm, rays):
    """
    Trace a list of rays through the PGM.

    :param pgm: PGM object
    :param rays: List of rays
    """

    # Propagate rays through PGM
    rays_updated = []
    for ray in rays:
        r, _, _ = pgm.propagate_ray(ray)
        rays_updated.append({
            'label': 'ray',
            'points': r,
            'energy': ray.energy})
    return rays_updated


if __name__ == '__main__':
    raise NotImplementedError('This script is not ready yet!')