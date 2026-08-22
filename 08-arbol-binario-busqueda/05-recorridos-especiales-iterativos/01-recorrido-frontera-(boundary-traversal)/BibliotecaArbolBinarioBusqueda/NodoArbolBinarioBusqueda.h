#ifndef ARBOLBINARIOBUSQUEDA_NODOARBOLBINARIOBUSQUEDA_H
#define ARBOLBINARIOBUSQUEDA_NODOARBOLBINARIOBUSQUEDA_H

#include "ElementoArbolBinarioBusqueda.h"

struct NodoArbolBinarioBusqueda{
    struct ElementoArbolBinarioBusqueda elemento;
    struct NodoArbolBinarioBusqueda* izq;
    struct NodoArbolBinarioBusqueda* der;
};

#endif //ARBOLBINARIOBUSQUEDA_NODOARBOLBINARIOBUSQUEDA_H
