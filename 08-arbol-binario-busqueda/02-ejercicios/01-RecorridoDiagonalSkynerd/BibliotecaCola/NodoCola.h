#ifndef INC_01_IMPLEMENTACION_NODOCOLA_H
#define INC_01_IMPLEMENTACION_NODOCOLA_H

#include "../BibliotecaArbolBinarioBusqueda/ElementoArbolBinarioBusqueda.h"
struct NodoCola{
    struct ElementoArbolBinarioBusqueda elemento;
    struct NodoCola* siguiente;
};

#endif //INC_01_IMPLEMENTACION_NODOCOLA_H