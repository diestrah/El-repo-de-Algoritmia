#include "funciones.h"
#include "BibliotecaListas/NodoLista.h"

void bubbleSort(Lista& lista) {
    for (int i = 0; i < lista.longitud; i++) {
        NodoLista* pNodo = lista.inicio;
        NodoLista* anterior = nullptr;

        for (int j = 0; j < lista.longitud - i - 1; j++) {
            NodoLista* posterior = pNodo->siguiente;

            if (pNodo->elemento.num > posterior->elemento.num) {
                if (anterior == nullptr) {
                    // Si el nodo actual es el primero de la lista
                    // Intercambiamos pNodo y posterior, y actualizamos el inicio
                    pNodo->siguiente = posterior->siguiente;
                    posterior->siguiente = pNodo;
                    lista.inicio = posterior;

                    // posterior es ahora el primer nodo y queda como anterior de pNodo
                    anterior = lista.inicio;
                }
                else {
                    // Si existe un nodo anterior, intercambiamos pNodo y posterior
                    anterior->siguiente = posterior;
                    pNodo->siguiente = posterior->siguiente;
                    posterior->siguiente = pNodo;

                    // posterior ahora es el nodo anterior a pNodo, por eso actualizamos anterior
                    anterior = posterior;
                }
            }
            else {
                // Los nodos ya están en el orden correcto
                anterior = pNodo;
                pNodo = pNodo->siguiente;
            }
        }
    }
}
