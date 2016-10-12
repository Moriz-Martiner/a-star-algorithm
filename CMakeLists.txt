cmake_minimum_required(VERSION 3.6)
project(src)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/Display.cpp
        src/Display.h
        src/GridManager.cpp
        src/GridManager.h
        src/main.cpp
        src/RandomGridManager.cpp
        src/RandomGridManager.h
        src/RouteSolver.cpp
        src/RouteSolver.h
    )

add_executable(src ${SOURCE_FILES})