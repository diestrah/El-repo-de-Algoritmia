/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   08/08/2026
 *
 *  Descripción del problema:
 *  Se tiene una lista con datos desordenados. El objetivo del programa
 *  es ordenar esta lista. Para ello, no se permite manipular los nodos.
 *  Solo se debe trabajar con la parte elemento del nodo.
 *
 */

#include "funciones.h"
#include "BibliotecaListas/FuncionesLista.h"

int main() {
    Lista lista;
    construirLista(lista);
    // Inserción de los datos
    insertarAlInicio(lista, {2});
    insertarAlInicio(lista, {86});
    insertarAlInicio(lista, {5});
    insertarAlInicio(lista, {6});
    insertarAlInicio(lista, {8});
    insertarAlInicio(lista, {12});
    insertarAlInicio(lista, {7});
    // Impresión antes de ordenarlo
    imprimirLista(lista);
    // ordenamos los datos de la lista
    ordenarAscendenteDatosLista(lista);
    // Impresión luego de ordenarlo
    imprimirLista(lista);

    return 0;
}
