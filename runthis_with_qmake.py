#!/usr/bin/env python

# Script for compiling and running cpp with qmake
#
# Raul Valenzuela
# August, 2015

from os.path import expanduser
from glob import glob

import os
import platform
import sys
import string

""" define home directory """
home = expanduser("~")

""" get system information """
uname = platform.uname()
machine=platform.machine()
platform = platform.system()

""" define spec """
if platform == 'Darwin' and machine == 'x86_64':
	os.environ['QMAKESPEC'] = home + '/miniconda/mkspecs/macx-g++'
elif platform == 'Linux' and machine == 'x86_64':
	os.environ['QMAKESPEC'] = home + '/miniconda/mkspecs/linux-g++-64'
else:
	os.environ['QMAKESPEC'] = home + '/miniconda/mkspecs/linux-g++-32'



""" input cpp file and qt project"""
cpp_file = sys.argv[1]
qt_project = string.replace(cpp_file,'.cpp','.pro')

""" build """
run_qmake = 'qmake -o Makefile ' + qt_project
os.system(run_qmake)
os.system('make')

""" run """
exe = qt_project[:-4]
# foo = home + '/Documents/swp.1010123211454.TF43P3.410.19.2_AIR_v6'
# foo = '/home/raul/P3/dorade/case03/leg01/swp.1010123211754.TF43P3.480.19.2_AIR_v21'
foo=''
os.system('./' + exe + ' ' + foo)

""" remove unnecesary files """
for f in glob('*.o'):
	os.remove(f)
os.remove(exe)
os.remove('Makefile')

