#ifndef INC_01_IMPLEMENTACION_FUNCIONESPILA_H
#define INC_01_IMPLEMENTACION_FUNCIONESPILA_H

#include "Pila.h"

void construir(Pila& pila);
bool esPilaVacia(const Pila& pila);
int longitud(const Pila& pila);
NodoArbolBinarioBusqueda* top(const Pila& pila);
void push(Pila& pila, NodoArbolBinarioBusqueda* elemento);
NodoArbolBinarioBusqueda* pop(Pila& pila);
void imprimir(const Pila& pila);
void destruir(Pila& pila);

#endif //INC_01_IMPLEMENTACION_FUNCIONESPILA_H
