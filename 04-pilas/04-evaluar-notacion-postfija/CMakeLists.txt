cmake_minimum_required(VERSION 4.4)
project(evaluar_notacion_postfija)

set(CMAKE_CXX_STANDARD 20)

add_executable(evaluar_notacion_postfija main.cpp
        BibliotecaPila/ElementoPila.h
        BibliotecaPila/FuncionesPila.cpp
        BibliotecaPila/FuncionesPila.h
        BibliotecaPila/NodoPila.h
        BibliotecaPila/Pila.h)
