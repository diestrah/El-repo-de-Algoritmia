/*
 *  Autor   :   Naim Diestra
 *  Fecha   :   18/08/2026
 *
 *  Descripción:
 *  Este programa implementa una función que imprime una matriz utilizando recursión.
 */

#include <iostream>
using namespace std;

#define N 6 // representa a las filas
#define M 4 // representa a las columnas

void imprimirMatriz(int matriz[N][M], int filaIni, int col, int filaFin, int colFin);

int main() {
    int matriz[N][M]{
        {20, 21, 22, 23},
        {24, 25, 26, 27},
        {28, 29, 30, 31},
        {32, 33, 34, 35},
        {36, 37, 38, 39},
        {40, 41, 42, 43},
    };

    imprimirMatriz(matriz, 0, 0, N, M);

    return 0;
}

void imprimirMatriz(int matriz[N][M], int fila, int col, int filaFin, int colFin) {
    // Caso base: ya recorrimos todas las filas
    if (fila == filaFin) return;

    // Caso base: terminamos la fila actual
    if (col == colFin) {
        cout << endl;

        // Reiniciamos la columna y avanzamos a la siguiente fila
        imprimirMatriz(matriz, fila + 1, 0, filaFin, colFin);
        return; // Sin este return nunca termina el problema
    }

    cout << matriz[fila][col] << " ";

    // Avanzamos a la siguiente columna
    imprimirMatriz(matriz, fila, col + 1, filaFin, colFin);
}
