#include <iostream>
using namespace std;

#include "BibliotecaPila/Pila.h"
#include "BibliotecaPila/FuncionesPila.h"

#define N 13

int main() {
    Pila pila;
    construir(pila);

    int n = N;

    // Caso n = 0
    if (n == 0) {
        push(pila, {0});
    }

    // Caso n > 0
    while (n > 0) {
        int digito = n % 2;
        n /= 2;
        // Almacenamos en la pila el numero en binario
        // de la cifra menos significativa a la mas significativa
        push(pila, {digito});
    }


    cout << "Decimal: " << N << endl;
    cout << "Binario: ";
    while (!esPilaVacia(pila)) {
        cout << pop(pila).num;
    }
    cout << endl;

    destruir(pila);

    return 0;
}
