#include <iostream>
using namespace std;
#include "Funciones.h"

void recorrerPreOrdenIterativo(const ArbolBinarioBusqueda& arbol) {
    NodoArbolBinarioBusqueda* pArbol = arbol.raiz;
    Pila pila;
    construir(pila);

    while (pArbol or !esPilaVacia(pila)) {
        if (pArbol) {
            imprimirNodo(pArbol);

            // Guardamos el hijo derecho para visitarlo después de terminar
            // de recorrer todo el subárbol izquierdo
            if (pArbol->der) {
                push(pila, pArbol->der);
            }

            // continuamos por el subárbol izquierdo
            pArbol = pArbol->izq;
        }
        else {
            // Retomamos el último nodo derecho pendiente
            // y continuamos recorriendo su subárbol izquierdo.
            pArbol = pop(pila);
        }
    }
    cout << endl;
}
