/*
 *  Autor : Naim Diestra
 *  Fecha : 27/09/2026
 */

#include <iostream>
using namespace std;

#include "BibliotecaListas/Lista.h"
#include "BibliotecaListas/FuncionesLista.h"
#include "funciones.h"

int main() {
    Lista lista1;
    construirLista(lista1);
    insertarAlFinal(lista1, {1});
    insertarAlFinal(lista1, {3});
    insertarAlFinal(lista1, {5});
    insertarAlFinal(lista1, {7});
    insertarAlFinal(lista1, {9});
    cout << "Lista 1: ";
    imprimirLista(lista1);

    Lista lista2;
    construirLista(lista2);
    insertarAlFinal(lista2, {2});
    insertarAlFinal(lista2, {4});
    insertarAlFinal(lista2, {6});
    cout << "Lista 2: ";
    imprimirLista(lista2);

    Lista listaIntercalada;
    construirLista(listaIntercalada);
    intercalarLista(listaIntercalada, lista1, lista2);
    cout << "Lista intercalada: ";
    imprimirLista(listaIntercalada);

    return 0;
}