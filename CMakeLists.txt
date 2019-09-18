cmake_minimum_required(VERSION 3.13)
project(shuhan)

set(CMAKE_CXX_STANDARD 14)

add_executable(shuhan main.cpp src/str/StringKits.cpp src/str/StringKits.h)