#ifndef ARBOLBINARIOBUSQUEDA_FUNCIONESARBOLBINARIOBUSQUEDA_H
#define ARBOLBINARIOBUSQUEDA_FUNCIONESARBOLBINARIOBUSQUEDA_H

#include "ArbolBinarioBusqueda.h"

// FUNCIONES ARBOL BINARIO BUSQUEDA
void insertar(struct ArbolBinarioBusqueda& arbol, const struct ElementoArbolBinarioBusqueda& elemento);
void insertarRecursivo(struct NodoArbolBinarioBusqueda*& raiz, const struct ElementoArbolBinarioBusqueda& elemento);
int comparaElementos(int elementoA, int elementoB);
bool buscar(const struct ArbolBinarioBusqueda& arbol, const struct ElementoArbolBinarioBusqueda& elemento);
bool buscarRecursivo(struct NodoArbolBinarioBusqueda* nodo, const struct ElementoArbolBinarioBusqueda& elemento);
struct NodoArbolBinarioBusqueda* minimoArbol(struct NodoArbolBinarioBusqueda* nodo);
void eliminar(struct ArbolBinarioBusqueda& arbol, const struct ElementoArbolBinarioBusqueda& elemento);
struct NodoArbolBinarioBusqueda* eliminarRecursivo(struct NodoArbolBinarioBusqueda* nodo,
                                                   const struct ElementoArbolBinarioBusqueda& elemento);
// FUNCIONES ARBOL BINARIO
void construir(ArbolBinarioBusqueda& arbol);
bool esArbolVacio(const ArbolBinarioBusqueda& arbol);
bool esNodoVacio(const NodoArbolBinarioBusqueda* nodo);
void plantarArbolBinario(ArbolBinarioBusqueda& arbol, const ArbolBinarioBusqueda& izq,
                         const ElementoArbolBinarioBusqueda& e, const ArbolBinarioBusqueda& der);
void plantarNodoArbolBinario(NodoArbolBinarioBusqueda*& nodo, NodoArbolBinarioBusqueda* izq,
                             const ElementoArbolBinarioBusqueda& elemento, NodoArbolBinarioBusqueda* der);

// Impresión
void imprimir(ArbolBinarioBusqueda& arbol);
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
int numeroNodosRecursivo(const NodoArbolBinarioBusqueda* arbol);
int altura(const ArbolBinarioBusqueda& arbol);
int alturaRecursivo(const ArbolBinarioBusqueda* nodo);


#endif //ARBOLBINARIOBUSQUEDA_FUNCIONESARBOLBINARIOBUSQUEDA_H
