#ifndef ARBOLBINARIOBUSQUEDA_FUNCIONESARBOLBINARIOBUSQUEDA_H
#define ARBOLBINARIOBUSQUEDA_FUNCIONESARBOLBINARIOBUSQUEDA_H

#include "ArbolBinarioBusqueda.h"

// Funciones de arbol binario de busqueda
void insertar(ArbolBinarioBusqueda& arbol, const ElementoArbolBinarioBusqueda& elemento);
void insertarRecursivo(NodoArbolBinarioBusqueda*& nodo, const ElementoArbolBinarioBusqueda& elemento);
bool buscar(const ArbolBinarioBusqueda& arbol, const ElementoArbolBinarioBusqueda& elemento);
bool buscarRecursivo(const NodoArbolBinarioBusqueda* nodo, const ElementoArbolBinarioBusqueda& elemento);
int compararElementos(const ElementoArbolBinarioBusqueda& a, const ElementoArbolBinarioBusqueda& b);

NodoArbolBinarioBusqueda* minimoArbol(NodoArbolBinarioBusqueda* nodo);
NodoArbolBinarioBusqueda* maximoArbol(NodoArbolBinarioBusqueda* nodo);
void eliminar(ArbolBinarioBusqueda& arbol);
void eliminarRecursivo(NodoArbolBinarioBusqueda* nodo);

/* Funciones de arbol binario */
void construir(ArbolBinarioBusqueda& arbol);
bool esArbolVacio(const ArbolBinarioBusqueda& arbol);
bool esNodoVacio(const NodoArbolBinarioBusqueda* nodo);
void plantarArbolBinario(ArbolBinarioBusqueda& arbol, const ArbolBinarioBusqueda& izq,
                         const ElementoArbolBinarioBusqueda& e, const ArbolBinarioBusqueda& der);
void plantarNodoArbolBinario(NodoArbolBinarioBusqueda*& nodo, NodoArbolBinarioBusqueda* izq,
                             const ElementoArbolBinarioBusqueda& elemento, NodoArbolBinarioBusqueda* der);

// Impresion
void imprimirNodo(NodoArbolBinarioBusqueda* nodo);

// Formas de recorrido
void recorrerPreOrden(const ArbolBinarioBusqueda& arbol);
void recorrerPreOrdenRecursivo(NodoArbolBinarioBusqueda* nodo);
void recorrerEnOrden(const ArbolBinarioBusqueda& arbol);
void recorrerEnOrdenRecursivo(NodoArbolBinarioBusqueda* nodo);
void recorrerPosOrden(const ArbolBinarioBusqueda& arbol);
void recorrerPosOrdenRecursivo(NodoArbolBinarioBusqueda* nodo);

// Contar hojas
int numeroHojas(const ArbolBinarioBusqueda& arbol);
int numeroHojasRecursivo(NodoArbolBinarioBusqueda* nodo);
int numeroNodos(const ArbolBinarioBusqueda& arbol);
int numeroNodosRecursivo(const NodoArbolBinarioBusqueda* nodo);
int max(int a, int b);
int altura(const ArbolBinarioBusqueda& arbol);
int alturaRecursivo(const NodoArbolBinarioBusqueda* nodo);


#endif //ARBOLBINARIOBUSQUEDA_FUNCIONESARBOLBINARIOBUSQUEDA_H
