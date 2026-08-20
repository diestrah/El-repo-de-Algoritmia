#include <iostream>
using namespace std;
#include "Funciones.h"

void recorrerEnOrdenIterativo(const ArbolBinarioBusqueda& arbol) {
    NodoArbolBinarioBusqueda* pArbol = arbol.raiz;
    Pila pila;
    construir(pila);

    while (pArbol or !esPilaVacia(pila)) {
        if (pArbol) {
            // Mientras podamos avanzar hacia la izquierda,
            // almacenamos los nodos para procesarlos después
            push(pila, pArbol);
            pArbol = pArbol->izq;
        }
        else {
            // Ya no podemos avanzar hacia la izquierda,
            // así que recuperamos el último nodo pendiente
            pArbol = pop(pila);

            // En en-orden, procesamos el nodo después
            // de recorrer todo su subárbol izquierdo.
            imprimirNodo(pArbol);

            // Continuamos con su subárbol derecho
            pArbol = pArbol->der;
        }
    }
    cout << endl;
}
