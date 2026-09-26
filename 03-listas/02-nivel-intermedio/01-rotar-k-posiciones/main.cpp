/*
 * Autor : Naim Diestra
 * Fecha : 26/09/2026
 */

#include <iostream>
using namespace std;

#include "BibliotecaListas/Lista.h"
#include "BibliotecaListas/FuncionesLista.h"
#include "funciones.h"

int main() {
    Lista lista;
    construirLista(lista);
    insertarAlFinal(lista, {10});
    insertarAlFinal(lista, {20});
    insertarAlFinal(lista, {30});
    insertarAlFinal(lista, {40});
    insertarAlFinal(lista, {50});
    insertarAlFinal(lista, {60});
    insertarAlFinal(lista, {70});

    imprimirLista(lista);
    int k = 2;

    rotarLista(lista, k, false);
    imprimirLista(lista);

    rotarLista(lista, k, true);
    imprimirLista(lista);

    return 0;
}