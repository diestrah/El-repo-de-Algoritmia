cmake_minimum_required(VERSION 4.4)
project(planificacion_round_robin)

set(CMAKE_CXX_STANDARD 20)

add_executable(planificacion_round_robin main.cpp
        BibliotecaCola/Cola.h
        BibliotecaCola/ElementoCola.h
        BibliotecaCola/FuncionesCola.cpp
        BibliotecaCola/FuncionesCola.h
        BibliotecaCola/NodoCola.h)
