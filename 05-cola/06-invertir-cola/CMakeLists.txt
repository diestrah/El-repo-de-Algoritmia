cmake_minimum_required(VERSION 4.4)
project(invertir_cola)

set(CMAKE_CXX_STANDARD 20)

add_executable(invertir_cola main.cpp
        BibliotecaCola/Cola.h
        BibliotecaCola/ElementoCola.h
        BibliotecaCola/FuncionesCola.cpp
        BibliotecaCola/FuncionesCola.h
        BibliotecaCola/NodoCola.h)
