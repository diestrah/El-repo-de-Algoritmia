/*
*  Autor   :   Naim Diestra
 *  Fecha   :   26/09/2026
 *
 *  Descripción:
 *  Este programa implementa una función que cuenta los nodos de una lista
 *  utilizando recursión.
 *
 *  Restricciones:
 *  No se utiliza iteraciones
 *  No puede utilizarse la variable lista.longitud (del struct Lista.h)
 */
#include <iostream>
using namespace std;

#include "BibliotecaListas/FuncionesLista.h"
#include "funciones.h"

int main() {
    Lista lista;
    construirLista(lista);
    // Insertamos los datos
    insertarAlFinal(lista, {122});
    insertarAlFinal(lista, {149});
    insertarAlFinal(lista, {135});
    insertarAlFinal(lista, {158});
    insertarAlFinal(lista, {101});
    insertarAlFinal(lista, {112});
    insertarAlFinal(lista, {192});
    insertarAlFinal(lista, {142});

    cout << "La lista tiene " << contarNodosLista(lista) << " nodos" << endl;

    return 0;
}