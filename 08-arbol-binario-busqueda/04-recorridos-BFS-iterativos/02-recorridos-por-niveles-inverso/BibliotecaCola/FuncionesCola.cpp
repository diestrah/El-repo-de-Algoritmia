#include <iostream>
#include "FuncionesCola.h"
using namespace std;

// construir: inicializa la cola
void construir(struct Cola& cola) {
    cola.inicio = nullptr;
    cola.fin = nullptr;
    cola.longitud = 0;
}

// isEmpty: indica si la cola está vacía
bool esColaVacia(const struct Cola& cola) {
    return cola.inicio == nullptr;
}

// size: indica la cantidad de elementos que contiene la cola
int longitud(const struct Cola& cola) {
    return cola.longitud;
}

// push_back: inserta el elemento al final de la cola
void encolar(struct Cola& cola, NodoArbolBinarioBusqueda* elemento) {
    struct NodoCola* nuevo = new NodoCola{};
    nuevo->elemento = elemento;
    // Evaluamos 2 casos: cola vacía, y cola con datos
    if (esColaVacia(cola))
        cola.inicio = nuevo;
    else
        cola.fin->siguiente = nuevo;
    cola.fin = nuevo;
    cola.longitud++;
}

// pop: extrae el elemento inicial de la cola (retorna el elemento y elimina el nodo)
struct NodoArbolBinarioBusqueda* desencolar(struct Cola& cola) {
    struct NodoCola* sale = cola.inicio;
    struct NodoArbolBinarioBusqueda* elemento = sale->elemento;
    cola.inicio = cola.inicio->siguiente;
    cola.longitud--;
    delete sale;
    return elemento;
}

// Imprimir: usa un nodo que recorre la cola e imprime sus elementos (error de concepto).
// El curso lo permite solo en esta función.
void imprimir(const struct Cola& cola) {
    if (esColaVacia(cola)) {
        cerr << "ERROR: La cola esta vacia, por ende, no se puede mostrar." << endl;
        return;
    }
    struct NodoCola* actual = cola.inicio;

    bool esPrimerDato = true;
    cout << '[';

    while (actual) {
        if (not esPrimerDato) cout << ", ";
        esPrimerDato = false;
        cout << actual->elemento->elemento.num;
        actual = actual->siguiente;
    }
    cout << ']' << endl;
}
