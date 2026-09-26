/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   22/08/2026
 *
 *  Descripción:
 *  Este programa implementa el recorrido de frontera de un árbol
 *  binario de búsqueda de forma iterativa.
 *
 *  ¿Qué es un recorrido de frontera?
 *  Es un recorrido que visita los nodos que forman la frontera
 *  exterior del árbol.
 *
 *  La frontera se recorre en el siguiente orden:
 *  1. La raíz.
 *  2. El borde izquierdo, sin incluir las hojas.
 *  3. Las hojas, de izquierda a derecha.
 *  4. El borde derecho, sin incluir las hojas y de abajo hacia arriba.
 *
 *  Dado el árbol:
 *
 *                    10                 <- 1er nivel
 *                  /    \
 *                 8      12              <- 2do nivel
 *                / \       \
 *               4   9       14           <- 3er nivel
 *              / \         /  \
 *             1   6       13   15          <- 4to nivel
 *
 *  El recorrido se realiza de la siguiente forma:
 *
 *      10 → 8 → 4 → 1 → 6 → 9 → 13 → 15 → 14 → 12
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
    insertar(arbol, {13});
    insertar(arbol, {15});

    recorrerFrontera(arbol);

    return 0;
}
