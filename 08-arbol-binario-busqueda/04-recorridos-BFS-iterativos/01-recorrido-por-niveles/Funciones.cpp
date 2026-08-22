#include <iostream>
using namespace std;
#include "Funciones.h"

#include "BibliotecaCola/Cola.h"
#include "BibliotecaCola/FuncionesCola.h"
#include "BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.h"

void recorrerPorNiveles(const ArbolBinarioBusqueda& arbol) {
    NodoArbolBinarioBusqueda* pArbol = nullptr;
    Cola cola;
    construir(cola);

    // Encolamos la raiz del árbol binario
    if (arbol.raiz)
        encolar(cola, arbol.raiz);

    while (!esColaVacia(cola)) {

        // Desencolamos el primer nodo de la cola y lo procesamos
        pArbol = desencolar(cola);
        imprimirNodo(pArbol);

        // Encolamos el hijo izquierdo y luego el derecho
        // para mantener el recorrido de izquierda a derecha
        if (pArbol->izq)
            encolar(cola, pArbol->izq);
        if (pArbol->der)
            encolar(cola, pArbol->der);
    }
    cout << endl;
}
