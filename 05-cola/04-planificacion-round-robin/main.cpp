#include <iostream>
using namespace std;

#include "BibliotecaCola/Cola.h"
#include "BibliotecaCola/FuncionesCola.h"

#define QUANTUM 2

struct Proceso{
    int id;
    int tiempoRestante;
};

void roundRobin(Cola& cola) {
    int tiempo = 0;

    while (!esColaVacia(cola)) {
        ElementoCola proceso = desencolar(cola);

        // Ejecutamos como máximo un quantum. No excedemos el tiempo pendiente
        int tiempoEjecutado =
            proceso.tiempoRestante >= QUANTUM ? QUANTUM : proceso.tiempoRestante;

        proceso.tiempoRestante -= tiempoEjecutado;
        int tiempoFin = tiempo + tiempoEjecutado;

        cout << "Proceso #" << proceso.id << ": de " << tiempo << " a "
            << tiempoFin << " - Restante: " << proceso.tiempoRestante << endl;

        // Si todavía tiene trabajo pendiente, espera otro turno al final
        if (proceso.tiempoRestante > 0) {
            encolar(cola, proceso);
        }
        else {
            cout << "Finaliza proceso #" << proceso.id << " en tiempo " << tiempoFin << endl;
        }

        tiempo = tiempoFin;
    }

    cout << "\nTiempo total: " << tiempo << endl;
}


int main() {
    Cola cola;
    construir(cola);

    Proceso procesos[] = {
        {101, 5},
        {102, 3},
        {103, 1}
    };
    int n = sizeof(procesos) / sizeof(procesos[0]);

    for (int i = 0; i < n; i++) {
        encolar(cola, {procesos[i].id, procesos[i].tiempoRestante});
    }

    roundRobin(cola);

    return 0;
}
