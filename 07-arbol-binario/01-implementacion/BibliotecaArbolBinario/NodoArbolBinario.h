#ifndef INC_01_IMPLEMENTACION_NODOARBOLBINARIO_H
#define INC_01_IMPLEMENTACION_NODOARBOLBINARIO_H

#include "ElementoArbolBinario.h"
struct NodoArbolBinario{
    struct ElementoArbolBinario elemento;
    NodoArbolBinario* izq;
    NodoArbolBinario* der;
};

#endif //INC_01_IMPLEMENTACION_NODOARBOLBINARIO_H