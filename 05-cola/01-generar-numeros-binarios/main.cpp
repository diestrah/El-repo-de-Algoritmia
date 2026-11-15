#include <iostream>
using namespace std;

#include "BibliotecaCola/Cola.h"
#include "BibliotecaCola/FuncionesCola.h"

#define N 6

void generarNumerosBinarios(int n) {
    Cola cola;
    construir(cola);

    encolar(cola, {1});

    for (int i = 0; i < n; i++) {
        int num = desencolar(cola).num;
        cout << num << " ";

        // Agregamos los digitos a la derecha de los numeros
        int extensionCero = num * 10;
        int extensionUno = num * 10 + 1;

        // Encolamos primero la extension con cero para conservar
        // el orden ascendente
        encolar(cola, {extensionCero});
        encolar(cola, {extensionUno});
    }

    // Vaciamos la cola
    while (!esColaVacia(cola)) {
        desencolar(cola);
    }
}


int main() {
    cout << "Cantidad: " << N << endl;
    cout << "Binarios: ";

    if (N >= 1) {
        generarNumerosBinarios(N);
    } else {
        cout << "Rango invalido" << endl;
    }

    return 0;
}
