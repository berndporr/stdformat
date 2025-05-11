cmake_minimum_required(VERSION 3.16)
project(stdprint LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add_compile_options(-fexperimental-library)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++ -std=c++20")

add_executable(demo demo.cpp)
