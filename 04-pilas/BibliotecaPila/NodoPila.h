#ifndef INC_01_IMPLEMENTACION_NODOPILA_H
#define INC_01_IMPLEMENTACION_NODOPILA_H

#include "ElementoPila.h"
struct NodoPila{
    struct ElementoPila elemento;
    NodoPila* siguiente;
};

#endif //INC_01_IMPLEMENTACION_NODOPILA_H