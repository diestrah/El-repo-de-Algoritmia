/*
 *  Autor : Naim Diestra
 *  Fecha : 28/09/2026
 */

#include <iostream>
using namespace std;

#include "BibliotecaListas/Lista.h"
#include "BibliotecaListas/FuncionesLista.h"
#include "funciones.h"

int main() {
    Lista lista;
    construirLista(lista);
    insertarAlFinal(lista, {7});
    insertarAlFinal(lista, {12});
    insertarAlFinal(lista, {8});
    insertarAlFinal(lista, {6});
    insertarAlFinal(lista, {5});
    insertarAlFinal(lista, {86});
    insertarAlFinal(lista, {2});
    cout << "Lista original: ";
    imprimirLista(lista);

    bubbleSort(lista);
    cout << "Lista ordenada: ";
    imprimirLista(lista);

    return 0;
}