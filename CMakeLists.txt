cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_FLAGS "-std=c++11 --bind")
add_executable(Hello bind.cpp)