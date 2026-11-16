#include <iostream>
using namespace std;

#include "BibliotecaCola/Cola.h"
#include "BibliotecaCola/FuncionesCola.h"

#define N 3 // FILAS
#define M 4 // COLUMNAS
#define DIRECCIONES 4

enum{ FILA, COL };

// Si no permiten usar la bibliteca <algorithm>, esa funcion hace lo mismo.
// Devuelve el mayor de dos enteros, sin utilizar max
int maximo(int a, int b) {
    return a > b ? a : b;
}

// Retorna la cantidad de casillas pendientes (matriz[i][j]==1)
// y prepara los focos de propagacion (matriz[i][j]==2)
int prepararPropagacion(Cola& cola, int matriz[N][M]) {
    int pendientes = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            // Foco de propagacion
            if (matriz[i][j] == 2) {
                encolar(cola, {i, j, 0});
            }
            // Casilla pendiente
            else if (matriz[i][j] == 1) {
                pendientes++;
            }
        }
    }
    return pendientes;
}


int calcularTiempoPropagacion(int matriz[N][M]) {
    Cola cola;
    construir(cola);

    // Matriz de direcciones: derecha, abajo, izquierda, arriba
    int direcciones[DIRECCIONES][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    // Registramos todos los focos con tiempo 0 y contamos las pendientes
    int pendientes = prepararPropagacion(cola, matriz);
    int tiempoTotal = 0;

    while (!esColaVacia(cola)) {
        // Procesamos la siguiente casilla pendiente
        ElementoCola actual = desencolar(cola);
        tiempoTotal = maximo(actual.tiempo, tiempoTotal);

        for (int i = 0; i < DIRECCIONES; i++) {
            int fila = actual.fila + direcciones[i][FILA];
            int col = actual.col + direcciones[i][COL];


            // Si es una casilla valida, la encolamos
            if (fila < N && fila >= 0 &&
                col < M && col >= 0 &&
                matriz[fila][col] == 1) {
                // Encolamos y marcamos la casilla
                encolar(cola, {fila, col, actual.tiempo + 1});
                matriz[fila][col] = 2;
                pendientes--;
            }
        }
    }

    return pendientes == 0 ? tiempoTotal : -1;
}

int main() {
    int matriz[N][M] = {
        {2, 1, 0, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 2}
    };

    int tiempo = calcularTiempoPropagacion(matriz);

    if (tiempo >= 0) {
        cout << "Tiempo total de propagacion: " << tiempo << endl;
    }
    else {
        cout << "No es posible alcanzar todas las celdas" << endl;
    }
    return 0;
}
