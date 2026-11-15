cmake_minimum_required(VERSION 4.4)
project(hanoi_con_pilas)

set(CMAKE_CXX_STANDARD 20)

add_executable(hanoi_con_pilas main.cpp
        BibliotecaPila/ElementoPila.h
        BibliotecaPila/FuncionesPila.cpp
        BibliotecaPila/FuncionesPila.h
        BibliotecaPila/NodoPila.h
        BibliotecaPila/Pila.h)
