#include <iostream>
using namespace std;
#include "Funciones.h"

int main() {
    ArbolBinarioBusqueda arbol;
    construir(arbol);
    insertar(arbol, {10});
    insertar(arbol, {8});
    insertar(arbol, {12});
    insertar(arbol, {4});
    insertar(arbol, {9});
    insertar(arbol, {14});
    insertar(arbol, {1});
    insertar(arbol, {6});
    insertar(arbol, {5});
    insertar(arbol, {13});

    // Solución recursiva:
    recorrerPosOrden(arbol);
    cout << endl;

    // Solución iterativa:
    recorrerPosOrdenIterativo(arbol);

    return 0;
}