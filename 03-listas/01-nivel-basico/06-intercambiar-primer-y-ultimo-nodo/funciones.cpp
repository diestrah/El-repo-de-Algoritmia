#include "funciones.h"
#include "BibliotecaListas/FuncionesLista.h"

void intercambiarPrimerYUltimoNodo(Lista& lista) {
    // Si la lista está vacía o tiene solo un elemento, no sucede nada.
    if (esListaVacia(lista) or longitud(lista) == 1) return;

    NodoLista* inicio = lista.inicio;
    NodoLista* ultimo = obtenerUltimoNodo(lista);

    // Caso 1: solo existen dos elementos en la lista
    if (inicio->siguiente == ultimo) {
        inicio->siguiente = nullptr;
        ultimo->siguiente = inicio;
        lista.inicio = ultimo;
        return;
    }

    // Caso 2: existen más de dos elementos en la lista
    NodoLista* penultimo = obtenerPenultimoNodo(lista);

    // Guardamos el segundo nodo para conservar la referencia
    // al resto de la lista
    NodoLista* restoLista = inicio->siguiente;

    // Desenlazamos el inicio de la lista
    inicio->siguiente = nullptr;

    // El penúltimo nodo ahora apunta al inicio
    penultimo->siguiente = inicio;

    // El antiguo último se conecta con el resto de la lista
    ultimo->siguiente = restoLista;

    // El antiguo último se convierte en el nuevo inicio
    lista.inicio = ultimo;
}

NodoLista* obtenerUltimoNodo(const Lista& lista) {
    NodoLista* pNodo = lista.inicio;
    while (pNodo != nullptr and pNodo->siguiente != nullptr) {
        pNodo = pNodo->siguiente;
    }
    return pNodo;
}


NodoLista* obtenerPenultimoNodo(const Lista& lista) {
    // Si la lista está vacía o tiene solo un nodo, retorna null
    if (esListaVacia(lista) or longitud(lista) == 1) return nullptr;

    NodoLista* penultimo = nullptr;
    NodoLista* actual = lista.inicio;

    while (actual->siguiente != nullptr) {
        penultimo = actual;
        actual = actual->siguiente;
    }
    return penultimo;
}
