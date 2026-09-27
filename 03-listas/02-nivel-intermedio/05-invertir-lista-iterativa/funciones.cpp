#include "funciones.h"
#include "BibliotecaListas/NodoLista.h"

void invertirLista(Lista& lista) {
    NodoLista* pNodo = lista.inicio; // Nodo que estamos procesando actualmente de la lista original
    NodoLista* aux = nullptr; // representa el inicio de la lista invertida

    while (pNodo) {
        // Guardamos el siguiente nodo para no perder el resto de la lista
        NodoLista* posterior = pNodo->siguiente;

        // El nodo actual apunta al inicio de la parte ya invertida
        pNodo->siguiente = aux;

        // El nodo actual pasa a ser el primero de la parte invertida
        aux = pNodo;

        // Avanzamos al siguiente nodo de la lista original
        pNodo = posterior;
    }

    // El inicio de la lista ahora es el primer nodo de la lista invertida
    lista.inicio = aux;
}

