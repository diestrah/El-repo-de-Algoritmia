#ifndef INC_01_IMPLEMENTACION_NODOCOLA_H
#define INC_01_IMPLEMENTACION_NODOCOLA_H

#include "ElementoCola.h"
struct NodoCola{
    struct ElementoCola elemento;
    struct NodoCola* siguiente;
};

#endif //INC_01_IMPLEMENTACION_NODOCOLA_H