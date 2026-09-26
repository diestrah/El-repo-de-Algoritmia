cmake_minimum_required(VERSION 4.0)
project(01_particionar_pares_e_impares)

set(CMAKE_CXX_STANDARD 20)

add_executable(01_particionar_pares_e_impares main.cpp
        BibliotecaListas/NodoLista.h
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/FuncionesLista.cpp
        BibliotecaListas/Lista.h
        BibliotecaListas/ElementoLista.h
        funciones.cpp
        funciones.h)
