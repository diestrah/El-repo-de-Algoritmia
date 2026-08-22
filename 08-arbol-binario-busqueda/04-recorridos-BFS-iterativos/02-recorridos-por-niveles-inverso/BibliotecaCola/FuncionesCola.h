#ifndef INC_01_IMPLEMENTACION_FUNCIONESCOLA_H
#define INC_01_IMPLEMENTACION_FUNCIONESCOLA_H

#include "Cola.h"

void construir(struct Cola& cola);
bool esColaVacia(const struct Cola& cola);
int longitud(const struct Cola& cola);
void encolar(struct Cola& cola, NodoArbolBinarioBusqueda* elemento);
struct NodoArbolBinarioBusqueda* desencolar(struct Cola& cola);
void imprimir(const struct Cola& cola);

#endif //INC_01_IMPLEMENTACION_FUNCIONESCOLA_H