#! /bin/bash

# Script to compile and execute a c program in one step.


QMAKESPEC=~/miniconda/mkspecs/linux-g++-64 # for noaa linux
export QMAKESPEC

# Get file name without the .cpp extension
file_name=$(echo $1|sed 's/\(.*\)\.cpp/\1/')

qmake -o Makefile $file_name.pro

make

./$file_name

rm *.o $file_name Makefile 

