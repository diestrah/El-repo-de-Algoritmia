#ifndef INC_01_IMPLEMENTACION_FUNCIONESARBOLBINARIO_H
#define INC_01_IMPLEMENTACION_FUNCIONESARBOLBINARIO_H

#include "ArbolBinario.h"

void construir(struct ArbolBinario& arbol);
bool esArbolVacio(const struct ArbolBinario& arbol);
bool esNodoVacio(const struct NodoArbolBinario* nodo);

// Plantar árbol
void plantarArbolBinario(struct ArbolBinario& arbol, struct ArbolBinario& izq,
                         const struct ElementoArbolBinario& elemento, struct ArbolBinario& der);
void plantarNodoArbolBinario(struct NodoArbolBinario*& nodo, struct NodoArbolBinario* izq,
                             const struct ElementoArbolBinario& elemento, struct NodoArbolBinario* der);

// Impresión
void imprimirNodo(const struct NodoArbolBinario* nodo);

// Recorridos
void recorrerPreOrden(const struct ArbolBinario& arbol);
void recorrerPreOrdenRecursivo(const struct NodoArbolBinario* nodo);
void recorrerEnOrden(const struct ArbolBinario& arbol);
void recorrerEnOrdenRecursivo(const struct NodoArbolBinario* nodo);
void recorrerPosOrden(const struct ArbolBinario& arbol);
void recorrerPosOrdenRecursivo(const struct NodoArbolBinario* nodo);

// Numero de hojas, nodos y altura
int numeroDeHojas(const struct ArbolBinario& arbol);
int numeroDeHojasRecursivo(const struct NodoArbolBinario* nodo);
int numeroDeNodos(const struct ArbolBinario& arbol);
int numeroDeNodosRecursivo(const struct NodoArbolBinario* nodo);
int altura(const struct ArbolBinario& arbol);
int alturaRecursivo(const struct NodoArbolBinario* nodo);
int max(int a, int b);

// Funciones de equilibrio
bool esEquilibrado(const struct ArbolBinario& arbol);
bool esEquilibradoRecursivo(const struct NodoArbolBinario* nodo);

// Destruir arbol (recorrido en posOrden)
void destruir(struct ArbolBinario& arbol);
void destruirRecursivo(struct NodoArbolBinario* nodo);

#endif //INC_01_IMPLEMENTACION_FUNCIONESARBOLBINARIO_H
