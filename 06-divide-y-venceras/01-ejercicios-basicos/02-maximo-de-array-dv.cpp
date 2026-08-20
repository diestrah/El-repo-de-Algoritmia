/*
	Dado un arreglo de enteros,
	escribe una funcion recursiva en C++
	que encuentre el valor maximo usando divide y venceras.
*/

#include <iostream>
using namespace std;

int max(int *arr, int ini, int fin);

int main(){
	int A[] = {8, 3, 10, 5, 2, 14, 1};
	int n = sizeof(A)/sizeof(A[0]);
	
	cout << "El mayor valor es: " << max(A, 0, n-1) << endl;
	return 0;
}


int max(int *arr, int ini, int fin){
	if(ini == fin) return arr[ini];
	int mid = (fin + ini) / 2;
	int max_izq = max(arr, ini, mid);
	int max_der = max(arr, mid+1, fin);	
	return (max_izq > max_der) ? max_izq : max_der;
}
