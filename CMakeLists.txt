cmake_minimum_required(VERSION 3.30)
project(Lab)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES Activity.h Activity.cpp Register.h Register.cpp)

add_subdirectory(wxWidgets/wxWidgets)

add_executable(Lab main.cpp Activity.cpp Activity.h Register.cpp Register.h)
add_subdirectory(test)
add_library(core ${SOURCE_FILES})

target_link_libraries(Lab wx::net wx::core wx::base)

