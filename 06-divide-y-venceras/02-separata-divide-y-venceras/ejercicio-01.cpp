#include <iostream>
using namespace std;

int buscar_unico(int* arr, int ini, int fin);

int main(){
	int arr[] = {1, 1, 3, 3, 4, 5, 5, 7, 7, 8, 8};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "El elemento unico es: " << buscar_unico(arr, 0, n-1);
	return 0;	
}

int buscar_unico(int* arr, int ini, int fin){
	if (fin < ini) return -1;
	if (ini == fin) return arr[ini];
	
	int mid = (ini + fin) / 2;
	
	// Vamos al primer índice de una posible pareja
	if (mid % 2 != 0) mid--;

	if (arr[mid] == arr[mid + 1]) 
		return buscar_unico(arr, mid + 1, fin);
	
	return buscar_unico(arr, ini, mid);
}

