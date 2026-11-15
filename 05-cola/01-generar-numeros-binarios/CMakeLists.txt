cmake_minimum_required(VERSION 4.4)
project(generar_numeros_binarios)

set(CMAKE_CXX_STANDARD 20)

add_executable(generar_numeros_binarios main.cpp
        BibliotecaCola/Cola.h
        BibliotecaCola/ElementoCola.h
        BibliotecaCola/FuncionesCola.cpp
        BibliotecaCola/FuncionesCola.h
        BibliotecaCola/NodoCola.h)
