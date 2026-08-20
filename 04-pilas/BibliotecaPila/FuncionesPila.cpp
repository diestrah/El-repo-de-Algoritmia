#include "FuncionesPila.h"
#include <iostream>
using namespace std;

//  construir: inicializa la pila
void construir(struct Pila& pila) {
    pila.inicio = nullptr;
    pila.longitud = 0;
}

//  isEmpty: consula si la pila está vacía
bool esPilaVacia(const struct Pila& pila) {
    return pila.inicio == nullptr;
}

//  size: vemos cuantos elementos tiene la pila
int longitud(const struct Pila& pila) {
    return pila.longitud;
}

//  top: vemos el elemento superior de la pila (no lo extrae)
struct ElementoPila top(const struct Pila& pila) {
    if (esPilaVacia(pila)) {
        cerr << "ERROR: La pila está vacia, por ende, no tiene cima." << endl;
        exit(EXIT_FAILURE);
    }
    return pila.inicio->elemento;
}

//  push: agrega un elemento a la parte superior de la pila
void push(struct Pila& pila, const struct ElementoPila& elemento) {
    struct NodoPila* nuevo = new NodoPila();
    nuevo->elemento = elemento;
    nuevo->siguiente = pila.inicio;
    pila.inicio = nuevo;
    pila.longitud++;
}

//  pop: extrae el elemento superior de la pila
struct ElementoPila pop(struct Pila& pila) {
    struct NodoPila* sale = pila.inicio;
    struct ElementoPila elemento = sale->elemento;
    pila.inicio = pila.inicio->siguiente;
    delete sale;
    pila.longitud--;
    return elemento;
}

//  imprimir: recorre la pila como una lista (error de concepto), el curso lo permite
void imprimir(const struct Pila& pila) {
    if (esPilaVacia(pila)) {
        cerr << "ERROR: La pila está vacía. No se puede imprimir." << endl;
        return;
    }
    struct NodoPila* actual = pila.inicio;
    bool imprimeLaCabeza = true;
    cout << '[';
    while (actual) {
        if (not imprimeLaCabeza) cout << ", ";
        imprimeLaCabeza = false;
        cout << actual->elemento.num;
        actual = actual->siguiente;
    }
    cout << ']' << endl;
}

void destruir(struct Pila& pila) {
    // Nodo que recorrerá toda la pila
    struct NodoPila* actual = pila.inicio;
    while (actual) {
        // Guardamos el nodo a eliminar en un nodo auxiliar
        struct NodoPila* elimina = actual;
        actual = actual->siguiente; // conservamos el recorrido
        delete elimina; // eliminamos el nodo
    }
    // inicializamos otra vez la pila
    pila.inicio = nullptr;
    pila.longitud = 0;
}
