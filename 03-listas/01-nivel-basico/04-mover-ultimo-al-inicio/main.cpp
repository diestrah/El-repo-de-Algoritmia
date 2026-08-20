/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   09/08/2026
 *
 *  Descripción:
 *  Este programa implementa una función que mueve el último
 *  nodo de una lista al inicio de la misma.
 *
 *  Restricciones:
 *  No se deben crear nuevos nodos ni intercambiar sus datos.
 *  La solución debe manipular exclusivamente enlaces entre los nodos.
 */

#include "funciones.h"
#include "BibliotecaListas/FuncionesLista.h"

int main() {
    Lista lista;
    construirLista(lista);
    // Insertamos datos
    insertarAlInicio(lista, {12});
    insertarAlInicio(lista, {15});
    insertarAlInicio(lista, {16});
    insertarAlInicio(lista, {17});
    insertarAlInicio(lista, {18});
    insertarAlInicio(lista, {19});
    // Mostramos la lista inicial
    imprimirLista(lista);
    // Movemos el ultimo nodo al inicio
    moverUltimoAlInicio(lista);
    // Mostramos la lista final
    imprimirLista(lista);

    return 0;
}
