cmake_minimum_required(VERSION 4.4)
project(invertir_pila)

set(CMAKE_CXX_STANDARD 20)

add_executable(invertir_pila main.cpp
        BibliotecaPila/ElementoPila.h
        BibliotecaPila/FuncionesPila.cpp
        BibliotecaPila/FuncionesPila.h
        BibliotecaPila/NodoPila.h
        BibliotecaPila/Pila.h)
