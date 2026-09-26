#include "funciones.h"

void fusionarListasV1(Lista& listaFusionada, Lista& lista1, Lista& lista2) {
    NodoLista* pLista1 = lista1.inicio;
    NodoLista* pLista2 = lista2.inicio;
    NodoLista* ultimo = nullptr;

    while (pLista1 != nullptr || pLista2 != nullptr) {
        if (pLista1 == nullptr) {
            // Si lista1 ya se terminó, tomamos el siguiente nodo de lista2
            agregarNodo(listaFusionada, pLista2, ultimo);
            pLista2 = pLista2->siguiente;
        }
        else if (pLista2 == nullptr) {
            // Si lista2 ya se terminó, tomamos el siguiente nodo de lista1
            agregarNodo(listaFusionada, pLista1, ultimo);
            pLista1 = pLista1->siguiente;
        }
        else if (pLista1->elemento.num < pLista2->elemento.num) {
            // Tomamos el nodo de lista1 porque contiene el menor valor.
            agregarNodo(listaFusionada, pLista1, ultimo);
            pLista1 = pLista1->siguiente;
        }
        else {
            // En caso contrario, tomamos el nodo de lista2
            agregarNodo(listaFusionada, pLista2, ultimo);
            pLista2 = pLista2->siguiente;
        }
    }

    // Actualizamos las listas originales
    lista1.inicio = nullptr;
    lista1.longitud = 0;

    lista2.inicio = nullptr;
    lista2.longitud = 0;
}

void fusionarListasV2(Lista& listaFusionada, Lista& lista1, Lista& lista2) {
    NodoLista* pLista1 = lista1.inicio;
    NodoLista* pLista2 = lista2.inicio;
    NodoLista* ultimo = nullptr;

    while (pLista1 != nullptr || pLista2 != nullptr) {
        // Seleccionamos el menor nodo disponible entre ambas listas
        NodoLista* nuevo;

        if (pLista1 == nullptr) {
            // Si lista1 ya se terminó, tomamos el siguiente nodo de lista2
            nuevo = pLista2;
            pLista2 = pLista2->siguiente;
        }
        else if (pLista2 == nullptr) {
            // Si lista2 ya se terminó, tomamos el siguiente nodo de lista1
            nuevo = pLista1;
            pLista1 = pLista1->siguiente;
        }
        else if (pLista1->elemento.num < pLista2->elemento.num) {
            // Tomamos el nodo de lista1 porque contiene el menor valor
            nuevo = pLista1;
            pLista1 = pLista1->siguiente;
        }
        else {
            // En caso contrario, tomamos el nodo de lista2
            nuevo = pLista2;
            pLista2 = pLista2->siguiente;
        }

        // Desconectamos el nodo de su lista original
        nuevo->siguiente = nullptr;

        // Insertamos al final de la lista fusionada
        agregarNodo(listaFusionada, nuevo, ultimo);
    }
    // NOTA: No es necesario actualizar el ultimo->siguiente = nullptr
    // porque el ultimo de listaFusionada siempre tomará el ultimo nodo
    // de cualquiera de las 2 listas y su siguiente será siempre nullptr

    // Actualizamos las listas originales
    lista1.inicio = nullptr;
    lista1.longitud = 0;

    lista2.inicio = nullptr;
    lista2.longitud = 0;
}

void agregarNodo(Lista& listaFusionada, NodoLista* nuevo, NodoLista*& ultimo) {
    if (ultimo == nullptr) {
        listaFusionada.inicio = nuevo;
    } else {
        ultimo->siguiente = nuevo;
    }

    ultimo = nuevo;

    listaFusionada.longitud++;
}
