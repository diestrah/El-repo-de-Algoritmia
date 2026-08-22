cmake_minimum_required(VERSION 4.0)
project(04_recorrido_por_niveles)

set(CMAKE_CXX_STANDARD 20)

add_executable(04_recorrido_por_niveles main.cpp
        Funciones.cpp
        Funciones.h
        BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.cpp
        BibliotecaCola/FuncionesCola.cpp)
