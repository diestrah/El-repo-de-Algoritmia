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

