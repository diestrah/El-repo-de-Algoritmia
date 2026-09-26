/*
 *  Autor : Naim Diestra
 *  Fecha : 26/09/2026
 *  Notas: Se agregaron 2 versiones de la misma función.
 *  Una está más factorizada que otra. Simple cuestión de estilo.
 *
 */
#include <iostream>
using namespace std;

#include "BibliotecaListas/Lista.h"
#include "BibliotecaListas/FuncionesLista.h"
#include "funciones.h"

int main() {
    Lista lista1;
    construirLista(lista1);
    insertarAlFinal(lista1, {11});
    insertarAlFinal(lista1, {15});
    insertarAlFinal(lista1, {17});
    insertarAlFinal(lista1, {20});
    cout << "Lista 1: ";
    imprimirLista(lista1);

    Lista lista2;
    construirLista(lista2);
    insertarAlFinal(lista2, {12});
    insertarAlFinal(lista2, {14});
    insertarAlFinal(lista2, {16});
    insertarAlFinal(lista2, {22});
    cout << "Lista 2: ";
    imprimirLista(lista2);

    Lista listaFusionada;
    construirLista(listaFusionada);
    fusionarListasV1(listaFusionada, lista1, lista2);
    cout << "Lista fusionada: ";
    imprimirLista(listaFusionada);

    return 0;
}