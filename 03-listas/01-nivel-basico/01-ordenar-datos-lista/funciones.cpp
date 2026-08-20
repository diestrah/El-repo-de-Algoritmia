#include "funciones.h"

void ordenarAscendenteDatosLista(Lista& lista) {
    NodoLista* actual = lista.inicio;

    while (actual and actual->siguiente) {
        NodoLista* posterior = actual->siguiente;

        while (posterior) {
            if (actual->elemento.num > posterior->elemento.num) {
                // realizamos un swap de los elementos de los nodos
                ElementoLista temp = actual->elemento;
                actual->elemento = posterior->elemento;
                posterior->elemento = temp;
            }
            posterior = posterior->siguiente;
        }
        actual = actual->siguiente;
    }
}
