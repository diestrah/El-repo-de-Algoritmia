/*
 *  Autor	: 	Naim Diestra
 *  Fecha	:	13/05/2026
 *
 *	Descripción:
 *  Este programa implementa una función que calcula la potencia de un número 
 *  (una función pow) utilizando recursión.
 *  Ejemplo: 
 *  calcularPotencia(3, 4) = 81
 *  calcularPotencia(7, 0) = 1
 *  calcularPotencia(2, 6) = 64
 *
 *  Restricciones:
 *  Solo se debe utilizar recursión. La función debe incluir solo dos parámetros.
 *  No se puede utilizar la librería <cmath> ni el operador ^.
*/	


#include <iostream>
using namespace std;

int calcPotenciaRecursivo(int base, int exp);

int main(){
	int base, exp;
	do{
		cout << "Ingrese número y base: ";
		cin >> base >> exp;
		int potencia = calcPotenciaRecursivo(base , exp);
		cout << "La potencia es: " << potencia << endl;
	} while (base != 0);
	
	return 0;
}

int calcPotenciaRecursivo(int base, int exp){
	if (exp == 0) return 1;
	return base * calcPotenciaRecursivo(base, exp - 1); 
}
