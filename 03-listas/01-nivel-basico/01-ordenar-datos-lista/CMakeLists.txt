cmake_minimum_required(VERSION 4.0)
project(01_ordenar_datos_lista)

set(CMAKE_CXX_STANDARD 20)

add_executable(01_ordenar_lista main.cpp
        BibliotecaListas/NodoLista.h
        BibliotecaListas/Lista.h
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/FuncionesLista.cpp
        BibliotecaListas/ElementoLista.h
        funciones.cpp)
