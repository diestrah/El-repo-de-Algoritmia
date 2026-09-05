/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   18/08/2026
 *
 *  Descripción:
 *  Este programa implementa una función que además de buscar el mayor elemento de una matriz,
 *  retorna el valor máximo de esta.
 */

#include <iostream>
using namespace std;

#define N 6 // representa a las filas
#define M 4 // representa a las columnas

int retornarMaximo(int matriz[N][M], int fila, int col, int filaFin, int colFin);
int max(int a, int b);

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

    max = retornarMaximo(matriz, 0, 0, N, M);

    cout << "El valor maximo es: " << max << endl;

    return 0;
}

int retornarMaximo(int matriz[N][M], int fila, int col, int filaFin, int colFin) {
    // Caso base: se recorrieron todas las filas
    if (fila == filaFin) return -1;

    // Caso base: se llegó al final de una fila
    if (col == colFin) {
        return retornarMaximo(matriz, fila + 1, 0, filaFin, colFin);
    }

    // Almacenamos el mayor valor en una variable
    int maximo = retornarMaximo(matriz, fila, col + 1, filaFin, colFin);

    // Comparamos el ultimo mayor elemento con el valor actual
    return max(matriz[fila][col], maximo);
}

int max(int a, int b) {
    return a > b ? a : b;
}
