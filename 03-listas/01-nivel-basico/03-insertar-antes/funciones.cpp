#include "funciones.h"
#include "BibliotecaListas/FuncionesLista.h"

void insertarAntes(Lista& lista, const ElementoLista& e, const ElementoLista& nuevo) {
    if (esListaVacia(lista)) {
        insertarAlInicio(lista, nuevo);
        return;
    }

    NodoLista* actual = lista.inicio;
    NodoLista* anterior = nullptr;

    // Buscamos la primera aparición del elemento e.
    // anterior siempre quedará un nodo detrás de actual.
    while (actual != nullptr) {
        if (actual->elemento.num == e.num) break;
        anterior = actual;
        actual = actual->siguiente;
    }

    // Creamos el nuevo nodo que será insertado
    NodoLista* nuevoNodo = new NodoLista();
    nuevoNodo->elemento = nuevo;
    nuevoNodo->siguiente = actual;

    // Reconectamos la lista:
    // 1. Si no hay anterior, estamos creando un nuevo inicio de lista.
    // 2. En caso contrario, hacemos que anterior se enlace con el nuevo nodo.
    //    Si el elemento e no existe, anterior será el último nodo y se insertará al final.
    if (anterior == nullptr) lista.inicio = nuevoNodo;
    else anterior->siguiente = nuevoNodo;
    lista.longitud++;
}
