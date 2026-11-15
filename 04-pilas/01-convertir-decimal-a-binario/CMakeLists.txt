cmake_minimum_required(VERSION 4.4)
project(convertir_decimal_a_binario)

set(CMAKE_CXX_STANDARD 20)

add_executable(convertir_decimal_a_binario main.cpp
        BibliotecaPila/ElementoPila.h
        BibliotecaPila/FuncionesPila.cpp
        BibliotecaPila/FuncionesPila.h
        BibliotecaPila/NodoPila.h
        BibliotecaPila/Pila.h)
