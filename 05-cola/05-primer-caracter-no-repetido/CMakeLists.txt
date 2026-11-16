cmake_minimum_required(VERSION 4.4)
project(primer_caracter_no_repetido)

set(CMAKE_CXX_STANDARD 20)

add_executable(primer_caracter_no_repetido main.cpp
        BibliotecaCola/Cola.h
        BibliotecaCola/ElementoCola.h
        BibliotecaCola/FuncionesCola.cpp
        BibliotecaCola/FuncionesCola.h
        BibliotecaCola/NodoCola.h)

add_executable(primer_caracter_no_repetido_con_cima main_cima.cpp
        BibliotecaCola/Cola.h
        BibliotecaCola/ElementoCola.h
        BibliotecaCola/FuncionesCola.cpp
        BibliotecaCola/FuncionesCola.h
        BibliotecaCola/NodoCola.h)
