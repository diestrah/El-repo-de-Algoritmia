/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   22/08/2026
 *
 *  Descripción:
 *  Este programa implementa el recorrido por niveles en zigzag de un árbol
 *  binario de búsqueda de forma iterativa.
 *
 *  ¿Qué es un recorrido por niveles en zigzag?
 *  Es una variante del recorrido por niveles en la que la dirección
 *  del recorrido cambia en cada nivel.
 *  El primer nivel se recorre de izquierda a derecha, el segundo
 *  de derecha a izquierda, el tercero de izquierda a derecha, y
 *  así sucesivamente.
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
 *  El recorrido zigzag se realiza de la siguiente forma:
 *
 *      10 → 12 → 8 → 4 → 9 → 14 → 13 → 6 → 1 → 5
 *
 *
 *  Restricciones:
 *  - No se puede utilizar recursión.
 *  - Se deben manipular directamente los nodos del árbol.
 *  - Deben utilizar como máximo 2 TAD.
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

    recorrerPorNivelesZigZag(arbol);
    recorrerPorNivelesZigZagv2(arbol);

    return 0;
}