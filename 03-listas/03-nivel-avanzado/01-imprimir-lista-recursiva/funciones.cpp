#include <iostream>
using namespace std;
#include "funciones.h"

void imprimirListaRecursiva(const Lista& lista) {
    // Iniciamos el recorrido recursivo desde el primer nodo
    imprimirNodosListaRecursiva(lista.inicio);
}

void imprimirNodosListaRecursiva(const NodoLista* nodo) {
    // Caso base: llegamos al final de la lista
    if (nodo == nullptr) return;

    cout << nodo->elemento.num << " ";

    // LLamada recursiva con el siguiente nodo
    imprimirNodosListaRecursiva(nodo->siguiente);
}
