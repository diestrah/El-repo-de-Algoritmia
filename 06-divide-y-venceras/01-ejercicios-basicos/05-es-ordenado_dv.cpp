/*
	Dado un arreglo de enteros,
	implementa una funcion recursiva con divide y venceras
	que determine si el arreglo esta ordenado de menor a mayor.
*/
#include <iostream>
using namespace std;

bool estaOrdenado(int *arr, int ini, int fin);

int main(){
	int A[] = {1, 5, 3, 10};
	int n = sizeof(A)/sizeof(A[0]);
	
	if(estaOrdenado(A, 0, n-1)){
		cout << "Esta ordenado" << endl;
	} else{
		cout << "No est� ordenado" << endl;
	}

	return 0;
}

bool estaOrdenado(int *arr, int ini, int fin){
	if(ini == fin) return true;
	int mid = (ini + fin) / 2;	
	bool izq = estaOrdenado(arr, ini, mid);
	bool der = estaOrdenado(arr, mid+1, fin);
	return izq && der && arr[mid] <= arr[mid+1];
}

