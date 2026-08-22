#include "Funciones.h"
#include <iostream>
using namespace std;

#include "BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.h"
#include "BibliotecaCola/FuncionesCola.h"
#include "BibliotecaPila/FuncionesPila.h"

void recorrerPorNivelesInverso(const ArbolBinarioBusqueda& arbol) {
    NodoArbolBinarioBusqueda* pArbol = nullptr;
    Cola cola;
    construir(cola);
    Pila pila;
    construir(pila);

    // Encolamos la raíz
    if (arbol.raiz)
        encolar(cola, arbol.raiz);

    while (!esColaVacia(cola)) {
        // Desencolamos el último nodo y lo apilamos
        pArbol = desencolar(cola);
        push(pila, pArbol);

        // Guardamos los nodos derecha e izquierda
        if (pArbol->der)
            encolar(cola, pArbol->der);
        if (pArbol->izq)
            encolar(cola, pArbol->izq);
    }
    // Una vez se terminó de almacenar el árbol en la pila,
    // se procesan todos los nodos
    while (!esPilaVacia(pila)) {
        imprimirNodo(pop(pila));
    }
    cout << endl;
}
