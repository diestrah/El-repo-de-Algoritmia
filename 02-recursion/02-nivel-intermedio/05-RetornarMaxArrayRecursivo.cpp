#include <iostream>
using namespace std;
#define N 10

int buscarMaxRecursivo(int* arr, int n);

int main(){
	int arrNum[N] = {15, 23 ,45 ,7 ,5, 16 ,65, 84, 82, 15};
	int max = buscarMaxRecursivo(arrNum, N-1);
	cout << "El maximo es: " << max;
	return 0;
} 

int buscarMaxRecursivo(int *arr, int n){
		if (n == 0) return arr[n];
		return max(arr[n], buscarMaxRecursivo(arr, n-1));
	}
	
int max(int a, int b){
	return a > b ? a : b;
}

/*
	Versión alternativa:
	int buscarMaxRecursivo(int* arr, int n){
		if (n == 0) return arr[n]; // caso base
		int num = arr[n];
		int numMax = buscarMaxRecursivo(arr, n-1);
		return num > numMax ? num : numMax;
	}

*/
