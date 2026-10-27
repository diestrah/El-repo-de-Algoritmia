cmake_minimum_required(VERSION 4.0)
project(08_particionar_alrededor_de_un_pivote)

set(CMAKE_CXX_STANDARD 20)

add_executable(08_particionar_alrededor_de_un_pivote main.cpp
        BibliotecaListas/ElementoLista.h
        BibliotecaListas/FuncionesLista.cpp
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/Lista.h
        BibliotecaListas/NodoLista.h
        funciones.cpp
        funciones.h
)
