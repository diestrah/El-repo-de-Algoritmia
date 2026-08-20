/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   09/08/2026
 *
 *  Descripción:
 *  Este programa implementa una función que imprime una lista
 *  utilizando recursión.
 */

#include <iostream>
using namespace std;

#include "funciones.h"
#include "BibliotecaListas/FuncionesLista.h"

int main() {
    Lista lista;
    construirLista(lista);

    // Insertamos los datos
    insertarAlFinal(lista, {57});
    insertarAlFinal(lista, {62});
    insertarAlFinal(lista, {63});
    insertarAlFinal(lista, {65});
    insertarAlFinal(lista, {68});
    insertarAlFinal(lista, {72});

    // Impresión iterativa
    imprimirLista(lista);

    // Impresión recursiva
    imprimirListaRecursiva(lista);
    cout << endl;

    return 0;
}