cmake_minimum_required(VERSION 4.4)
project(camino_minimo_en_laberinto)

set(CMAKE_CXX_STANDARD 20)

add_executable(camino_minimo_en_laberinto main.cpp
        BibliotecaCola/Cola.h
        BibliotecaCola/ElementoCola.h
        BibliotecaCola/FuncionesCola.cpp
        BibliotecaCola/FuncionesCola.h
        BibliotecaCola/NodoCola.h)
