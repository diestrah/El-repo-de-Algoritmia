/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   18/08/2026
 *
 *  Descripción:
 *  Este programa implementa una función que busca el mayor elemento de una matriz.
 *  Para realizarlo se necesita un parámetro por referencia en la función de búsqueda.
 */

#include <iostream>
using namespace std;

#define N 6 // representa a las filas
#define M 4 // representa a las columnas

void buscarMaximo(int matriz[N][M], int fila, int col, int filaFin, int colFin, int& max);

int main() {
    int max = 0;
    int matriz[N][M]{
        {36, 37, 38, 39},
        {20, 21, 22, 23},
        {32, 33, 34, 35},
        {24, 25, 26, 27},
        {40, 41, 42, 43},
        {28, 29, 30, 31},
    };

    buscarMaximo(matriz, 0, 0, N, M, max);

    cout << "El valor maximo es: " << max << endl;

    return 0;
}

void buscarMaximo(int matriz[N][M], int fila, int col, int filaFin, int colFin, int& max) {
    // Caso base: se recorrieron todas las filas
    if (fila == filaFin) return;

    // Caso base: se llegó al final de una fila
    if (col == colFin) {
        buscarMaximo(matriz, fila + 1, 0, filaFin, colFin, max);
        return;
    }

    // Actualizamos el valor máximo de la matriz
    if (max < matriz[fila][col]) {
        max = matriz[fila][col];
    }

    // Avanzamos al siguiente elemento
    buscarMaximo(matriz, fila, col + 1, filaFin, colFin, max);
}
