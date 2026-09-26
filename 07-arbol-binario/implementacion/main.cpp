#include "BibliotecaArbolBinario/FuncionesArbolBinario.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    struct ArbolBinario arbol;
    struct ArbolBinario izq, der;
    struct ArbolBinario arbol1, arbol2, arbol3, arbol4;
    struct ArbolBinario vacio; // estará vacío
    construir(vacio);

    construir(arbol1);
    construir(arbol2);
    construir(arbol3);
    construir(arbol4);
    plantarArbolBinario(arbol1, vacio, {10}, vacio);
    plantarArbolBinario(arbol2, vacio, {40}, vacio);
    plantarArbolBinario(arbol3, vacio, {60}, vacio);
    plantarArbolBinario(arbol4, vacio, {100}, vacio);

    construir(izq);
    construir(der);
    plantarArbolBinario(izq, arbol1, {30}, arbol2);
    plantarArbolBinario(der, arbol3, {80}, arbol4);

    construir(arbol);
    plantarArbolBinario(arbol, izq, {50}, der);

    // Impresión de los recorridos:
    cout << left << setw(25) << "Recorrido en pre-orden: ";
    recorrerPreOrden(arbol);
    cout << endl;
    cout << left << setw(25) << "Recorrido en orden:";
    recorrerEnOrden(arbol);
    cout << endl;
    cout << left << setw(25) << "Recorrido en pos orden:";
    recorrerPosOrden(arbol);
    cout << endl << endl;

    // Numero de hojas, nodos y altura
    int numHojas = numeroDeHojas(arbol);
    cout << "Numero de hojas: " << numHojas << endl;
    int numNodos = numeroDeNodos(arbol);
    cout << "Numero de nodos: " << numNodos << endl;
    int alturaArbol = altura(arbol);
    cout << "Altura del arbol: " << alturaArbol << endl << endl;

    // Función de equilibrio
    bool arbolEquilibrado = esEquilibrado(arbol);
    cout << "¿El arbol esta equilibrado? : " ;
    arbolEquilibrado ? cout << "Si" : cout << "No";
    cout << endl;

    // destruimos
    destruir(arbol);
    bool arbolVacio = esArbolVacio(arbol);
    cout << "¿Es arbol vacio? : ";
    arbolVacio ? cout << "SI" : cout << "NO";
    cout << endl;

    return 0;
}
