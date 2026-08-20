#include "funciones.h"

#include "BibliotecaListas/FuncionesLista.h"

void moverInicioAlFinal(Lista& lista) {
    // Si la lista está vacia o contiene solo un elemento, no sucede nada
    if (esListaVacia(lista) or lista.longitud == 1) return;

    // Guardamos el nodo inicial y obtemenos el último nodo de la lista
    NodoLista* inicio = lista.inicio;
    NodoLista* ultimo = obtenerUltimoNodo(lista);

    // Guardamos el segundo nodo, que luego será el nuevo inicio
    NodoLista* restoLista = inicio->siguiente;

    // Desconectamos el nodo inicial del resto de la lista
    inicio->siguiente = nullptr;

    // Enlazamos el antiguo ultimo nodo con el antiguo inicio,
    // de esta manera el antiguo inicio será el nuevo último nodo
    ultimo->siguiente = inicio;

    // Actualizamos el nuevo inicio de la lista
    lista.inicio = restoLista;
}

NodoLista* obtenerUltimoNodo(const Lista& lista) {
    NodoLista* actual = lista.inicio;
    while (actual and actual->siguiente) {
        actual = actual->siguiente;
    }
    return actual;
}
