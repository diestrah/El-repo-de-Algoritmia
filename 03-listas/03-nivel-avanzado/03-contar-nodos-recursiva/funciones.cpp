#include "funciones.h"

int contarNodosLista(Lista& lista) {
    return contarNodosRecursiva(lista.inicio);
}

int contarNodosRecursiva(NodoLista* nodo) {
    if (nodo == nullptr) return 0;
    return 1 + contarNodosRecursiva(nodo->siguiente);
}
