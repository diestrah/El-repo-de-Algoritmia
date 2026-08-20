// Ejercicio 05
// Ingresar un número e invertir sus dígitos. Se debe utilizar recursión.

// Librerías
#include <iostream>
using namespace std;
#include <cmath>

// Prototipos
void invertirNumero(int& num);

// Main
int main(){
	int num;
	do{
		cout << "Ingrese numero: ";
		cin >> num;
		invertirNumero(num);
		cout << endl;
		cout << "El numero invertido es: " << num << endl;
	} while (num != 0);
	
	return 0;
}


// Definición de las funciones
void invertirNumero(int& num){
	if (num == 0) return;
	int numero = num % 10;
	num /= 10;
	invertirNumero(num);
	num += pow(10, log10(num)+1) * numero;
}

