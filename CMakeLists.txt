cmake_minimum_required(VERSION 3.23)
set(PROJECT minLib)
project(${PROJECT} CXX)


add_library(${PROJECT} STATIC)

target_sources(${PROJECT}
PRIVATE 
    src/minLib.cpp
INTERFACE
    src/minLib.h
)


