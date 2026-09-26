#ifndef INC_01_PARTICIONAR_PARES_E_IMPARES_FUNCIONES_H
#define INC_01_PARTICIONAR_PARES_E_IMPARES_FUNCIONES_H

#include "BibliotecaListas/NodoLista.h"
#include "BibliotecaListas/Lista.h"

void particionarLista(Lista& listaOriginal, Lista& listaImpares, Lista& listaPares);
void agregarNodoALista(Lista& lista, NodoLista* nuevo, NodoLista*& ultimo);

#endif //INC_01_PARTICIONAR_PARES_E_IMPARES_FUNCIONES_H