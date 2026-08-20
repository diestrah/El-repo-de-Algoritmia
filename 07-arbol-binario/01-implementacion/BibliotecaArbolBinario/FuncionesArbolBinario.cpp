#include <iostream>
#include <iomanip>
#include "FuncionesArbolBinario.h"
using namespace std;

void construir(struct ArbolBinario& arbol) {
    arbol.raiz = nullptr;
}

bool esArbolVacio(const struct ArbolBinario& arbol) {
    return arbol.raiz == nullptr;
}

bool esNodoVacio(const struct NodoArbolBinario* nodo) {
    return nodo == nullptr;
}

// Plantar árboles
void plantarArbolBinario(struct ArbolBinario& arbol, struct ArbolBinario& izq,
                         const struct ElementoArbolBinario& elemento, struct ArbolBinario& der) {
    plantarNodoArbolBinario(arbol.raiz, izq.raiz, elemento, der.raiz);
}

void plantarNodoArbolBinario(struct NodoArbolBinario*& nodo, struct NodoArbolBinario* izq,
                             const struct ElementoArbolBinario& elemento, struct NodoArbolBinario* der) {
    NodoArbolBinario* nuevo = new NodoArbolBinario();
    nuevo->izq = izq;
    nuevo->der = der;
    nuevo->elemento = elemento;
    nodo = nuevo;
}

// Impresión
void imprimirNodo(const struct NodoArbolBinario* nodo) {
    cout << right << setw(5) << nodo->elemento.num;
}

// Recorridos
void recorrerPreOrden(const struct ArbolBinario& arbol) {
    recorrerPreOrdenRecursivo(arbol.raiz);
}

void recorrerPreOrdenRecursivo(const struct NodoArbolBinario* nodo) {
    if (esNodoVacio(nodo)) return;
    imprimirNodo(nodo);
    recorrerPreOrdenRecursivo(nodo->izq);
    recorrerPreOrdenRecursivo(nodo->der);
}

void recorrerEnOrden(const struct ArbolBinario& arbol) {
    recorrerEnOrdenRecursivo(arbol.raiz);
}

void recorrerEnOrdenRecursivo(const struct NodoArbolBinario* nodo) {
    if (esNodoVacio(nodo)) return;
    recorrerEnOrdenRecursivo(nodo->izq);
    imprimirNodo(nodo);
    recorrerEnOrdenRecursivo(nodo->der);
}

void recorrerPosOrden(const struct ArbolBinario& arbol) {
    recorrerPosOrdenRecursivo(arbol.raiz);
}

void recorrerPosOrdenRecursivo(const struct NodoArbolBinario* nodo) {
    if (esNodoVacio(nodo)) return;
    recorrerPosOrdenRecursivo(nodo->izq);
    recorrerPosOrdenRecursivo(nodo->der);
    imprimirNodo(nodo);
}

// Numero de hojas, nodos y altura
int numeroDeHojas(const struct ArbolBinario& arbol) {
    return numeroDeHojasRecursivo(arbol.raiz);
}

int numeroDeHojasRecursivo(const struct NodoArbolBinario* nodo) {
    if (esNodoVacio(nodo)) return 0;
    if (esNodoVacio(nodo->izq) and esNodoVacio(nodo->der)) return 1;
    int numHojasIzq = numeroDeHojasRecursivo(nodo->izq);
    int numHojasDer = numeroDeHojasRecursivo(nodo->der);
    return numHojasIzq + numHojasDer;
}

int numeroDeNodos(const struct ArbolBinario& arbol) {
    return numeroDeNodosRecursivo(arbol.raiz);
}

int numeroDeNodosRecursivo(const struct NodoArbolBinario* nodo) {
    if (esNodoVacio(nodo)) return 0;
    int numNodosIzq = numeroDeNodosRecursivo(nodo->izq);
    int numNodosDer = numeroDeNodosRecursivo(nodo->der);
    return 1 + numNodosIzq + numNodosDer;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int altura(const struct ArbolBinario& arbol) {
    return alturaRecursivo(arbol.raiz);
}

int alturaRecursivo(const struct NodoArbolBinario* nodo) {
    if (esNodoVacio(nodo)) return 0;
    if (esNodoVacio(nodo->izq) and esNodoVacio(nodo->der)) return 1;
    int alturaIzq = alturaRecursivo(nodo->izq);
    int alturaDer = alturaRecursivo(nodo->der);
    return 1 + max(alturaIzq, alturaDer);
}

bool esEquilibrado(const struct ArbolBinario& arbol) {
    return esEquilibradoRecursivo(arbol.raiz);
}

bool esEquilibradoRecursivo(const struct NodoArbolBinario* nodo) {
    if (esNodoVacio(nodo)) return true;
    int alturaIzq = alturaRecursivo(nodo->izq);
    int alturaDer = alturaRecursivo(nodo->der);
    int diferencia = abs(alturaIzq - alturaDer);
    return diferencia <= 1 and esEquilibradoRecursivo(nodo->izq)
        and esEquilibradoRecursivo(nodo->der);
}

void destruir(struct ArbolBinario& arbol) {
    destruirRecursivo(arbol.raiz);
    arbol.raiz = nullptr;
}

void destruirRecursivo(struct NodoArbolBinario* nodo) {
    if (esNodoVacio(nodo)) return;
    destruirRecursivo(nodo->izq);
    destruirRecursivo(nodo->der);
    delete nodo;
}
