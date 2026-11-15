#ifndef INC_01_IMPLEMENTACION_PILA_H
#define INC_01_IMPLEMENTACION_PILA_H

#include "NodoPila.h"
struct Pila{
    char nombre; // <- esto se agrego
    NodoPila* inicio;
    int longitud = 0;
};

#endif //INC_01_IMPLEMENTACION_PILA_H