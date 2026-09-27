/*
 *  Autor : Naim Diestra
 *  Fecha : 27/09/2026
 *  Descripcion :
 *  Es el clásico algoritmo de invertir lista.
 *  Posee pocas instrucciones, pero captarlo puede ser complicado.
 */

#include <iostream>
using namespace std;

#include "BibliotecaListas/Lista.h"
#include "BibliotecaListas/FuncionesLista.h"
#include "funciones.h"

int main() {
    Lista lista;
    construirLista(lista);
    insertarAlFinal(lista, {11});
    insertarAlFinal(lista, {22});
    insertarAlFinal(lista, {33});
    insertarAlFinal(lista, {44});
    insertarAlFinal(lista, {55});
    cout << "Lista original: ";
    imprimirLista(lista);

    invertirLista(lista);
    cout << "Lista invertida: ";
    imprimirLista(lista);

    return 0;
}