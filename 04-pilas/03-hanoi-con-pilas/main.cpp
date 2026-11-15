#include <iostream>
using namespace std;

#include "BibliotecaPila/Pila.h"
#include "BibliotecaPila/FuncionesPila.h"

#define N 3

void imprimirPila(const Pila& pila) {
    if (esPilaVacia(pila))
        cout << "vacia" << endl;
    else
        imprimir(pila);
}

void imprimir(const Pila& A, const Pila& B, const Pila& C) {
    cout << "A: ";
    imprimirPila(A);
    cout << "B: ";
    imprimirPila(B);
    cout << "C: ";
    imprimirPila(C);
}

bool sePuedeMoverDisco(const Pila& orig, const Pila& dest) {
    // Verificamos que la pila de origen no se encuentre vacia y
    // que la cima de la pila de destino sea mayor a la cima de la pila de origen.
    return !esPilaVacia(orig) && (esPilaVacia(dest) || top(dest).num >= top(orig).num);
}

void moverDisco(Pila& orig, Pila& dest, int& mov) {
    if (!sePuedeMoverDisco(orig, dest)) {
        cout << "Movimiento invalido" << endl;
        return;
    }
    ElementoPila e = pop(orig);
    push(dest, e);
    cout << "Mover disco " << e.num << " de " << orig.nombre << " a " << dest.nombre << endl;
    mov++;
}

void hanoi(int n, Pila& orig, Pila& aux, Pila& dest, int& mov) {
    // Caso base: movemos solo 1 disco
    if (n == 1) {
        moverDisco(orig, dest, mov);
        return;
    }
    // Movemos los n-1 discos de la pila original a la pila auxiliar
    hanoi(n - 1, orig, dest, aux, mov);

    // Movemos el mayor de los n discos a la pila de destino
    moverDisco(orig, dest, mov);

    // Movemos esos n-1 discos de la pila auxiliar a la pila de destino
    hanoi(n - 1, aux, orig, dest, mov);
}

int main() {
    // Se agrego la variable "nombre" en la estructura de la pila con fines didácticos
    Pila A{'A'}, B{'B'}, C{'C'};
    construir(A);
    construir(B);
    construir(C);

    for (int i = N; i > 0; i--) {
        push(A, {i});
    }

    cout << "Estado inicial: " << endl;
    imprimir(A, B, C);

    cout << "\nMovimientos:" << endl;
    int movimientos = 0;
    hanoi(N, A, B, C, movimientos);

    cout << "\nEstado final:" << endl;
    imprimir(A, B, C);

    cout << "\nTotal de movimientos: " << movimientos << endl;

    destruir(A);
    destruir(B);
    destruir(C);

    return 0;
}
