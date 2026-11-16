#include <iostream>
using namespace std;

#include "BibliotecaCola/Cola.h"
#include "BibliotecaCola/FuncionesCola.h"

#define FILAS 4
#define COLUMNAS 4
#define DIRECCIONES 4

enum{ FILA, COL };

void vaciarCola(Cola& cola) {
    while (!esColaVacia(cola)) {
        desencolar(cola);
    }
}

int recorrerBFS(int laberinto[FILAS][COLUMNAS], int visitados[FILAS][COLUMNAS],
                int filaIni, int colIni) {
    Cola cola;
    construir(cola);

    // Encolamos la casilla inicial y la marcamos como visitada
    encolar(cola, {filaIni, colIni, 0});
    visitados[filaIni][colIni] = 1;

    // Matriz de direcciones: derecha, abajo, izquierda, arriba
    int direcciones[DIRECCIONES][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    while (!esColaVacia(cola)) {
        // Procesamos la siguiente casilla pendiente
        ElementoCola pos = desencolar(cola);

        // Si es el fin de la matriz, se encontro solucion
        if (pos.fila == FILAS - 1 && pos.col == COLUMNAS - 1) {
            vaciarCola(cola);
            return pos.mov;
        }

        // De lo contrario, exploramos las cuatro casillas vecinas
        for (int i = 0; i < DIRECCIONES; i++) {
            int fila = pos.fila + direcciones[i][FILA];
            int col = pos.col + direcciones[i][COL];

            // Si es una casilla valida, la encolamos
            if (fila < FILAS && fila >= 0 && col < COLUMNAS && col >= 0 &&
                visitados[fila][col] == 0 && laberinto[fila][col] == 0) {
                // La casilla vecina está a un movimiento más que la casilla actual
                encolar(cola, {fila, col, pos.mov + 1});
                visitados[fila][col] = 1;
            }
        }
    }

    return -1;
}

int main() {
    int laberinto[4][4] = {
        {0, 0, 1, 0},
        {1, 0, 1, 0},
        {0, 0, 0, 0},
        {0, 1, 1, 0}
    };

    int visitados[FILAS][COLUMNAS]{};

    int movimientos = recorrerBFS(laberinto, visitados, 0, 0);

    if (movimientos >= 0) {
        cout << "Minimo de movimientos: " << movimientos << endl;
    }
    else {
        cout << "No existe una ruta" << endl;
    }
    return 0;
}
