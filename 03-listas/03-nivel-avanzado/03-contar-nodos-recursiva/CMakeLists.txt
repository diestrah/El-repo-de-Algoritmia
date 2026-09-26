cmake_minimum_required(VERSION 4.0)
project(03_contar_nodos_recursiva)

set(CMAKE_CXX_STANDARD 20)

add_executable(03_contar_nodos_recursiva main.cpp
        BibliotecaListas/ElementoLista.h
        BibliotecaListas/Lista.h
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/FuncionesLista.cpp
        funciones.h
        funciones.cpp)
