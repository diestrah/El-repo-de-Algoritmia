/*
	Dado un arreglo no necesariamente ordenado,
	cuenta cuantas veces aparece un numero x
	usando divide y venceras.
*/

#include <iostream>
using namespace std;

int contar(int* arr, int ini, int fin, int x);

int main(){
	int A[] = {2, 4, 7, 4, 15, 4, 31};
	int x = 4;
	int n = sizeof(A)/sizeof(A[0]);
	cout << contar(A, 0, n-1, x)<< endl;
	return 0;
}

int contar(int* arr, int ini, int fin, int x){
	if (ini == fin) {
		if (arr[ini] == x) return 1;	
		else return 0;
	}
	int mid = (fin + ini) / 2;
	int cant_izq = contar(arr, ini, mid, x);
	int cant_der = contar(arr, mid+1, fin, x);
	return cant_izq + cant_der;
}
