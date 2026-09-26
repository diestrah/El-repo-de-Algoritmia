#ifndef INC_01_ROTAR_K_POSICIONES_FUNCIONES_H
#define INC_01_ROTAR_K_POSICIONES_FUNCIONES_H

#include "BibliotecaListas/Lista.h"

void rotarLista(Lista& lista, int k, bool direccion);

void rotarDerecha(Lista& lista, int k);

void rotarIzquierda(Lista& lista, int k);

NodoLista* obtenerUltimo(NodoLista* nodo);

#endif //INC_01_ROTAR_K_POSICIONES_FUNCIONES_H
