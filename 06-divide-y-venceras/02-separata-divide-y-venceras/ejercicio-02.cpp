#include <iostream>
using namespace std;

void imprimir_array(int* arr, int n);

int contar_ceros(int* arr, int ini, int fin);
int contar_unos(int* arr, int ini, int fin);


int main(){
	int arr[] = {0, 0, 0, 0, 1, 1, 1, 1};
	int n = sizeof(arr) / sizeof(arr[0]);	
	
	imprimir_array(arr, n);
	
	cout << endl << "Cantidad de 0s: " << contar_ceros(arr, 0, n-1);
	
	cout << endl << "Cantidad de 1s: " << contar_unos(arr, 0, n-1);
	return 0;
}

void imprimir_array(int* arr, int n){
	cout << endl << "Array: " << endl;
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl; 
}


int contar_ceros(int* arr, int ini, int fin){
	if(ini>fin) return 0;
	int mid = (ini + fin) / 2;
	
	if (arr[mid] == 0)
		return mid - ini + 1 + contar_ceros(arr, mid+1, fin);
	else
		return contar_ceros(arr, ini, mid-1);
}

int contar_unos(int* arr, int ini, int fin){
	if (ini>fin) return 0; // encontro ultimo 0;
	int mid = (ini + fin) / 2;
	if(arr[mid] == 1)
		return fin - mid + 1 + contar_unos(arr, ini, mid-1);
	else //(arr[mid] == 0)
		return contar_unos(arr, mid+1, fin);
}


