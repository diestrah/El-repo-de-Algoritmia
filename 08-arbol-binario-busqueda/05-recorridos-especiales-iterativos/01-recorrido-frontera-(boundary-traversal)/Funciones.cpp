#include "BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.h"
#include "BibliotecaPila/FuncionesPila.h"
#include "Funciones.h"

void recorrerFrontera(const ArbolBinarioBusqueda& arbol) {
    // Estrategia: recorrer el borde izquierdo, las hojas
    // y finalmente el borde derecho

    // Recorremos el borde izquierdo (sin incluir las hojas)
    NodoArbolBinarioBusqueda* pArbol = arbol.raiz;

    while (pArbol) {
        if (pArbol->izq or pArbol->der) // Si el nodo no es hoja
            imprimirNodo(pArbol);

        if (pArbol->izq)
            pArbol = pArbol->izq;

        else
            pArbol = pArbol->der;
    }

    // Recorremos las hojas
    Pila pila;
    construir(pila);
    push(pila, arbol.raiz);

    while (!esPilaVacia(pila)) {
        pArbol = pop(pila);

        if (pArbol->der)
            push(pila, pArbol->der);

        if (pArbol->izq)
            push(pila, pArbol->izq);

        if (esNodoVacio(pArbol->izq) and esNodoVacio(pArbol->der)) // condición de las hojas
            imprimirNodo(pArbol);
    }

    // Recorremos el borde derecho, sin incluir las hojas
    // Utilizamos una pila para obtener los nodos de abajo hacia arriba.
    pArbol = arbol.raiz->der;
    while (pArbol or !esPilaVacia(pila)) {
        if (pArbol) {
            if (!esNodoVacio(pArbol->izq) or !esNodoVacio(pArbol->der))
                push(pila, pArbol);

            if (pArbol->der)
                pArbol = pArbol->der;
            else
                pArbol = pArbol->izq;
        }
        else {
            imprimirNodo(pop(pila));
        }
    }
}
