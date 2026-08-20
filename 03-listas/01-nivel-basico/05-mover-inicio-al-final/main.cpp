/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   09/08/2026
 *
 *  Descripción:
 *  Este programa implementa una función que mueve el nodo inicial
 *  de una lista hacia el final de esta lista.
 *
 *  Restricciones:
 *  No se pueden crear nuevos nodos ni intercambiar sus datos.
 *  La solución debe realizarse manipulando los enlaces entre los nodos.
 */

#include "funciones.h"
#include "BibliotecaListas/FuncionesLista.h"

int main() {
    Lista lista;
    construirLista(lista);
    // Insertamos los datos
    insertarAlInicio(lista, {12});
    insertarAlInicio(lista, {13});
    insertarAlInicio(lista, {14});
    insertarAlInicio(lista, {15});
    insertarAlInicio(lista, {16});
    // Mostramos la lista inicial
    imprimirLista(lista);
    // Movemos el nodo inicial al final
    moverInicioAlFinal(lista);
    // Mostramos la lista final
    imprimirLista(lista);

    return 0;
}
