#ifndef INC_01_IMPLEMENTACION_FUNCIONESPILA_H
#define INC_01_IMPLEMENTACION_FUNCIONESPILA_H

#include "Pila.h"

void construir(struct Pila& pila);
bool esPilaVacia(const struct Pila& pila);
int longitud(const struct Pila& pila);
struct ElementoArbolBinarioBusqueda top(const struct Pila& pila);
void push(struct Pila& pila, const struct ElementoArbolBinarioBusqueda& elemento);
struct ElementoArbolBinarioBusqueda pop(struct Pila& pila);
void imprimir(const struct Pila& pila);
void destruir(struct Pila& pila);

#endif //INC_01_IMPLEMENTACION_FUNCIONESPILA_H