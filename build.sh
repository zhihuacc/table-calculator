#!/bin/sh

cmake -DLLVM_CMAKE_PATH=/opt/llvm/lib/cmake/llvm/ -S . -B build
cmake --build build