/*
 *  Autor	: 	Naim Diestra
 *  Fecha	:	10/05/2026
 *
 *	Descripción:
 *  Este programa implementa una función que calcula el factorial de un número utilizando recursión
 *
 *  Restricciones:
 *  Solo se debe utilizar recursión. La función debe incluir solo dos parámetros.
*/	

#include <iostream>
using namespace std;

int calcularFactorial(int numero);

int main(){
    int numero;
    do {
        cout << "Ingrese un número: ";
        cin >> numero;
        int factorial = calcularFactorial(numero);
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    } while (numero > 0);

    return 0;
}

int calcularFactorial(int n){
    if (n == 0) return 1; // caso base;
    return n *= calcularFactorial(n - 1);;
}
