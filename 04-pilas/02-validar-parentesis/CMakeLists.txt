cmake_minimum_required(VERSION 4.4)
project(validar_parentesis)

set(CMAKE_CXX_STANDARD 20)

add_executable(validar_parentesis main.cpp
        BibliotecaPila/ElementoPila.h
        BibliotecaPila/FuncionesPila.cpp
        BibliotecaPila/FuncionesPila.h
        BibliotecaPila/NodoPila.h
        BibliotecaPila/Pila.h)
