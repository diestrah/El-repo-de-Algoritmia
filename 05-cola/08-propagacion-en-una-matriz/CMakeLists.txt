cmake_minimum_required(VERSION 4.4)
project(propagacion_en_una_matriz)

set(CMAKE_CXX_STANDARD 20)

add_executable(propagacion_en_una_matriz main.cpp
        BibliotecaCola/Cola.h
        BibliotecaCola/ElementoCola.h
        BibliotecaCola/FuncionesCola.cpp
        BibliotecaCola/FuncionesCola.h
        BibliotecaCola/NodoCola.h)
