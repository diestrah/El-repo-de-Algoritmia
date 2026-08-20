#include <iostream>
using namespace std;

void imprimirArrayPorIndiceAscendente(int* arr, int n);

int main(){
	int arr[] = {23, 17, 43, 12, 87, 43, 12};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	imprimirArrayPorIndiceAscendente(arr, n-1);
	
	return 0;
}

void imprimirArrayPorIndiceAscendente(int* arr, int n){
	if (n < 0) return;
	imprimirArrayPorIndiceAscendente(arr, n-1);
	cout << arr[n] << " ";	
}

