#include <iostream>
using namespace std;

#include "BibliotecaCola/Cola.h"
#include "BibliotecaCola/FuncionesCola.h"

void mostrarPrimerCaracterNoRepetido(const char* expresion, int* frecuencias,
                                     Cola& cola) {
    for (int i = 0; expresion[i]; i++) {
        int indice = expresion[i] - 'a';
        frecuencias[indice]++;

        // Cada letra ingresa como candidata solo en su primera aparicion
        if (frecuencias[indice] == 1) {
            encolar(cola, {expresion[i]});
        }

        // Verificamos que la letra de la cima no se repitio anteriormente
        while (!esColaVacia(cola) &&
            frecuencias[cima(cola).letra - 'a'] > 1) {
            desencolar(cola);
        }

        char caracter = esColaVacia(cola) ? '-' : cima(cola).letra;
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
