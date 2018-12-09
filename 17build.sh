#!/bin/bash
MYPATH=`pwd`
cd ./build
make clean

cmake .. -DCMAKE_INSTALL_PREFIX=${MYPATH}
make -j
make install
