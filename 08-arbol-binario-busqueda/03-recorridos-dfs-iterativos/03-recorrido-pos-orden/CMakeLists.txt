cmake_minimum_required(VERSION 4.0)
project(03_recorrido_pos_orden)

set(CMAKE_CXX_STANDARD 20)

add_executable(03_recorrido_pos_orden main.cpp
        BibliotecaArbolBinarioBusqueda/NodoArbolBinarioBusqueda.h
        BibliotecaPila/FuncionesPila.cpp
        BibliotecaPila/FuncionesPila.h
        BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.cpp
        BibliotecaArbolBinarioBusqueda/ElementoArbolBinarioBusqueda.h
        BibliotecaArbolBinarioBusqueda/ArbolBinarioBusqueda.h
        BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.h
        BibliotecaPila/Pila.h
        BibliotecaPila/NodoPila.h
        Funciones.cpp
        Funciones.h)
