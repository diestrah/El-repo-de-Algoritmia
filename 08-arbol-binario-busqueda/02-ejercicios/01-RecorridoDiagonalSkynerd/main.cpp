#include <iostream>
using namespace std;

#include "Bibliotecas/FuncionesAuxiliares.h" // <- todo está aquí

int main() {
    // Construcción del arbol
    ArbolBinarioBusqueda arbol;
    construir(arbol);
    insertar(arbol, {100, 0});
    insertar(arbol, {150, 0});
    insertar(arbol, {175, 0});
    insertar(arbol, {125, 1});
    insertar(arbol, {200, 0});
    insertar(arbol, {50, 0});
    insertar(arbol, {75, 0});
    insertar(arbol, {25, 0});
    insertar(arbol, {40, 0});

    imprimirDiagonal(arbol);
    imprimirDiagonarInverso(arbol);

    return 0;
}
