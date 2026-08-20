/*
 *  Autor	: 	Naim Diestra
 *  Fecha	:	28/06/2026
 *
 *	Descripción:
 *  Este programa implementa una función que imprime un array
 *  de números en orden descendente por su índice. 
 *
 *  Restricciones:
 *  Solo se debe utilizar recursión. La función debe incluir solo dos parámetros.
 *  No se debe invertir el arreglo.
*/	


#include <iostream>
using namespace std;
#define N 7

void imprimirArrayPorIndiceDescendente(int* arr, int n);

int main(){
	int arr[N] = {23, 17, 43, 12, 87, 43, 12};
	imprimirArrayPorIndiceDescendente(arr, N-1);
	return 0;
}

void imprimirArrayPorIndiceDescendente(int* arr, int n){
	if (n < 0) return;
	cout << arr[n] << " ";	
	imprimirArrayPorIndiceDescendente(arr, n-1);
}

