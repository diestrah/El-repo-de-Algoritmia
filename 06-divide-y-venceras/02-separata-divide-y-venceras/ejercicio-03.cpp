#include <iostream>

using namespace std;

int buscarMin(int* arr, int ini, int fin);

int main(){
	int arr[] = {5, 6, 7, 2, 3, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "El minimo es: " << buscarMin(arr, 0, n-1);
	
	return 0;	
}



int buscarMin(int* arr, int ini, int fin){
	if(ini >= fin) return arr[fin+1];
	int mid = (ini + fin) / 2;
	if (arr[ini]>arr[mid])
		return buscarMin(arr, ini, mid-1);
	else
		return buscarMin(arr, mid+1, fin);
}
