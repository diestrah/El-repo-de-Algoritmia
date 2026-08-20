#include "funciones.h"
#include "BibliotecaListas/FuncionesLista.h"

void moverUltimoAlInicio(Lista& lista) {
    // Si la lista está vacía o solo tiene un dato, no sucede nada
    if (esListaVacia(lista) or lista.longitud == 1) return;

    NodoLista* actual = lista.inicio;
    NodoLista* anterior = nullptr;

    // Buscaremos el último nodo
    // Al finalizar, actual apunta al último y anterior al penúltimo
    while (actual->siguiente != nullptr) {
        anterior = actual;
        actual = actual->siguiente;
    }

    // Desconectamos el último nodo de su posición actual
    anterior->siguiente = nullptr;

    // Enlazamos el último nodo con el antiguo inicio
    // y ahora será el nuevo inicio de la lista
    actual->siguiente = lista.inicio;
    lista.inicio = actual;
}
