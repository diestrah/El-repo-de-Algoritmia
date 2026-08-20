#include "funciones.h"
#include "BibliotecaListas/FuncionesLista.h"

void intercambiarSegundoYPenultimoNodo(Lista& lista) {
    // Se necesitan al menos 4 nodos para que el segundo
    // y el penúltimo sean nodos diferentes
    if (esListaVacia(lista) or longitud(lista) < 4) return;

    NodoLista* inicio = lista.inicio;
    NodoLista* segundo = inicio->siguiente;

    NodoLista* ultimo = obtenerUltimoNodo(lista);
    NodoLista* penultimo = obtenerPenultimoNodo(lista);
    NodoLista* restoLista = segundo->siguiente;
    NodoLista* antepenultimo = obtenerAntepenultimoNodo(lista);

    // Caso 1: la lista tiene solo 4 nodos.
    // El segundo y penultimo son adyacentes
    if (segundo->siguiente == penultimo) {
        // El siguiente de inicio apunta al penúltimo
        inicio->siguiente = penultimo;
        // El siguiente de penúleimo apunta al segundo
        penultimo->siguiente = segundo;
        // El siguiente de segundo apunta al último
        segundo->siguiente = ultimo;
        return;
    }

    // Caso 2: La lista tiene más de 4 nodos.
    // Necesitamos conservar el tercer nodo y el antepenúltimo

    // El siguiente de inicio apunta al antiguo penúltimo
    inicio->siguiente = penultimo;

    // El antiguo penúltimo ocupa la posición del segundo
    // y se conecta con el tercer nodo
    penultimo->siguiente = restoLista;

    // El antepenúltimo se conecta con el antiguo segundo
    antepenultimo->siguiente = segundo;

    // El antiguo segundo ocupa la posición del penúltimo
    // y se conecta con el último nodo
    segundo->siguiente = ultimo;
}

NodoLista* obtenerUltimoNodo(const Lista& lista) {
    NodoLista* pNodo = lista.inicio;
    while (pNodo != nullptr and pNodo->siguiente != nullptr) {
        pNodo = pNodo->siguiente;
    }
    return pNodo;
}

NodoLista* obtenerPenultimoNodo(const Lista& lista) {
    // Verificamos que la lista tenga por lo menos 2 nodos
    if (esListaVacia(lista) or longitud(lista) == 1) return nullptr;
    NodoLista* penultimo = nullptr;
    NodoLista* actual = lista.inicio;

    while (actual->siguiente != nullptr) {
        penultimo = actual;
        actual = actual->siguiente;
    }
    return penultimo;
}

NodoLista* obtenerAntepenultimoNodo(const Lista& lista) {
    // Verificamos que la lista tenga por lo menos 3 nodos
    if (esListaVacia(lista) or lista.longitud <= 2) return nullptr;
    NodoLista* actual = lista.inicio;
    NodoLista* antepenultimo = nullptr;
    while (actual->siguiente->siguiente != nullptr) {
        antepenultimo = actual;
        actual = actual->siguiente;
    }
    return antepenultimo;
}
