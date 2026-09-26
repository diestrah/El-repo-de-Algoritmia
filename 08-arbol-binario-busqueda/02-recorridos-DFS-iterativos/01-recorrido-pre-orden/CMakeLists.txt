cmake_minimum_required(VERSION 4.0)
project(01_recorrido_pre_orden)

set(CMAKE_CXX_STANDARD 20)

add_executable(01_recorrido_pre_orden main.cpp
        Funciones.cpp
        Funciones.h
        BibliotecaPila/FuncionesPila.cpp
        BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.cpp)
