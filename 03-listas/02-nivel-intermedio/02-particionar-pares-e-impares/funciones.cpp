#include "funciones.h"

void particionarLista(Lista& listaOriginal, Lista& listaImpares, Lista& listaPares) {
    NodoLista* pNodo= listaOriginal.inicio;
    NodoLista* posterior = nullptr;

    // Punteros que mantienen la referencia al último nodo de cada lista.
    // Esto permite insertar al final en O(1), evitando recorrer las listas.
    NodoLista* ultimoImpar = nullptr;
    NodoLista*ultimoPar = nullptr;

    while (pNodo) {
        // Guardamos el siguiente nodo antes de desconectarlo
        posterior = pNodo->siguiente;

        // Desconectamos el nodo de la lista original
        pNodo->siguiente = nullptr;

        // insertamos el nodo aislado en la lista de pares o impares
        if (pNodo->elemento.num % 2 == 0) {
            agregarNodoALista(listaPares, pNodo, ultimoPar);
        } else {
            agregarNodoALista(listaImpares, pNodo, ultimoImpar);
        }

        // avanzamos al siguiente nodo de la lista
        pNodo = posterior;

        // actualizamos el inicio y la longitud de la lista original
        listaOriginal.inicio = pNodo;
        listaOriginal.longitud--;
    }
}

void agregarNodoALista(Lista& lista, NodoLista* nuevo, NodoLista*& ultimo) {
    // No se crea un nuevo nodo; se modifican los enlaces entre nodos.
    if (ultimo == nullptr) lista.inicio = nuevo;
    else ultimo->siguiente = nuevo;

    ultimo = nuevo; // El nodo recién insertado pasa a ser el último de la lista

    lista.longitud++;
}
