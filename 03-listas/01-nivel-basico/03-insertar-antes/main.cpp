/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   08/08/2026
 *
 *  Descripción:
 *  Este programa implementa una función que inserta un nuevo elemento
 *  antes de la primera aparición de un elemento dado en una lista.
 *  Si el elemento no existe, el nuevo elemento se insertará al final.
 */

#include "funciones.h"
#include "BibliotecaListas/FuncionesLista.h"

int main() {
    Lista lista;
    construirLista(lista);
    // Insertamos los datos
    insertarAlInicio(lista, {12});
    insertarAlInicio(lista, {16});
    insertarAlInicio(lista, {12});
    insertarAlInicio(lista, {17});
    insertarAlInicio(lista, {19});
    insertarAlInicio(lista, {13});
    insertarAlInicio(lista, {14});
    // Mostramos los elementos iniciales de la lista
    imprimirLista(lista);
    // Probamos la inserción antes del primer elemento
    insertarAntes(lista, {14}, {20});
    // Probamos la inserción antes de un elemento intermedio
    insertarAntes(lista, {17}, {21});
    // Como 100 no existe, el nuevo elemento se insertará al final
    insertarAntes(lista, {100}, {22});
    // Mostramos los elementos finales de la lista
    imprimirLista(lista);

    return 0;
}
