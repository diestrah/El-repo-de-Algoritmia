/*
 *  Autor	: 	Naim Diestra
 *  Fecha	:	13/05/2026
 *
 *	Descripción:
 *  Este programa implementa una función que luego de ingresar un numero n, 
 *  imprime del 1 al n de forma ascendente y luego descendente.
 *
 *  Restricciones:
 *  Solo se debe utilizar recursión.
*/	

// I
// Para ambos casos se debe utilizar recursión

// Librerias
#include <iostream>
using namespace std;

// Prototipos
void imprimirRecursivoAsc(int num);
void imprimirRecursivoDesc(int num);

// Main
int main(){
	int num;
	do{
		cout << "Ingrese numero ";
		cin >> num;
		imprimirRecursivoAsc(num);
		cout << endl;
		imprimirRecursivoDesc(num);
		cout << endl;
	} while (num != 0);
	
	return 0;
}

// Definición de los procedimientos
void imprimirRecursivoAsc(int num){
	if (num == 0) return;
	cout << num << " ";
	imprimirRecursivoAsc(num - 1);
}

void imprimirRecursivoDesc(int num){
	if (num == 0) return;
	imprimirRecursivoDesc(num - 1);
	cout << num << " ";
}
