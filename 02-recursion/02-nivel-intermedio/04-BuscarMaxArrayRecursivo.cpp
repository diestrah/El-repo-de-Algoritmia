/*
 *  Autor	: 	Naim Diestra
 *  Fecha	:	28/06/2026
 *
 *	Descripción:
 *  Este programa implementa una función que encuentra el máximo valor dentro de un
 *  arreglo de enteros.
 *
 *  Restricciones:
 *  Solo se debe utilizar recursión. La función debe incluir solo tres parámetros.
 *  No debe retornar ningún valor la función (void).
*/	

#include <iostream>
using namespace std;
#define N 10

void buscarMaxRecursivo(int* arrNum, int n, int& max);

int main(){
	int arrNum[N] = {15, 23 ,45 ,7 ,5, 16 ,65, 84, 82, 15};
	int max=0;
	buscarMaxRecursivo(arrNum, N-1, max);
	cout << "El maximo es: " << max;
	return 0;
} 

void buscarMaxRecursivo(int* arrNum, int n, int& max){
	if (n < 0) return;
	if (max < arrNum[n]) max = arrNum[n];
	buscarMaxRecursivo(arrNum, n-1, max);	
}
