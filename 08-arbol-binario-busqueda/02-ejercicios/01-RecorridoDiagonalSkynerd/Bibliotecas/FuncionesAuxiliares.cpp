#include "FuncionesAuxiliares.h"

void imprimirDiagonal(struct ArbolBinarioBusqueda& arbol) {
    NodoArbolBinarioBusqueda* pArbol = arbol.raiz; // puntero que recorre el árbol
    Cola cola;
    construir(cola);
    while (pArbol) {
        imprimirNodo(pArbol);
        if (pArbol->izquierda) // si existe un dato en la izquierda, encolamos
            encolar(cola, pArbol->izquierda->elemento);

        if (pArbol->derecha) // si hay derecha, recorremos
            pArbol = pArbol->derecha;
        else {
            // si no, desencolamos
            if (not esColaVacia(cola)) {
                ElementoArbolBinarioBusqueda elemento = desencolar(cola);
                pArbol = buscarNodoIterativo(arbol.raiz, elemento);
            }
            else // si la cola está vacía, se terminó el recorrido
                pArbol = nullptr;
        }
    }
    cout << endl;
}

void imprimirDiagonarInverso(struct ArbolBinarioBusqueda& arbol) {
    // El proceso en esta función es similar a imprimirDiagonal
    // La diferencia es que apilaremos todos los datos y luego
    // de terminar todo el recorrido, se imprimirá la pila
    NodoArbolBinarioBusqueda* pArbol = arbol.raiz;
    Cola cola;
    construir(cola);
    Pila pila;
    construir(pila);
    while (pArbol) {
        push(pila, pArbol->elemento); // <- apilamos en lugar de imprimir
        if (pArbol->izquierda)
            encolar(cola, pArbol->izquierda->elemento);

        if (pArbol->derecha)
            pArbol = pArbol->derecha;
        else {
            if (not esColaVacia(cola)) {
                ElementoArbolBinarioBusqueda elemento = desencolar(cola);
                pArbol = buscarNodoIterativo(arbol.raiz, elemento);
            }
            else
                pArbol = nullptr;
        }
    }
    // Como se guardó revés todo el recorrido -> 10 pts asegurados
    imprimir(pila);
    cout << endl;
}

NodoArbolBinarioBusqueda* buscarNodoIterativo(NodoArbolBinarioBusqueda* raiz,
                                              const ElementoArbolBinarioBusqueda& elemento) {
    // Es igual a la búsqueda de un nodo, solo que en lugar de recursivo, es iterativo
    NodoArbolBinarioBusqueda* nodo = raiz;
    while (nodo) {
        if (nodo->elemento.num == elemento.num)
            return nodo;

        if (nodo->elemento.num < elemento.num)
            nodo = nodo->derecha;
        else
            nodo = nodo->izquierda;
    }
    return nullptr;
}
