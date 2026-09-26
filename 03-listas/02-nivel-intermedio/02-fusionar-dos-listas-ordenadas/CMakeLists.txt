cmake_minimum_required(VERSION 4.0)
project(02_fusionar_dos_listas_ordenadas)

set(CMAKE_CXX_STANDARD 20)

add_executable(02_fusionar_dos_listas_ordenadas main.cpp
        BibliotecaListas/ElementoLista.h
        BibliotecaListas/NodoLista.h
        BibliotecaListas/Lista.h
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/FuncionesLista.cpp
        funciones.cpp
        funciones.h
)
