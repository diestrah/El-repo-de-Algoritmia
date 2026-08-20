#include <iostream>
using namespace std;
#include "Funciones.h"
#include "BibliotecaPila/FuncionesPila.h"

void recorrerPosOrdenIterativo(const ArbolBinarioBusqueda& arbol) {
    NodoArbolBinarioBusqueda* pArbol = arbol.raiz; // Solo desciende
    NodoArbolBinarioBusqueda* cima = nullptr; // Ve los nodos pendientes en la cima
    NodoArbolBinarioBusqueda* ultimo = nullptr; // guarda el último nodo utilizado
    Pila pila;
    construir(pila);

    while (pArbol or !esPilaVacia(pila)) {
        if (pArbol) {
            // Recorremos todo el subárbol izquierdo
            push(pila, pArbol);
            pArbol = pArbol->izq;
        }
        else {
            cima = top(pila);

            // Si existe un subárbol derecho y todavía no ha sido recorrido,
            // lo recorremos
            if (cima->der and cima->der != ultimo)
                pArbol = cima->der;
            else {
                // Si no existe subárbol derecho o ya fue recorrido,
                // podemos procesar el nodo
                cima = pop(pila);
                imprimirNodo(cima);

                // Guardamos el último nodo procesado
                ultimo = cima;
            }
        }
    }
    cout << endl;
}
