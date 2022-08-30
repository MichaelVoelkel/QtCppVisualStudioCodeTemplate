#!/bin/bash

# run from scripts/.. (root)

# QT_DIR=<your_qt_dir>

rm -rf build && mkdir build && cd build
cmake -DCMAKE_PREFIX_PATH=$QT_DIR -G"Unix Makefiles" ..
cmake --build .
cd ..
