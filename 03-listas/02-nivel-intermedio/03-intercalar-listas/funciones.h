#ifndef INC_03_INTERCALAR_LISTAS_FUNCIONES_H
#define INC_03_INTERCALAR_LISTAS_FUNCIONES_H

#include "BibliotecaListas/NodoLista.h"
#include "BibliotecaListas/Lista.h"

void intercalarLista(Lista& listaIntercalada, Lista& lista1, Lista& lista2);
void agregarALista(Lista& listaIntercalada, NodoLista*& ultimo, NodoLista* pLista);

#endif //INC_03_INTERCALAR_LISTAS_FUNCIONES_H