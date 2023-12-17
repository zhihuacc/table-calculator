project(table-calculator)

cmake_minimum_required(VERSION 3.22)

# define some llvm cmake variables e.g. LLVM_CMAKE_DIR, LLVM_INCLUDE_DIRS
find_package(LLVM REQUIRED CONFIG)
# import llvm cmake directives e.g. add_llvm_executable
include(AddLLVM)

message("LLVM_DIR=${LLVM_DIR}")
message("LLVM_CMAKE_PATH=${LLVM_CMAKE_PATH}")
message("LLVM_CMAKE_DIR=${LLVM_CMAKE_DIR}")
message("CMAKE_MODULE_PATH=${CMAKE_MODULE_PATH}")

message("LLVM_INCLUDE_DIRS=${LLVM_INCLUDE_DIRS}")
message("LLVM_LIBRARY_DIRS=${LLVM_LIBRARY_DIRS}")

message("LLVM_INCLUDE_DIR=${LLVM_INCLUDE_DIR}")
message("LLVM_LIBRARY_DIR=${LLVM_LIBRARY_DIR}")

message("LLVM_COMMON_LIBS=${LLVM_COMMON_LIBS}")

include_directories(${LLVM_INCLUDE_DIRS})
link_directories(${LLVM_LIBRARY_DIRS})

set(LLVM_LINK_COMPONENTS Support Core)

add_llvm_executable(table_calculator main.cpp)

