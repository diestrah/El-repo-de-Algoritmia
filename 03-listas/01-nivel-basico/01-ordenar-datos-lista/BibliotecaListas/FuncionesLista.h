#ifndef TAD_FUNCIONESLISTA_H
#define TAD_FUNCIONESLISTA_H

#include "Lista.h"

void construirLista(Lista& lista);
bool esListaVacia(const Lista& lista);
int longitud(const Lista& lista);
NodoLista* obtenerUltimoNodo(Lista& lista);
void insertarAlInicio(Lista& lista, const ElementoLista& e);
void insertarAlFinal(Lista& lista, const ElementoLista& e);
void insertarOrdenado(Lista& lista, const ElementoLista& e);
void imprimirLista(const Lista& lista);
void destruirLista(Lista& lista);

#endif //TAD_FUNCIONESLISTA_H