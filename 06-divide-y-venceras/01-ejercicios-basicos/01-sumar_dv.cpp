/*
	Dado un arreglo de numeros enteros,
	escribe un algoritmo recursivo usando divide y venceras
	para calcular la suma total.
*/

#include <iostream>
using namespace std;

int sumar(int* arr, int ini, int fin);

int main(){	
	int A[] = {4, 2, 7, 1, 3};
	int n = sizeof(A)/sizeof(A[0]);
	cout << "la suma es " << sumar(A, 0, n-1) << endl;	
	return 0;
}

int sumar(int* arr, int ini, int fin){
	if(ini == fin) return arr[ini];
	int mid = (ini + fin) / 2;
	return sumar(arr, ini, mid) + sumar(arr, mid+1, fin);
}

