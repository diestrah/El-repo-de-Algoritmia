cmake_minimum_required(VERSION 4.4)
project(cola_con_prioridad)

set(CMAKE_CXX_STANDARD 20)

add_executable(cola_con_prioridad main.cpp
        BibliotecaCola/Cola.h
        BibliotecaCola/ElementoCola.h
        BibliotecaCola/FuncionesCola.cpp
        BibliotecaCola/FuncionesCola.h
        BibliotecaCola/NodoCola.h)
