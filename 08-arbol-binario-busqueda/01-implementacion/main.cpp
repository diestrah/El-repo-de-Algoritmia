#include "BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.h"
#include <iostream>
using namespace std;

int main() {
    // Creación del árbol
    ArbolBinarioBusqueda arbol;
    construir(arbol);
    insertar(arbol, {100});
    insertar(arbol, {50});
    insertar(arbol, {25});
    insertar(arbol, {75});
    insertar(arbol, {150});
    insertar(arbol, {125});
    insertar(arbol, {200});
    recorrerEnOrden(arbol);
    cout << endl;

    // Funciones min y max
    NodoArbolBinarioBusqueda* min = minimoArbol(arbol.raiz);
    cout << min->elemento.num << " es el menor elemento del arbol" << endl;
    NodoArbolBinarioBusqueda* max = maximoArbol(arbol.raiz);
    cout << max->elemento.num << " es el mayor elemento del arbol" << endl;

    // ¿existe 75?
    bool existe75 = buscar(arbol, {75});
    cout << "Existe 75? :";
    existe75 ? cout << "SI" : cout << "NO";
    cout << endl;
    // ¿Existe 20?
    bool existe20 = buscar(arbol, {20});
    cout << "Existe 20? :";
    existe20 ? cout << "SI" : cout << "NO";
    cout << endl;

    return 0;
}
