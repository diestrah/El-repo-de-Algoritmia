cmake_minimum_required(VERSION 4.0)
project(RecorridoDiagonalSkynerd)

set(CMAKE_CXX_STANDARD 20)

add_executable(RecorridoDiagonalSkynerd main.cpp
        BibliotecaArbolBinarioBusqueda/NodoArbolBinarioBusqueda.h
        BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.h
        BibliotecaArbolBinarioBusqueda/ArbolBinarioBusqueda.h
        BibliotecaArbolBinarioBusqueda/ElementoArbolBinarioBusqueda.h
        BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.cpp
        BibliotecaCola/FuncionesCola.cpp
        BibliotecaPila/Pila.h
        BibliotecaPila/FuncionesPila.h
        BibliotecaPila/NodoPila.h
        BibliotecaPila/FuncionesPila.cpp
        Bibliotecas/FuncionesAuxiliares.cpp
        Bibliotecas/FuncionesAuxiliares.h)
