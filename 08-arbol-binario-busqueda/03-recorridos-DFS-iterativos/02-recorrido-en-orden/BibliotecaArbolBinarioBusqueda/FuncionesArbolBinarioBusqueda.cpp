#include "FuncionesArbolBinarioBusqueda.h"
#include <iostream>
using namespace std;

/*  Funciones de Arbol Binario de Busqueda */
void insertar(ArbolBinarioBusqueda& arbol, const ElementoArbolBinarioBusqueda& elemento) {
    insertarRecursivo(arbol.raiz, elemento);
}

void insertarRecursivo(NodoArbolBinarioBusqueda*& nodo, const ElementoArbolBinarioBusqueda& elemento) {
    if (esNodoVacio(nodo)){
        plantarNodoArbolBinario(nodo, nullptr, elemento, nullptr);
        return;
    }
    int comparacion = compararElementos(elemento, nodo->elemento);
    if (comparacion < 0)
        insertarRecursivo(nodo->izq, elemento);
    else if (comparacion > 0)
        insertarRecursivo(nodo->der, elemento);
    else
        cout << "Ya existe el elemento en el arbol " << endl;
}

bool buscar(const ArbolBinarioBusqueda& arbol, const ElementoArbolBinarioBusqueda& elemento) {
    return buscarRecursivo(arbol.raiz, elemento);
}

int compararElementos(const ElementoArbolBinarioBusqueda& a, const ElementoArbolBinarioBusqueda& b) {
    if (a.num == b.num) return 0;
    if (a.num < b.num) return -1;
    return 1;
}

bool buscarRecursivo(const NodoArbolBinarioBusqueda* nodo, const ElementoArbolBinarioBusqueda& elemento) {
    if (esNodoVacio(nodo)) return false;
    int comparacion = compararElementos(elemento, nodo->elemento);
    if (comparacion < 0)
        return buscarRecursivo(nodo->izq, elemento);
    if (comparacion > 0)
        return buscarRecursivo(nodo->der, elemento);
    else
        return true;
}

NodoArbolBinarioBusqueda* minimoArbol(NodoArbolBinarioBusqueda* nodo) {
    if (esNodoVacio(nodo)) return nullptr;
    if (esNodoVacio(nodo->izq)) return nodo;
    return minimoArbol(nodo->izq);
}

NodoArbolBinarioBusqueda* maximoArbol(NodoArbolBinarioBusqueda* nodo) {
    NodoArbolBinarioBusqueda* pArbol = nodo;
    while (pArbol and pArbol->der)
        pArbol = pArbol->der;
    return pArbol;
}

void eliminar(ArbolBinarioBusqueda& arbol) {
    eliminarRecursivo(arbol.raiz);
    arbol.raiz = nullptr;
}

void eliminarRecursivo(NodoArbolBinarioBusqueda* nodo) {
    if (esNodoVacio(nodo)) return;
    eliminarRecursivo(nodo->izq);
    eliminarRecursivo(nodo->der);
    delete nodo;
}

/*  Funciones de Arbol Binario  */
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
    nuevo->izq = izq;
    nuevo->der = der;
    nodo = nuevo;
}

void imprimirNodo(NodoArbolBinarioBusqueda* nodo) {
    cout << nodo->elemento.num << " ";
}

void recorrerPreOrden(const ArbolBinarioBusqueda& arbol) {
    recorrerPreOrdenRecursivo(arbol.raiz);
}

void recorrerPreOrdenRecursivo(NodoArbolBinarioBusqueda* nodo) {
    if (esNodoVacio(nodo)) return;
    imprimirNodo(nodo);
    recorrerPreOrdenRecursivo(nodo->izq);
    recorrerPreOrdenRecursivo(nodo->der);
}

void recorrerEnOrden(const ArbolBinarioBusqueda& arbol) {
    recorrerEnOrdenRecursivo(arbol.raiz);
}

void recorrerEnOrdenRecursivo(NodoArbolBinarioBusqueda* nodo) {
    if (esNodoVacio(nodo)) return;
    recorrerEnOrdenRecursivo(nodo->izq);
    imprimirNodo(nodo);
    recorrerEnOrdenRecursivo(nodo->der);
}

void recorrerPosOrden(const ArbolBinarioBusqueda& arbol) {
    recorrerPosOrdenRecursivo(arbol.raiz);
}

void recorrerPosOrdenRecursivo(NodoArbolBinarioBusqueda* nodo) {
    if (esNodoVacio(nodo)) return;
    recorrerPosOrdenRecursivo(nodo->izq);
    recorrerPosOrdenRecursivo(nodo->der);
    imprimirNodo(nodo);
}

int numeroHojas(const ArbolBinarioBusqueda& arbol) {
    return numeroHojasRecursivo(arbol.raiz);
}

int numeroHojasRecursivo(NodoArbolBinarioBusqueda* nodo) {
    if (esNodoVacio(nodo)) return 0;
    if (esNodoVacio(nodo->izq) and esNodoVacio(nodo->der)) return 1;
    return numeroHojasRecursivo(nodo->izq) + numeroHojasRecursivo(nodo->der);
}

int numeroNodos(const ArbolBinarioBusqueda& arbol) {
    return numeroNodosRecursivo(arbol.raiz);
}

int numeroNodosRecursivo(const NodoArbolBinarioBusqueda* nodo) {
    if (esNodoVacio(nodo)) return 0;
    return 1 + numeroNodosRecursivo(nodo->izq) + numeroNodosRecursivo(nodo->der);
}

int max(int a, int b) {
    return a > b ? a : b;
}

int altura(const ArbolBinarioBusqueda& arbol) {
    return alturaRecursivo(arbol.raiz);
}

int alturaRecursivo(const NodoArbolBinarioBusqueda* nodo) {
    if (esNodoVacio(nodo)) return 0;
    int cantIzq = alturaRecursivo(nodo->izq);
    int cantDer = alturaRecursivo(nodo->der);
    return 1 + max(cantIzq, cantDer);
}
