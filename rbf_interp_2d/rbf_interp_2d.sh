#!/bin/bash
#
cp rbf_interp_2d.hpp /$HOME/include
#
g++ -c -I/$HOME/include rbf_interp_2d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling rbf_interp_2d.cpp"
  exit
fi
#
mv rbf_interp_2d.o ~/libcpp/rbf_interp_2d.o
#
echo "Library installed as ~/libcpp/rbf_interp_2d.o"
