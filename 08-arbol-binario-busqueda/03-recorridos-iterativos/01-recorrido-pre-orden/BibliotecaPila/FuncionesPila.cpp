#include "FuncionesPila.h"
#include <iostream>
using namespace std;

//  construir: inicializa la pila
void construir(Pila& pila) {
    pila.inicio = nullptr;
    pila.longitud = 0;
}

//  isEmpty: consulta si la pila está vacía
bool esPilaVacia(const Pila& pila) {
    return pila.inicio == nullptr;
}

//  size: vemos cuantos elementos tiene la pila
int longitud(const Pila& pila) {
    return pila.longitud;
}

//  top: vemos el elemento superior de la pila (no lo extrae)
NodoArbolBinarioBusqueda* top(const Pila& pila) {
    if (esPilaVacia(pila)) {
        cerr << "ERROR: La pila está vacia, por ende, no tiene cima." << endl;
        exit(EXIT_FAILURE);
    }
    return pila.inicio->elemento;
}

//  push: agrega un elemento a la parte superior de la pila
void push(Pila& pila, NodoArbolBinarioBusqueda* elemento) {
    NodoPila* nuevo = new NodoPila();
    nuevo->elemento = elemento;
    nuevo->siguiente = pila.inicio;
    pila.inicio = nuevo;
    pila.longitud++;
}

//  pop: extrae el elemento superior de la pila
NodoArbolBinarioBusqueda* pop(struct Pila& pila) {
    NodoPila* sale = pila.inicio;
    NodoArbolBinarioBusqueda* elemento = sale->elemento;
    pila.inicio = pila.inicio->siguiente;
    pila.longitud--;
    delete sale;
    return elemento;
}

//  imprimir: recorre la pila como una lista (error de concepto), el curso lo permite
void imprimir(const Pila& pila) {
    if (esPilaVacia(pila)) {
        cerr << "ERROR: La pila está vacía. No se puede imprimir." << endl;
        return;
    }
    NodoPila* actual = pila.inicio;
    bool imprimeLaCabeza = true;
    cout << '[';
    while (actual) {
        if (not imprimeLaCabeza) cout << ", ";
        imprimeLaCabeza = false;
        cout << actual->elemento->elemento.num;
        actual = actual->siguiente;
    }
    cout << ']' << endl;
}

void destruir(Pila& pila) {
    // Nodo que recorrerá toda la pila
    NodoPila* actual = pila.inicio;
    while (actual) {
        // Guardamos el nodo a eliminar en un nodo auxiliar
        NodoPila* elimina = actual;
        actual = actual->siguiente; // conservamos el recorrido
        delete elimina; // eliminamos el nodo
    }
    // inicializamos otra vez la pila
    pila.inicio = nullptr;
    pila.longitud = 0;
}
