cmake_minimum_required(VERSION 4.0)
project(07_recorrido_frontera)

set(CMAKE_CXX_STANDARD 20)

add_executable(07_recorrido_frontera main.cpp
        Funciones.cpp
        Funciones.h
        BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.cpp
        BibliotecaPila/FuncionesPila.cpp)
