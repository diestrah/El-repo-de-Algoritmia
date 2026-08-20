/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   09/08/2026
 *
 *  Descripción:
 *  Este programa implementa una función que intercambia los
 *  nodos inicial y final de una lista.
 *
 *  Restricciones:
 *  No se deben crear nuevos nodos ni intercambiar sus datos.
 *  La solución debe realizarse modificando los enlaces entre nodos.
 */

#include <iostream>
using namespace std;

#include "funciones.h"
#include "BibliotecaListas/FuncionesLista.h"

int main() {
    // Caso 1: lista con dos elementos
    Lista lista1;
    construirLista(lista1);
    // Insertamos los datos en la lista1
    insertarAlInicio(lista1, {4});
    insertarAlInicio(lista1, {6});
    cout << "Lista 1: " << endl;
    // Mostramos la lista1 inicial
    imprimirLista(lista1);
    // Realizamos el intercambio de nodos
    intercambiarPrimerYUltimoNodo(lista1);
    // Mostramos lista1 final
    imprimirLista(lista1);


    // Caso 2: lista con más de dos elementos
    Lista lista2;
    construirLista(lista2);
    // Insertamos los datos en lista2
    insertarAlInicio(lista2, {22});
    insertarAlInicio(lista2, {23});
    insertarAlInicio(lista2, {24});
    insertarAlInicio(lista2, {27});
    insertarAlInicio(lista2, {29});
    cout << "\nLista 2:" << endl;
    // Mostramos la lista inicial
    imprimirLista(lista2);
    // Realizamos el intercambio
    intercambiarPrimerYUltimoNodo(lista2);
    // Mostramos la lista final
    imprimirLista(lista2);

    return 0;
}
