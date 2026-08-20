cmake_minimum_required(VERSION 4.0)
project(04_mover_ultimo_al_inicio)

set(CMAKE_CXX_STANDARD 20)

add_executable(04_mover_ultimo_al_inicio main.cpp
        BibliotecaListas/NodoLista.h
        BibliotecaListas/Lista.h
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/FuncionesLista.cpp
        BibliotecaListas/ElementoLista.h
        funciones.h
        funciones.cpp)
