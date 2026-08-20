#ifndef TAD_NODOLISTA_H
#define TAD_NODOLISTA_H

#include "ElementoLista.h"
struct NodoLista{
    ElementoLista elemento;
    NodoLista* siguiente;
};
#endif //TAD_NODOLISTA_H