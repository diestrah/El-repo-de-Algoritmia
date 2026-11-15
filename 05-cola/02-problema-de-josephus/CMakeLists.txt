cmake_minimum_required(VERSION 4.4)
project(problema_de_josephus)

set(CMAKE_CXX_STANDARD 20)

add_executable(problema_de_josephus main.cpp
        BibliotecaCola/Cola.h
        BibliotecaCola/ElementoCola.h
        BibliotecaCola/FuncionesCola.cpp
        BibliotecaCola/FuncionesCola.h
        BibliotecaCola/NodoCola.h)
