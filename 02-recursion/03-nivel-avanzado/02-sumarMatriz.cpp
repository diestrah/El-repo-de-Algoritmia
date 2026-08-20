#include <iostream>
using namespace std;

#define N 6 // representa a las filas
#define M 4 // representa a las columnas

void sumarMatriz(int matriz[N][M], int fila, int col, int filaFin, int colFin, int& suma);

int main() {
    int suma = 0;
    int matriz[N][M]{
        {20, 21, 22, 23},
        {24, 25, 26, 27},
        {28, 29, 30, 31},
        {32, 33, 34, 35},
        {36, 37, 38, 39},
        {40, 41, 42, 43},
    };

    sumarMatriz(matriz, 0, 0, N, M, suma);

    cout << "La suma de los elementos de la matriz es: " << suma << endl;

    return 0;
}

void sumarMatriz(int matriz[N][M], int fila, int col, int filaFin, int colFin, int& suma) {
    // Caso base: ya recorrimos todas las filas
    if (fila == filaFin) return;

    // Caso base: terminamos la fila actual
    if (col == colFin) {

        // Reiniciamos la columna y avanzamos a la siguiente fila
        sumarMatriz(matriz, fila + 1, 0, filaFin, colFin, suma);
        return;
    }

    suma += matriz[fila][col];

    // Avanzamos a la siguiente columna
    sumarMatriz(matriz, fila, col + 1, filaFin, colFin, suma);
}
