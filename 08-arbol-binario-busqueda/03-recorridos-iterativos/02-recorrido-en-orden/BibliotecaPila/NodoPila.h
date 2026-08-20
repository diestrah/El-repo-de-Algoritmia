#ifndef INC_01_IMPLEMENTACION_NODOPILA_H
#define INC_01_IMPLEMENTACION_NODOPILA_H

#include "../BibliotecaArbolBinarioBusqueda/NodoArbolBinarioBusqueda.h"
struct NodoPila{
    struct NodoArbolBinarioBusqueda* elemento;
    NodoPila* siguiente;
};

#endif //INC_01_IMPLEMENTACION_NODOPILA_H