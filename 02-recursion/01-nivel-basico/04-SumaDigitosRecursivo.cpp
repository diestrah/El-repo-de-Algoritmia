/*
 *  Autor	: 	Naim Diestra
 *  Fecha	:	13/05/2026
 *
 *	Descripción:
 *  Este programa implementa una función que calcular la suma de sus dígitos utilizando recurisión.
 *
 *  Restricciones:
 *  Solo se debe utilizar recursión. 
*/	

#include <iostream>
using namespace std;

int sumarDigitosRecursivo(int num);

int main(){
	int num;
	do {
		cout << "Ingrese numero: ";
		cin >> num;		
		int suma = sumarDigitosRecursivo(num);
		cout << "La suma de digitos es: " << suma << endl;
	} while (num != 0);
	
	return 0;
}

int sumarDigitosRecursivo(int num){
	if (num == 0) return 0;
	int digito = num % 10;
	return digito +	sumarDigitosRecursivo(num / 10);
}
