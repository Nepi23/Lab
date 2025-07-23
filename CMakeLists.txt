cmake_minimum_required(VERSION 3.30)
project(Lab)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES Activity.h Activity.cpp Register.h Register.cpp)

add_executable(Lab main.cpp Activity.cpp Activity.h Register.cpp Register.h)
add_subdirectory(test)
add_library(core ${SOURCE_FILES})