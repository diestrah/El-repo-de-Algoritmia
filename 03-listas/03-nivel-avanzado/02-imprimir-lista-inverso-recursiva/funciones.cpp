#include <iostream>
using namespace std;

#include "funciones.h"

void imprimirListaInversaRecursiva(const Lista& lista) {
    // Iniciamos el recorrido recursivo desde el primer nodo
    imprimirNodoListaInversaRecursiva(lista.inicio);
}

void imprimirNodoListaInversaRecursiva(const NodoLista* nodo) {
    // Caso base: hemos llegado al final de la lista
    if (nodo == nullptr) return;

    // Llamada recursiva al siguiente nodo
    imprimirNodoListaInversaRecursiva(nodo->siguiente);

    // Imprimimos durante el retorno de las llamadas recursivas
    cout << nodo->elemento.num << " ";
}
