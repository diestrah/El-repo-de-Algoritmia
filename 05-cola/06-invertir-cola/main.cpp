#include <iostream>
using namespace std;

#include "BibliotecaCola/Cola.h"
#include "BibliotecaCola/FuncionesCola.h"

// Cada llamada conserva el elemento retirado en una variable local.
// Al retornar, se encolan en orden inverso.
void invertirCola(Cola& cola) {
    if (esColaVacia(cola)) return;

    // 1. Desencolamos el frente
    ElementoCola elemento = desencolar(cola);

    // 2. Invertimos los elementos restantes
    invertirCola(cola);

    // 3. Y colocamos el antiguo frente al final del resto ya invertido
    encolar(cola, elemento);
}

int main() {
    Cola cola;
    construir(cola);

    for (int i = 10; i <= 40; i += 10) {
        encolar(cola, {i});
    }

    cout << "Cola original: ";
    imprimir(cola);

    cout << "Cola invertida: ";
    invertirCola(cola);
    imprimir(cola);

    // Vaciamos la cola
    while (!esColaVacia(cola)) {
        desencolar(cola);
    }

    return 0;
}
