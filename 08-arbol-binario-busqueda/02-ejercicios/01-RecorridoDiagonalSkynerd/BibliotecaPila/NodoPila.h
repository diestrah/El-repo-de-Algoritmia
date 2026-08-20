#ifndef INC_01_IMPLEMENTACION_NODOPILA_H
#define INC_01_IMPLEMENTACION_NODOPILA_H

#include "../BibliotecaArbolBinarioBusqueda/ElementoArbolBinarioBusqueda.h"
struct NodoPila{
    struct ElementoArbolBinarioBusqueda elemento;
    NodoPila* siguiente;
};

#endif //INC_01_IMPLEMENTACION_NODOPILA_H