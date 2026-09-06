/*
	Dado un arreglo ordenado de enteros,
	implementa una funcion recursiva en C++
	que determine si un numero x esta dentro del arreglo.
	(Binary seach)
*/

#include <iostream>
using namespace std;

bool buscar(int* arr, int ini, int fin, int x);

int main(){
	int A[] = {2, 4, 7, 10, 15, 20, 31};
	int n = sizeof(A)/sizeof(A[0]);
	int x = 1;
	
	if(buscar(A, 0, n-1, x)){
		cout << "Existe" << endl;
	} else{
		cout << "No existe" << endl;
	}
	
	return 0;
}


bool buscar(int* arr, int ini, int fin, int x){
	if(ini > fin) return false;
	int mid = (ini + fin) / 2;
	if(arr[mid] == x) return true;
	
	if (x<arr[mid]){
		return buscar(arr, ini, mid-1, x);
	} 
	else
		return buscar(arr, mid+1, fin, x);
}

