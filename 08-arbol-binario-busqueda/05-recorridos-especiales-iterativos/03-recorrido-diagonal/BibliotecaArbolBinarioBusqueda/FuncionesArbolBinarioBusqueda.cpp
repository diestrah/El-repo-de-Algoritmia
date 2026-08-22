#include "FuncionesArbolBinarioBusqueda.h"
#include <iostream>
using namespace std;

// FUNCIONES ARBOL BINARIO BÚSQUEDA

void insertar(struct ArbolBinarioBusqueda& arbol, const struct ElementoArbolBinarioBusqueda& elemento) {
    insertarRecursivo(arbol.raiz, elemento);
}

void insertarRecursivo(struct NodoArbolBinarioBusqueda*& raiz, const struct ElementoArbolBinarioBusqueda& elemento) {
    if (esNodoVacio(raiz))
        plantarNodoArbolBinario(raiz, nullptr, elemento, nullptr);
    else if (raiz->elemento.num > elemento.num)
        insertarRecursivo(raiz->izquierda, elemento);
    else if (raiz->elemento.num < elemento.num)
        insertarRecursivo(raiz->derecha, elemento);
    else
        cout << "El elemento " << elemento.num << "Ya se encuentra en el arbol" << endl;
}

int comparaElementos(int elementoA, int elementoB) {
    if (elementoA == elementoB) return 0;
    else if (elementoA < elementoB) return -1;
    else if (elementoA > elementoB) return 1;
}

bool buscarRecursivo(struct NodoArbolBinarioBusqueda* nodo, const struct ElementoArbolBinarioBusqueda& elemento) {
    if (esNodoVacio(nodo))
        return false;
    if (comparaElementos(nodo->elemento.num, elemento.num) == 0)
        return true;
    if (comparaElementos(nodo->elemento.num, elemento.num) == 1)
        return buscarRecursivo(nodo->izquierda, elemento);
    else if (comparaElementos(nodo->elemento.num, elemento.num) == -1)
        return buscarRecursivo(nodo->derecha, elemento);
}

bool buscar(const struct ArbolBinarioBusqueda& arbol, const struct ElementoArbolBinarioBusqueda& elemento) {
    return buscarRecursivo(arbol.raiz, elemento);
}

struct NodoArbolBinarioBusqueda* minimoArbol(struct NodoArbolBinarioBusqueda* nodo) {
    if (esNodoVacio(nodo))
        return nodo;
    if (esNodoVacio(nodo->izquierda))
        return nodo;
    return minimoArbol(nodo->izquierda);
}

struct NodoArbolBinarioBusqueda* eliminarRecursivo(struct NodoArbolBinarioBusqueda* nodo,
                                                   const struct ElementoArbolBinarioBusqueda& elemento) {
    if (esNodoVacio(nodo))
        return nodo;
    //buscamos el nodo a eliminar
    if (nodo->elemento.num > elemento.num)
        nodo->izquierda = eliminarRecursivo(nodo->izquierda, elemento);
    else if (nodo->elemento.num < elemento.num)
        nodo->derecha = eliminarRecursivo(nodo->derecha, elemento);
    else /*encontrÃƒÂ³ el elemento*/
        if (esNodoVacio(nodo->izquierda)) {
            struct NodoArbolBinarioBusqueda* hijo = nodo->derecha;
            delete nodo;
            return hijo;
        }
        else if (esNodoVacio(nodo->derecha)) {
            struct NodoArbolBinarioBusqueda* hijo = nodo->izquierda;
            delete nodo;
            return hijo;
        }
        else {
            /* dos hijos*/
            struct NodoArbolBinarioBusqueda* minNodo = minimoArbol(nodo->derecha);
            nodo->elemento = minNodo->elemento;
            nodo->derecha = eliminarRecursivo(nodo->derecha, minNodo->elemento);
        }
    return nodo;
}

void eliminar(struct ArbolBinarioBusqueda& arbol, const struct ElementoArbolBinarioBusqueda& elemento) {
    arbol.raiz = eliminarRecursivo(arbol.raiz, elemento);
}

// FUNCIONES ARBOL BINARIO

void construir(ArbolBinarioBusqueda& arbol) {
    arbol.raiz = nullptr;
}

bool esArbolVacio(const ArbolBinarioBusqueda& arbol) {
    return arbol.raiz == nullptr;
}

bool esNodoVacio(const NodoArbolBinarioBusqueda* nodo) {
    return nodo == nullptr;
}

void plantarArbolBinario(ArbolBinarioBusqueda& arbol, const ArbolBinarioBusqueda& izq,
                         const ElementoArbolBinarioBusqueda& e, const ArbolBinarioBusqueda& der) {
    plantarNodoArbolBinario(arbol.raiz, izq.raiz, e, der.raiz);
}

void plantarNodoArbolBinario(NodoArbolBinarioBusqueda*& nodo, NodoArbolBinarioBusqueda* izq,
                             const ElementoArbolBinarioBusqueda& elemento, NodoArbolBinarioBusqueda* der) {
    NodoArbolBinarioBusqueda* nuevo = new NodoArbolBinarioBusqueda;
    nuevo->elemento = elemento;
    nuevo->izquierda = izq;
    nuevo->derecha = der;
    nodo = nuevo;
}

void imprimir(ArbolBinarioBusqueda& arbol) {
    imprimirNodo(arbol.raiz);
}

void imprimirNodo(NodoArbolBinarioBusqueda* nodo) {
    cout << nodo->elemento.esSkynerd << "-" << nodo->elemento.num << " ";
}

void recorrerPreOrden(const ArbolBinarioBusqueda& arbol) {
    recorrerPreOrdenRecursivo(arbol.raiz);
}

void recorrerPreOrdenRecursivo(NodoArbolBinarioBusqueda* nodo) {
    if (esNodoVacio(nodo)) return;
    imprimirNodo(nodo);
    recorrerPreOrdenRecursivo(nodo->izquierda);
    recorrerPreOrdenRecursivo(nodo->derecha);
}

void recorrerEnOrden(const ArbolBinarioBusqueda& arbol) {
    recorrerEnOrdenRecursivo(arbol.raiz);
}

void recorrerEnOrdenRecursivo(NodoArbolBinarioBusqueda* nodo) {
    if (esNodoVacio(nodo)) return;
    recorrerEnOrdenRecursivo(nodo->izquierda);
    imprimirNodo(nodo);
    recorrerEnOrdenRecursivo(nodo->derecha);
}

void recorrerPosOrden(const ArbolBinarioBusqueda& arbol) {
    recorrerPosOrdenRecursivo(arbol.raiz);
}

void recorrerPosOrdenRecursivo(NodoArbolBinarioBusqueda* nodo) {
    if (esNodoVacio(nodo)) return;
    recorrerPosOrdenRecursivo(nodo->izquierda);
    recorrerPosOrdenRecursivo(nodo->derecha);
    imprimirNodo(nodo);
}
