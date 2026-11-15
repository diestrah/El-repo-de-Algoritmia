#include <iostream>
using namespace std;

#include "BibliotecaPila/Pila.h"
#include "BibliotecaPila/FuncionesPila.h"

bool esApertura(char caracter) {
    return caracter == '(' || caracter == '[' || caracter == '{';
}

bool esCierre(char caracter) {
    return caracter == '}' || caracter == ']' || caracter == ')';
}

bool sonPareja(char apertura, char cierre) {
    return (apertura == '(' && cierre == ')') ||
           (apertura == '[' && cierre == ']') ||
           (apertura == '{' && cierre == '}');
}

bool validarExpresion(Pila& pila, const char* expresion) {
    for (int i = 0; expresion[i]; i++) {
        char caracter = expresion[i];

        // Si encontramos un parentesis de apertura, apilamos
        if (esApertura(caracter)) {
            push(pila, {caracter});
        }
        // Si encontramos un parentesis de cierre, desapilamos
        else if (esCierre(caracter)) {
            // Si nuestra pila ya se encuentra vacia, quiere decir
            // que es una expresion invalida
            if (esPilaVacia(pila)) {
                return false;
            }

            char apertura = pop(pila).parentesis;

            if (!sonPareja(apertura, caracter)) {
                return false;
            }
        }
    }

    return esPilaVacia(pila);
}

int main() {
    Pila pila;
    construir(pila);

    // expr1: "a + (b * [c - d])"
    // expr2: {[()]}
    // expr3: ([)]
    // expr4: (()
    // expr5: )(
    // expr6: abc
    char expresion[] = "abc";

    cout << expresion << endl;
    if (validarExpresion(pila, expresion)) {
        cout << "Expresion valida" << endl;
    }
    else {
        cout << "Expresion invalida" << endl;
    }

    destruir(pila);

    return 0;
}
