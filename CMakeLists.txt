cmake_minimum_required(VERSION 3.21)
project(Square)

set(CMAKE_CXX_STANDARD 14)

add_executable(Square main.cpp Patrat.cpp Patrat.h tests.h tests.cpp meniu.cpp meniu.h consola.cpp consola.h
        )
