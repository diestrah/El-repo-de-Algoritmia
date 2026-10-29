cmake_minimum_required(VERSION 4.0)
project(recorrido_por_niveles_zig_zag)

set(CMAKE_CXX_STANDARD 20)

add_executable(recorrido_por_niveles_zig_zag main.cpp
        Funciones.cpp
        Funciones.h
        BibliotecaPila/FuncionesPila.cpp
        BibliotecaCola/FuncionesCola.cpp
        BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.cpp
)
