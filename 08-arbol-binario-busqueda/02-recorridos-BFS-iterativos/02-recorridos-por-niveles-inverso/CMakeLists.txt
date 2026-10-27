cmake_minimum_required(VERSION 4.0)
project(05_recorridos_por_niveles_inverso)

set(CMAKE_CXX_STANDARD 20)

add_executable(05_recorridos_por_niveles_inverso main.cpp
        Funciones.cpp
        Funciones.h
        BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.cpp
        BibliotecaCola/NodoCola.h
        BibliotecaCola/FuncionesCola.h
        BibliotecaCola/FuncionesCola.cpp
        BibliotecaCola/Cola.h
        BibliotecaPila/FuncionesPila.cpp
        BibliotecaPila/Pila.h
        BibliotecaPila/NodoPila.h
        BibliotecaPila/FuncionesPila.h)
