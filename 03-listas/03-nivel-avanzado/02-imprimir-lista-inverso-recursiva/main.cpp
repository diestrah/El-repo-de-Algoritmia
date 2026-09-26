/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   09/08/2026
 *
 *  Descripción:
 *  Este programa implementa una función que imprime una lista en orden
 *  inverso utilizando recursión.
 *  Primero se recorre la lista hasta llegar al final y, durante el retorno
 *  de las llamadas recursivas, se imprimen los nodos en orden inverso.
 *
 *  Restricciones:
 *  No se debe invertir la lista.
 *  Debe utilizar exclusivamente recursión.
 */

#include "BibliotecaListas/FuncionesLista.h"
#include "funciones.h"

int main() {
    Lista lista;
    construirLista(lista);
    // Insertamos los datos
    insertarAlFinal(lista, {101});
    insertarAlFinal(lista, {103});
    insertarAlFinal(lista, {106});
    insertarAlFinal(lista, {108});
    insertarAlFinal(lista, {109});
    insertarAlFinal(lista, {112});
    // Imprimimos la lista original (iterativamente)
    imprimirLista(lista);
    // Imprimimos la lista inversa recursivamente
    imprimirListaInversaRecursiva(lista);

    return 0;
}
