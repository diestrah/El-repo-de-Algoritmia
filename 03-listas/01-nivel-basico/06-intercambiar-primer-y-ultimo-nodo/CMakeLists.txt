cmake_minimum_required(VERSION 4.0)
project(06_intercambiar_primer_y_ultimo_nodo)

set(CMAKE_CXX_STANDARD 20)

add_executable(06_intercambiar_primer_y_ultimo_nodo main.cpp
        BibliotecaListas/ElementoLista.h
        BibliotecaListas/FuncionesLista.cpp
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/Lista.h
        BibliotecaListas/NodoLista.h
        funciones.cpp
        funciones.h)
