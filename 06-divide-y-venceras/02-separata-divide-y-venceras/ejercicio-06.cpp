#include <iostream>
using namespace std;


int contarInversiones(int* arr, int ini, int fin);
int merge(int* arr, int ini, int mid, int fin);

int main(){
	int arr[] = {2, 4, 1, 3, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Hay " << contarInversiones(arr, 0, n-1) << " inversiones" << endl;
	
	return 0;
}


int contarInversiones(int* arr, int ini, int fin){
	if(ini == fin) return 0;
	
	int mid = (ini + fin) / 2;
	
	int cantIzq = contarInversiones(arr, ini, mid);
	
	int cantDer = contarInversiones(arr, mid+1, fin);
	
	int cantInv = merge(arr, ini, mid, fin);
	
	return cantIzq + cantDer + cantInv;
}

int merge(int* arr, int ini, int mid, int fin){
	int n = fin - ini + 1;
	int aux[n];
	for(int i=0; i<n; i++) aux[i] = arr[ini+i];
	
	int izq = 0;
	int finIzq = mid- ini;
	int der = mid - ini + 1;
	int finDer = fin - ini;
	
	int cant = 0;
	
	for(int i=0; i<n; i++){
		if (izq > finIzq) 
			arr[ini + i] = aux[der++];
		else if(der > finDer)
			arr[ini + i] = aux[izq++];
		else if(aux[izq] < aux[der])
			arr[ini + i] = aux[izq++];
		else{
			arr[ini + i] = aux[der++];
			cant += finIzq - izq + 1; // cant elementos izq
		}	
	}
	
	return cant;
}	
