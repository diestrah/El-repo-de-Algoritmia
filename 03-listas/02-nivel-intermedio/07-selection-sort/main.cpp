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
    insertarAlFinal(lista, {86});
    insertarAlFinal(lista, {2});
    cout << "Lista original: ";
    imprimirLista(lista);

    selectionSort(lista);
    cout << "Lista ordenada: ";
    imprimirLista(lista);

    return 0;
}