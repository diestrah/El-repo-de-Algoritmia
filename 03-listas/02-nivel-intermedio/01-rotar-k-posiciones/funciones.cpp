#include "BibliotecaListas/NodoLista.h"
#include "BibliotecaListas/Lista.h"
#include "funciones.h"

void rotarLista(Lista& lista, int k, bool direccion) {
    if (lista.longitud <= 1) return;

    // Si es negativo, invertimos la dirección de la rotación
    if (k<0) {
        k *= -1;
        direccion = !direccion;
    }

    k %= lista.longitud;

    if (direccion) {
        // Si es true es rotar derecha
        rotarDerecha(lista, k);
    }
    else {
        // de lo contrario, izquierda
        rotarIzquierda(lista, k);
    }
}

void rotarIzquierda(Lista& lista, int k) {
    NodoLista* pNodo = lista.inicio;
    NodoLista* anterior = nullptr;

    // Buscamos el punto donde se dividirá la lista.
    while (k > 0) {
        anterior = pNodo;
        pNodo = pNodo->siguiente;
        k--;
    }

    // Separamos la parte que pasará al inicio.
    anterior->siguiente = nullptr;

    // Buscamos el último nodo de la segunda parte.
    NodoLista* ultimo = obtenerUltimo(pNodo);

    // Conectamos la segunda parte con la primera.
    ultimo->siguiente = lista.inicio;

    // Actualizamos el inicio.
    lista.inicio = pNodo;
}

void rotarDerecha(Lista& lista, int k) {
    rotarIzquierda(lista, lista.longitud - k);
}

NodoLista* obtenerUltimo(NodoLista* nodo) {
    NodoLista* pNodo = nodo;
    NodoLista* anterior = nullptr;
    while (pNodo) {
        anterior = pNodo;
        pNodo = pNodo->siguiente;
    }
    return anterior;
}
