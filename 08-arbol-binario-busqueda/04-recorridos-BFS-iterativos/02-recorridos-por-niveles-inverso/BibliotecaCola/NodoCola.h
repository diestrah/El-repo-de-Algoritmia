#ifndef INC_01_IMPLEMENTACION_NODOCOLA_H
#define INC_01_IMPLEMENTACION_NODOCOLA_H

#include "../BibliotecaArbolBinarioBusqueda/NodoArbolBinarioBusqueda.h"
struct NodoCola{
    struct NodoArbolBinarioBusqueda* elemento;
    struct NodoCola* siguiente;
};

#endif //INC_01_IMPLEMENTACION_NODOCOLA_H