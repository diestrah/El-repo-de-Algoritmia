cmake_minimum_required(VERSION 4.0)
project(01_rotar_k_posiciones)

set(CMAKE_CXX_STANDARD 20)

add_executable(01_rotar_k_posiciones main.cpp
        BibliotecaListas/ElementoLista.h
        BibliotecaListas/FuncionesLista.cpp
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/Lista.h
        BibliotecaListas/NodoLista.h
        funciones.cpp
        funciones.h)
