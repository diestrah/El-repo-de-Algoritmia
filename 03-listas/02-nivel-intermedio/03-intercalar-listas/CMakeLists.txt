cmake_minimum_required(VERSION 4.0)
project(03_intercalar_listas)

set(CMAKE_CXX_STANDARD 20)

add_executable(03_intercalar_listas main.cpp
        BibliotecaListas/ElementoLista.h
        BibliotecaListas/FuncionesLista.cpp
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/Lista.h
        BibliotecaListas/NodoLista.h
        funciones.cpp
        funciones.h)
