#include <iostream>
using namespace std;

#include "BibliotecaCola/Cola.h"
#include "BibliotecaCola/FuncionesCola.h"

#define CUOTA_ALTA 3
#define CUOTA_MEDIA 2
#define CUOTA_BAJA 1

struct Paciente{
    int id;
    int prioridad;
};

void imprimirTurno(int& turno, const ElementoCola& paciente) {
    cout << "Turno " << turno << ": Cliente #" << paciente.id
        << " - Prioridad: " << paciente.prioridad << endl;
    turno++;
}

void atenderPorPrioridad(Cola& cola, int cantidad, int& turno) {
    for (int i = 1; i <= cantidad; i++) {
        if (esColaVacia(cola)) break;
        imprimirTurno(turno, desencolar(cola));
    }
}

void atenderPacientes(Cola& alta, Cola& media, Cola& baja) {
    int ciclo = 1;
    int turno = 1;

    while (!esColaVacia(alta) || !esColaVacia(media) ||
        !esColaVacia(baja)) {
        cout << "=========== Ciclo " << ciclo << " ===========\n";

        if (!esColaVacia(alta)) {
            cout << "Alta: " << endl;
            atenderPorPrioridad(alta, CUOTA_ALTA, turno);
        }

        if (!esColaVacia(media)) {
            cout << "Media: " << endl;
            atenderPorPrioridad(media, CUOTA_MEDIA, turno);
        }

        if (!esColaVacia(baja)) {
            cout << "Baja: " << endl;
            atenderPorPrioridad(baja, CUOTA_BAJA, turno);
        }

        cout << endl;
        ciclo++;
    }
}

void encolarPaciente(Cola& cola, const Paciente& paciente) {
    encolar(cola, {paciente.id, paciente.prioridad});
}

void encolarConPrioridad(Cola& alta, Cola& media, Cola& baja,
                         const Paciente* pacientes, int n) {
    // Registramos los pacientes en orden de llegada
    for (int i = 0; i < n; i++) {
        switch (pacientes[i].prioridad) {
        case 1:
            encolarPaciente(alta, pacientes[i]);
            break;
        case 2:
            encolarPaciente(media, pacientes[i]);
            break;
        default:
            encolarPaciente(baja, pacientes[i]);
        }
    }
}

int main() {
    Paciente pacientes[] = {
        {101, 1}, {201, 2}, {301, 3},
        {102, 1}, {202, 2}, {302, 3},
        {103, 1}, {203, 2},
        {104, 1}, {105, 1}, {204, 2},
        {303, 3}, {205, 2}, {206, 2}
    };

    int n = sizeof(pacientes) / sizeof(Paciente);

    Cola alta, media, baja;
    construir(alta);
    construir(media);
    construir(baja);

    encolarConPrioridad(alta, media, baja, pacientes, n);
    atenderPacientes(alta, media, baja);

    return 0;
}
