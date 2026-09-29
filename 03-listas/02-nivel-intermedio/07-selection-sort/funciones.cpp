#include "funciones.h"

#include "BibliotecaListas/NodoLista.h"

void selectionSort(Lista& lista) {
    NodoLista* pNodo = lista.inicio;
    NodoLista* anterior = nullptr;

    while (pNodo) {
        // Buscamos el menor nodo de la parte no ordenada
        NodoLista* pMenor = pNodo;
        NodoLista* anteriorMenor = anterior;

        NodoLista* anteriorRecorrido = pNodo;
        NodoLista* recorrido = pNodo->siguiente;

        while (recorrido) {
            if (pMenor->elemento.num > recorrido->elemento.num) {
                pMenor = recorrido;
                anteriorMenor = anteriorRecorrido;
            }

            anteriorRecorrido = recorrido;
            recorrido = recorrido->siguiente;
        }

        if (pMenor != pNodo) {
            // Extraemos pMenor de su posición original
            anteriorMenor->siguiente = pMenor->siguiente;

            // Insertamos pMenor antes de pNodo
            pMenor->siguiente = pNodo;

            if (anterior == nullptr) {
                lista.inicio = pMenor;
            }
            else {
                anterior->siguiente = pMenor;
            }

            // pMenor queda en la parte ordenada
            anterior = pMenor;
        }
        else {
            // pNodo ya es el menor, por lo que queda en su posición
            anterior = pNodo;
        }

        pNodo = anterior->siguiente;
    }
}
