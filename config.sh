#!bin/bash
rm -rf build/*
cd build
cmake .. -G "MinGW Makefiles"
make
ctest
cd ../
#cd build && ctest