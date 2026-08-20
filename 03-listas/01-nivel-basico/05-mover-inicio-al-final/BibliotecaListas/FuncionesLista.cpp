#include "FuncionesLista.h"
#include <iostream>
using namespace std;

void construirLista(Lista& lista) {
    lista.inicio = nullptr;
    lista.longitud = 0;
}

bool esListaVacia(const Lista& lista) {
    return lista.inicio == nullptr;
}

int longitud(const Lista& lista) {
    return lista.longitud;
}

NodoLista* obtenerUltimoNodo(Lista& lista) {
    NodoLista* pNodo = lista.inicio;
    while (pNodo!=nullptr and pNodo->siguiente!= nullptr) {
        pNodo = pNodo->siguiente;
    }
    return pNodo;
}

void insertarAlInicio(Lista& lista, const ElementoLista& e) {
    NodoLista* nuevo = new NodoLista();
    nuevo->elemento = e;
    nuevo->siguiente = lista.inicio;
    lista.inicio = nuevo;
    lista.longitud++;
}

void insertarAlFinal(Lista& lista, const ElementoLista& e) {
    NodoLista* nuevo = new NodoLista;
    nuevo->elemento = e;
    nuevo->siguiente = nullptr;
    NodoLista* ultimo = obtenerUltimoNodo(lista);
    if (ultimo == nullptr) lista.inicio = nuevo;
    else ultimo->siguiente = nuevo;
    lista.longitud++;
}

void insertarOrdenado(Lista& lista, const ElementoLista& e) {
    NodoLista* nuevo = new NodoLista;
    nuevo->elemento = e;
    NodoLista* posterior = lista.inicio;
    NodoLista* anterior = nullptr;
    while (posterior != nullptr) {
        if (posterior->elemento.num > e.num) break;
        anterior = posterior;
        posterior = posterior->siguiente;
    }
    nuevo->siguiente = posterior;
    if (anterior == nullptr) lista.inicio = nuevo;
    else anterior->siguiente = nuevo;
    lista.longitud++;
}

void imprimirLista(const Lista& lista) {
    NodoLista* pNodo = lista.inicio;
    if (esListaVacia(lista)) {
        cout << "Lista vacia";
    } else {
        while (pNodo!=nullptr) {
            cout << pNodo->elemento.num << " ";
            pNodo = pNodo->siguiente;
        }
    }
    cout << endl;
}

void destruirLista(Lista& lista) {
    NodoLista* actual = lista.inicio;
    while (actual!=nullptr) {
        NodoLista* eliminar = actual;
        actual = actual->siguiente;
        delete eliminar;
    }
    lista.inicio = nullptr;
    lista.longitud = 0;
}
