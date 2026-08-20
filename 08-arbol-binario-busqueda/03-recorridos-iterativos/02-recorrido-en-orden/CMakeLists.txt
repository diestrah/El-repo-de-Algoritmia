cmake_minimum_required(VERSION 4.0)
project(02_recorrido_en_orden)

set(CMAKE_CXX_STANDARD 20)

add_executable(02_recorrido_en_orden main.cpp
        BibliotecaPila/Pila.h
        BibliotecaPila/NodoPila.h
        BibliotecaPila/FuncionesPila.h
        BibliotecaPila/FuncionesPila.cpp
        BibliotecaArbolBinarioBusqueda/NodoArbolBinarioBusqueda.h
        BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.h
        BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.cpp
        BibliotecaArbolBinarioBusqueda/ElementoArbolBinarioBusqueda.h
        BibliotecaArbolBinarioBusqueda/ArbolBinarioBusqueda.h
        Funciones.cpp
        Funciones.h
)
