#ifndef INC_02_FUSIONAR_DOS_LISTAS_ORDENADAS_FUNCIONES_H
#define INC_02_FUSIONAR_DOS_LISTAS_ORDENADAS_FUNCIONES_H

#include "BibliotecaListas/Lista.h"

void fusionarListasV1(Lista& listaFusionada, Lista& lista1, Lista& lista2);
void fusionarListasV2(Lista& listaFusionada, Lista& lista1, Lista& lista2);
void agregarNodo(Lista& listaFusionada, NodoLista* pLista2, NodoLista*& ultimo);

#endif //INC_02_FUSIONAR_DOS_LISTAS_ORDENADAS_FUNCIONES_H