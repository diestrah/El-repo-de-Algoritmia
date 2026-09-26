/*
 *  Autor : Naim Diestra
 *  Fecha : 26/09/2026
 */

#include <iostream>
using namespace std;

#include "funciones.h"
#include "BibliotecaListas/FuncionesLista.h"

int main() {
    Lista listaOriginal;
    construirLista(listaOriginal);
    insertarAlFinal(listaOriginal, {15});
    insertarAlFinal(listaOriginal, {58});
    insertarAlFinal(listaOriginal, {94});
    insertarAlFinal(listaOriginal, {77});
    insertarAlFinal(listaOriginal, {79});
    insertarAlFinal(listaOriginal, {65});
    insertarAlFinal(listaOriginal, {39});
    insertarAlFinal(listaOriginal, {46});

    Lista listaImpares, listaPares;
    construirLista(listaImpares);
    construirLista(listaPares);

    cout << "Lista original: ";
    imprimirLista(listaOriginal);

    particionarLista(listaOriginal, listaImpares, listaPares);

    cout << "Lista impares: ";
    imprimirLista(listaImpares);
    cout << "Lista pares: ";
    imprimirLista(listaPares);

    cout << endl << "Lista original: " << endl;
    imprimirLista(listaOriginal);

    return 0;
}