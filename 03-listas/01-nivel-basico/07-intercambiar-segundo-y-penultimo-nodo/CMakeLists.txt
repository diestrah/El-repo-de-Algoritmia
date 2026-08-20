cmake_minimum_required(VERSION 4.0)
project(07_intercambiar_segundo_y_penultimo_nodo)

set(CMAKE_CXX_STANDARD 20)

add_executable(07_intercambiar_segundo_y_penultimo_nodo main.cpp
        BibliotecaListas/ElementoLista.h
        BibliotecaListas/FuncionesLista.cpp
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/Lista.h
        BibliotecaListas/NodoLista.h
        funciones.cpp
        funciones.h)
