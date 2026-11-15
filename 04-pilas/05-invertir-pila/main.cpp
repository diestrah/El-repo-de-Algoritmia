#include <iostream>
using namespace std;

#include "BibliotecaPila/Pila.h"
#include "BibliotecaPila/FuncionesPila.h"

// Inserta un  elemento al fondo de una pila sin alterar el orden del
// resto de elementos. Estos últimos se almacenan en variables locales
// de las llamadas recursivas.
void insertarAlFondo(Pila& pila, const ElementoPila& elemento) {
    if (esPilaVacia(pila)) {
        push(pila, elemento);
        return;
    }

    ElementoPila cima = pop(pila);

    insertarAlFondo(pila, elemento);

    // Al retornar, se restaura la cima que retiró la llamada recursiva
    push(pila, cima);
}

void invertirPila(Pila& pila) {
    if (esPilaVacia(pila)) return;

    ElementoPila cima = pop(pila);

    // Invertimos todos los elementos que quedaron debajo de la cima
    invertirPila(pila);

    // Con el resto ya invertido, colocamos la cima al fondo de la pila
    insertarAlFondo(pila, cima);
}

int main() {
    Pila pila;
    construir(pila);

    for (int i = 10; i <= 40; i += 10) {
        push(pila, {i});
    }

    cout << "Pila original: ";
    imprimir(pila);

    cout << "Pila invertida: ";
    invertirPila(pila);
    imprimir(pila);

    destruir(pila);

    return 0;
}
