/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   21/08/2026
 *
 *  Descripción:
 *  Este programa implementa el recorrido por niveles inverso de un árbol
 *  binario de búsqueda de forma iterativa.
 *
 *  ¿Qué es un recorrido por nivelesinverso?
 *  Es un recorrido que visita los nodos del árbol nivel por nivel,
 *  de izquierda a derecha .
 *
 *  Dado el árbol:
 *
 *                    10                 <- 1er nivel
 *                  /    \
 *                 8      12              <- 2do nivel
 *                / \       \
 *               4   9       14           <- 3er nivel
 *              / \         /
 *             1   6       13             <- 4to nivel
 *                /
 *               5                        <- 5to nivel
 *
 *  El recorrido se realiza de la siguiente forma:
 *
 *      5 → 1 → 6 → 13 → 4 → 9 → 14 → 8 → 12 → 10
 *
 *  Para implementar este recorrido de forma iterativa se utiliza
 *  una cola, debido a que los nodos deben procesarse en el mismo
 *  orden en que son descubiertos y además se debe utilizar una pila
 *  para invertir su orden.
 *
 *  Restricciones:
 *  - No se puede utilizar recursión.
 *  - Se deben manipular directamente los nodos del árbol.
 */

#include "BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.h"
#include "Funciones.h"

int main() {
    ArbolBinarioBusqueda arbol;
    construir(arbol);
    insertar(arbol, {10});
    insertar(arbol, {8});
    insertar(arbol, {12});
    insertar(arbol, {4});
    insertar(arbol, {9});
    insertar(arbol, {14});
    insertar(arbol, {1});
    insertar(arbol, {6});
    insertar(arbol, {5});
    insertar(arbol, {13});

    recorrerPorNivelesInverso(arbol);

    return 0;
}