/*
 * Autor   :   Naim Diestra
 * Fecha   :   08/08/2026
 *
 * Descripción del problema:
 * Elaborar una función que elimine de una lista
 * todos los elementos que coincidan con un dato dado.
 */

#include "BibliotecaListas/FuncionesLista.h"
#include "funciones.h"

int main() {
    Lista lista;
    construirLista(lista);
    // Inserción de los datos
    insertarAlInicio(lista, {12});
    insertarAlInicio(lista, {17});
    insertarAlInicio(lista, {12});
    insertarAlInicio(lista, {18});
    insertarAlInicio(lista, {17});
    insertarAlInicio(lista, {12});
    insertarAlInicio(lista, {12});
    insertarAlInicio(lista, {19});
    insertarAlInicio(lista, {20});
    insertarAlInicio(lista, {12});
    // Mostramos la lista antes de realizar la eliminación
    imprimirLista(lista);
    // Eliminamos de la lista todos los elementos con num == 12
    eliminarCoincidencias(lista, {12});
    // Mostramos la lista para verificar el resultado
    imprimirLista(lista);

    return 0;
}
