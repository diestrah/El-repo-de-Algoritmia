#include "funciones.h"
#include "BibliotecaListas/NodoLista.h"
#include "BibliotecaListas/FuncionesLista.h"

void eliminarCoincidencias(Lista& lista, const ElementoLista& e) {
    if (esListaVacia(lista)) return;

    NodoLista* actual = lista.inicio;
    NodoLista* anterior = nullptr;

    while (actual) {
        if (actual->elemento.num == e.num) {
            // Guardamos el nodo que será eliminado
            NodoLista* sale = actual;

            // Reconectamos la lista.
            // Caso 1: el nodo a eliminar es el inicio.
            // Caso 2: el nodo a eliminar está en medio o al final.
            if (anterior == nullptr) lista.inicio = lista.inicio->siguiente;
            else  anterior->siguiente = actual->siguiente;

            lista.longitud--;
            // Antes de eliminar el nodo actual, avanzamos al siguiente.
            // Si primero hacemos el delete, perderíamos el acceso a actual->siguiente.
            actual = actual->siguiente;
            delete sale;
        }
        else {
            // No se elimina actual. Ambos punteros avanzan.
            anterior = actual;
            actual = actual->siguiente;
        }
    }
}
