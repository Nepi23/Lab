cmake_minimum_required(VERSION 3.9)

project(test)


add_subdirectory(lib/googletest)
include_directories(${gtest_SOURCE_DIR}include ${gtest_SOURCE_DIR})


add_executable(Tests_run runAllTests.cpp ActivityTest.cpp RegisterTest.cpp)
target_link_libraries(Tests_run gtest gtest_main core)
