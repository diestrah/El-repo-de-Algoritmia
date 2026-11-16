#include <iostream>
using namespace std;

#include "BibliotecaCola/Cola.h"
#include "BibliotecaCola/FuncionesCola.h"

void mostrarPrimerCaracterNoRepetido(const char* expresion, int* frecuencias,
                           Cola& cola) {
    char caracter = '-';
    for (int i = 0; expresion[i]; i++) {
        int indice = expresion[i] - 'a';
        frecuencias[indice]++;

        if (frecuencias[indice] == 1) {
            encolar(cola, {expresion[i]});
        }

        if (caracter == '-' || caracter == expresion[i]) {
            if (!esColaVacia(cola)) {
                caracter = desencolar(cola).letra;
            }
            else {
                caracter = '-';
            }
        } else if (frecuencias[indice] == 2) {
            desencolar(cola);
        }

        cout << caracter << " ";
    }
}


int main() {
    Cola cola;
    construir(cola);
    char expresion[] = "abbac";
    int frecuencias[26]{}; // cantidad de apariciones de cada letra

    cout << "Entrada: " << expresion << endl;
    cout << "Resultado: ";
    mostrarPrimerCaracterNoRepetido(expresion, frecuencias, cola);

    // Vaciamos cola
    while (!esColaVacia(cola)) {
        desencolar(cola);
    }

    return 0;
}
