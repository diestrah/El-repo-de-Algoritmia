cmake_minimum_required(VERSION 4.0)
project(05_mover_inicio_al_final)

set(CMAKE_CXX_STANDARD 20)

add_executable(05_mover_inicio_al_final main.cpp
        funciones.cpp
        funciones.h
        BibliotecaListas/ElementoLista.h
        BibliotecaListas/FuncionesLista.cpp
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/Lista.h
        BibliotecaListas/NodoLista.h)
