#include <iostream>
using namespace std;

#include "BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.h"
#include "BibliotecaCola/FuncionesCola.h"
#include "BibliotecaPila/FuncionesPila.h"
#include "Funciones.h"


void recorrerPorNivelesZigZag(const ArbolBinarioBusqueda& arbol) {
    NodoArbolBinarioBusqueda* pArbol = nullptr;

    // La pilaPadres almacena los nodos del nivel actual
    Pila pilaPadres;
    construir(pilaPadres);

    // La pilaHijos almacena los nodos del siguiente nivel
    Pila pilaHijos;
    construir(pilaHijos);

    bool apilarIzqDer = true;

    if (arbol.raiz)
        push(pilaPadres, arbol.raiz);

    while (!esPilaVacia(pilaPadres)) {
        pArbol = pop(pilaPadres);
        imprimirNodo(pArbol);

        if (apilarIzqDer) {
            // Los hijos se encolan de izquierda a derecha
            if (pArbol->izq)
                push(pilaHijos, pArbol->izq);
            if (pArbol->der)
                push(pilaHijos, pArbol->der);
        }
        else {
            // Los hijos se encolan de derecha a izquierda
            if (pArbol->der)
                push(pilaHijos, pArbol->der);
            if (pArbol->izq)
                push(pilaHijos, pArbol->izq);
        }

        // Se terminó de recorrer el nivel
        if (esPilaVacia(pilaPadres)) {
            // La pila de los hijos pasa a ser la pila del nivel actual
            swap(pilaPadres, pilaHijos);

            // Cambiamos el orden
            apilarIzqDer = !apilarIzqDer;
        }
    }
    cout << endl;
}

void swap(Pila& a, Pila& b) {
    Pila temp = a;
    a = b;
    b = temp;
}

void recorrerPorNivelesZigZagv2(const ArbolBinarioBusqueda& arbol) {
    NodoArbolBinarioBusqueda* pArbol = nullptr;

    // La pila almacena los nodos del nivel que estamos recorriendo
    Pila pila;
    construir(pila);

    // La cola almacena los nodos del siguiente nivel
    Cola cola;
    construir(cola);

    bool encolarIzqDer = true;

    if (arbol.raiz)
        push(pila, arbol.raiz);

    while (!esPilaVacia(pila)) {
        pArbol = pop(pila);
        imprimirNodo(pArbol);

        if (encolarIzqDer) {
            // Los hijos se encolan de izquierda a derecha
            if (pArbol->izq)
                encolar(cola, pArbol->izq);
            if (pArbol->der)
                encolar(cola, pArbol->der);
        }
        else {
            // Los hijos se encolan de derecha a izquierda
            if (pArbol->der)
                encolar(cola, pArbol->der);
            if (pArbol->izq)
                encolar(cola, pArbol->izq);
        }

        // Terminamos de recorrer el nivel actual
        if (esPilaVacia(pila)) {
            // Pasamos los nodos de la cola a la pila
            // Al hacerlo, invertimos su orden
            while (!esColaVacia(cola)) {
                NodoArbolBinarioBusqueda* elemento = desencolar(cola);
                push(pila, elemento);
            }
            // Cambiamos la dirección del siguiente nivel
            encolarIzqDer = !encolarIzqDer;
        }
    }
    cout << endl;
}
