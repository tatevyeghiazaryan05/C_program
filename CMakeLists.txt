cmake_minimum_required(VERSION 4.0)
project(homework1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(homework1
        Homeworks/array.h
        Homeworks/array1.cpp)
add_executable(test Homeworks/test.cpp)