cmake_minimum_required(VERSION 4.0)
project(03_insertar_antes)

set(CMAKE_CXX_STANDARD 20)

add_executable(03_insertar_antes main.cpp
        BibliotecaListas/NodoLista.h
        BibliotecaListas/Lista.h
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/FuncionesLista.cpp
        BibliotecaListas/ElementoLista.h
        funciones.h
        funciones.cpp)
