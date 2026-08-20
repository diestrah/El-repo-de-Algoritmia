cmake_minimum_required(VERSION 4.0)
project(01_imprimir_lista_recursiva)

set(CMAKE_CXX_STANDARD 20)

add_executable(01_imprimir_lista_recursiva main.cpp
        BibliotecaListas/ElementoLista.h
        BibliotecaListas/FuncionesLista.cpp
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/Lista.h
        BibliotecaListas/NodoLista.h
        funciones.cpp
        funciones.h)
