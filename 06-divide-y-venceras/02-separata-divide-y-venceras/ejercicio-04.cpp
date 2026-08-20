#include <iostream>
using namespace std;

int sumaMax(int* arr, int ini, int fin);	
int sumaMaxCentro(int *arr, int ini, int mid, int fin);
	

int main(){
	int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "La suma maxima es: " << sumaMax(arr, 0, n-1);		
	return 0;
}

int sumaMax(int* arr, int ini, int fin){
	if(ini == fin) return arr[ini];
	int mid = (ini + fin) / 2;
	int izq = sumaMax(arr, ini, mid);
	int der = sumaMax(arr, mid+1, fin);
	int medio = sumaMaxCentro(arr, ini, mid, fin);
	return max(medio, max(izq, der));
}	

int sumaMaxCentro(int *arr, int ini, int mid, int fin){
	int maxIzq = 0, maxDer = 0;
	int izq = 0;
	int finIzq = mid - ini;
	int der = mid - ini + 1;
	int finDer = fin - ini + 1;
	
	int suma = 0;
	for(int i=izq; i<finIzq; i++){
		suma += arr[i];
		if (suma>maxIzq) maxIzq = suma;
	}
	
	suma = 0;
	for(int i=der; i<finDer; i++){
		suma += arr[i];
		if(suma > maxDer) maxDer = suma;
	}
	return maxIzq + maxDer;
}

int max(int a, int b){
	return a>b ? a : b;
}
