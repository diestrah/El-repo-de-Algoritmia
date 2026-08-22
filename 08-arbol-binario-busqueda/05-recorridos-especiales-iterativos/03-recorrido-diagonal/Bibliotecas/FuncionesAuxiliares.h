#ifndef RECORRIDODIAGONALSKYNERD_FUNCIONESAUXILIARES_H
#define RECORRIDODIAGONALSKYNERD_FUNCIONESAUXILIARES_H

// Incluyemos todas las las librerías y TAD en este .h
#include <iostream>
using namespace std;

#include "../BibliotecaArbolBinarioBusqueda/FuncionesArbolBinarioBusqueda.h"
#include "../BibliotecaCola/FuncionesCola.h"
#include "../BibliotecaPila/FuncionesPila.h"

void imprimirDiagonal(struct ArbolBinarioBusqueda& arbol);
void imprimirDiagonarInverso(struct ArbolBinarioBusqueda& arbol);
NodoArbolBinarioBusqueda* buscarNodoIterativo(NodoArbolBinarioBusqueda* raiz,
                                              const ElementoArbolBinarioBusqueda& elemento);

#endif //RECORRIDODIAGONALSKYNERD_FUNCIONESAUXILIARES_H
