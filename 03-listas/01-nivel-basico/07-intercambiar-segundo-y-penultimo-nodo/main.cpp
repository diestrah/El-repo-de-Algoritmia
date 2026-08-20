/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   09/08/2026
 *
 *  Descripción:
 *  Este programa implementa una función que intercambia los nodos
 *  segundo y penúltimo de una lista.
 *
 *  Restricciones:
 +  No se deben crear nuevos nodos ni intercambiar sus datos.
 *  La solución debe realizarse modificando los enlaces entre nodos.
 */

#include <iostream>
using namespace std;

#include "funciones.h"
#include "BibliotecaListas/FuncionesLista.h"

int main() {
    // Ejemplo con una lista con 4 nodos
    Lista lista1;
    construirLista(lista1);
    cout << "Lista 1:" << endl;
    // Insertamos los datos
    insertarAlFinal(lista1, {3});
    insertarAlFinal(lista1, {7});
    insertarAlFinal(lista1, {5});
    insertarAlFinal(lista1, {9});
    // Mostramos la lista inicial
    imprimirLista(lista1);
    // Realizamos el intercambio
    intercambiarSegundoYPenultimoNodo(lista1);
    // Mostramos la lista final
    imprimirLista(lista1);

    // Ejemplo con una lista con más de 4 nodos
    Lista lista2;
    construirLista(lista2);
    cout << "\nLista 2:" << endl;
    // Insertamos los datos
    insertarAlFinal(lista2, {45});
    insertarAlFinal(lista2, {48});
    insertarAlFinal(lista2, {52});
    insertarAlFinal(lista2, {59});
    insertarAlFinal(lista2, {67});
    insertarAlFinal(lista2, {70});
    // Mostramos la lista inicial
    imprimirLista(lista2);
    // Realizamos el intercambio
    intercambiarSegundoYPenultimoNodo(lista2);
    // Mostramos la lista final
    imprimirLista(lista2);

    return 0;
}