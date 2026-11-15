#include <iostream>
#include <cstring>
using namespace std;

#include "BibliotecaPila/Pila.h"
#include "BibliotecaPila/FuncionesPila.h"

bool esSigno(const char* token) {
    char caracter = token[0];
    return token[1] == 0 && (caracter == '+' || caracter == '-' ||
        caracter == '/' || caracter == '*');
}

int operacion(int num1, int num2, char signo) {
    switch (signo) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        return num1 / num2;
    }
}

bool postfijaValida(Pila& pila, const char* token) {
    while (token != nullptr) {
        // Si es un signo, desapilamos 2 numeros y los operamos
        if (esSigno(token)) {
            char signo = token[0];

            if (pila.longitud < 2) {
                cout << "Error: operandos insuficientes " << endl;
                return false;
            }

            // Es importante el orden en que se desapilaran
            int num2 = pop(pila).num; // Sera el operando 2
            int num1 = pop(pila).num; // Sera el operando 1

            // Validamos que la division entre cero no se cumpla
            if (num2 == 0 && signo == '/') {
                cout << "ERROR: Division por cero" << endl;
                return false;
            }
            // Calculamos el resultado y lo apilamos
            int resultado = operacion(num1, num2, signo);
            push(pila, {resultado});
        }
        // Si es un numero, simplemente se apila
        else {
            int numero = atoi(token); // esta funcion transforma una cadena a entero
            push(pila, {numero});
        }

        token = strtok(nullptr, " ");
    }

    // La pila si o si se quedara con 1 valor el cual contendrá el resultado
    return pila.longitud == 1;
}


int main() {
    Pila pila;
    construir(pila);

    char expresion[] = "12 3 4 * +";
    cout << "Expresion: " << expresion << endl;
    char* token = strtok(expresion, " ");

    if (postfijaValida(pila, token)) {
        cout << "Resultado: " << pop(pila).num << endl;
    }
    else {
        cout << "Expresion invalida" << endl;
    }

    destruir(pila);

    return 0;
}
