/*	Ejercicio:
/*	Calcula la potencia de un número utilizando divide y vencerás.
/*	Los parámetros que entran a la función son la base y el exponente.
/*	Nota: Los exponentes deben ser positivos.
/*	Complejidad: log(n)
*/	

#include <iostream>
using namespace std;

int potencia(int base, int exp);

int main(){
	int base = 2;
	int exp = 10;
	cout << potencia(base, exp); 
	return 0;
} 


int potencia(int base, int exp){
	if (exp == 0) return 1;
	int mitad = potencia(base, exp/2);
	if(exp%2 == 0) return mitad * mitad;
	else return mitad * mitad * base;
}

