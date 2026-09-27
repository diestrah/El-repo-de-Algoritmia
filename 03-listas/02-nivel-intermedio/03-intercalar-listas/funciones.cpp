#include "funciones.h"

#include "BibliotecaListas/FuncionesLista.h"

void intercalarLista(Lista& listaIntercalada, Lista& lista1, Lista& lista2) {
    NodoLista* pUltimo = nullptr; // apunta al final de listaIntercalada
    NodoLista* pLista1 = lista1.inicio; // recorre lista1
    NodoLista* pLista2 = lista2.inicio; // recorre lista2
    NodoLista *pPosterior1, *pPosterior2; // guardan el siguiente nodo de cada lista

    while (pLista1 != nullptr || pLista2 != nullptr) {
        if (pLista1) {
            pPosterior1 = pLista1->siguiente; // guardamos el siguiente nodo antes de desconectar el actual
            pLista1->siguiente = nullptr; // desconectamos nodo actual de su lista original
            agregarALista(listaIntercalada, pUltimo, pLista1);
            pLista1 = pPosterior1; // avanzamos al siguiente nodo de lista1
        }
        if (pLista2) {
            pPosterior2 = pLista2->siguiente; // guardamos el siguiente nodo antes de desconectar el actual
            pLista2->siguiente = nullptr; // desconectamos nodo actual de su lista original
            agregarALista(listaIntercalada, pUltimo, pLista2);
            pLista2 = pPosterior2; // avanzamos al siguiente nodo de lista1
        }
    }

    // Dejamos las listas originales vacías
    lista1.inicio = nullptr;
    lista1.longitud = 0;
    lista2.inicio = nullptr;
    lista2.longitud = 0;
}

void agregarALista(Lista& listaIntercalada, NodoLista*& ultimo, NodoLista* pLista) {
    if (ultimo == nullptr) {
        listaIntercalada.inicio = pLista;
    }
    else {
        ultimo->siguiente = pLista;
    }

    ultimo = pLista; // actualizamos el ultimo nodo de la lista
    listaIntercalada.longitud++;
}
