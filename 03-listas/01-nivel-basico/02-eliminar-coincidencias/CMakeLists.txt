cmake_minimum_required(VERSION 4.0)
project(02_eliminar_coincidencias)

set(CMAKE_CXX_STANDARD 20)

add_executable(02_eliminar_primera_coincidencia main.cpp
        BibliotecaListas/NodoLista.h
        BibliotecaListas/Lista.h
        BibliotecaListas/FuncionesLista.h
        BibliotecaListas/FuncionesLista.cpp
        BibliotecaListas/ElementoLista.h
        funciones.cpp)
