cmake_minimum_required(VERSION 3.30)
project(Lab)

set(CMAKE_CXX_STANDARD 11)

add_executable(Lab main.cpp
        Activity.cpp
        Activity.h
        Register.cpp
        Register.h)
