#include <iostream>
using namespace std;

#include "BibliotecaCola/Cola.h"
#include "BibliotecaCola/FuncionesCola.h"

#define PARTICIPANTES 5
#define K 2 // es el intervalo de eliminacion

void simularJosephus(Cola& cola) {
    if (cola.longitud == 1) {
        cout << "Ninguno" << endl;
        return;
    }

    while (cola.longitud > 1) {
        // Los primeros k-1 participantes pasan al final de la cola
        for (int i = 1; i < K; i++) {
            ElementoCola participante = desencolar(cola);
            encolar(cola, participante);
        }

        // Participante que recibe el turno K queda eliminado
        cout << desencolar(cola).num << " ";
    }
}


int main() {
    Cola cola;
    construir(cola);

    for (int i = 1; i <= PARTICIPANTES; i++) {
        encolar(cola, {i});
    }

    cout << "Participantes: " << PARTICIPANTES << endl;
    cout << "Conteo (K): " << K << endl;
    cout << "Orden de eliminacion: ";
    simularJosephus(cola);
    cout << "\nSobreviviente: " << desencolar(cola).num << endl;

    return 0;
}
