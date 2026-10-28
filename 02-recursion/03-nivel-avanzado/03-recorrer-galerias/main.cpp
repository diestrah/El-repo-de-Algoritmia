#include <iostream>
#include <iomanip>
using namespace std;
#define F 6
#define C 11

void imprimir(int galeria[F][C]) {
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++)
            cout << setw(3) << galeria[i][j];
        cout << endl;
    }
}

void recorrerGaleria(int galeria[F][C], int fila, int col, int nivel, bool& recorrerGal, bool& recorrerNivel) {
    // Aún sigo en el tablero
    if (fila < 0 || fila >= F) return;

    // Si llegué al final de una fila
    if (col >= C && recorrerNivel) {
        nivel++; // incrementamos el nivel de la galeria
        recorrerGal = true; // activamos el recorrido
        // ¿Por qué empiezas desde F - nivel? Representa el inicio del recorrido de la nueva galería (ver main)
        recorrerGaleria(galeria, F - nivel, 0, nivel, recorrerGal, recorrerNivel);
        // return;
    }

    // ¿Tengo permitido seguir recorriendo? Si es true, quiere decir que no y termina la recursión
    if (!recorrerGal && !recorrerNivel) return;

    // Si estoy en una mina o en una galeria ya recorrida:
    if (galeria[fila][col] != 0) return;

    // Si llegué al límite derecho de la matriz, ya no sigo recorriendo
    if (col == C - 1) recorrerGal = false;

    // Si estoy en el límite superior de la matriz, no crearé un nuevo nivel
    if (fila == 0) recorrerNivel = false;

    galeria[fila][col] = nivel; // marcamos la galería
    recorrerGaleria(galeria, fila + 1, col, nivel, recorrerGal, recorrerNivel); // abajo
    recorrerGaleria(galeria, fila, col + 1, nivel, recorrerGal, recorrerNivel); // derecha
    recorrerGaleria(galeria, fila - 1, col, nivel, recorrerGal, recorrerNivel); // arriba
}


int main() {
    int galeria[F][C] = {};
    galeria[3][5] = -1;
    galeria[4][5] = -1;
    galeria[5][5] = -1;

    bool recorrer = true;
    bool recorrerNivel = true;

    // Nota: F-1 es igual a F-nivel... para tenerlo en cuenta
    recorrerGaleria(galeria, F - 1, 0, 1, recorrer, recorrerNivel);
    imprimir(galeria);

    return 0;
}
