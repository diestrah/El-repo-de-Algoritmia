#include <iostream>
using namespace std;

void contarInversiones(int* A, int ini, int fin, int& cant);
void contabilizar(int* A, int ini, int mid, int fin, int& cant);
void imprimirArray(int* aux, int tam);

int main(){
	int A[] = {2, 4, 1, 3, 5};
	int n = sizeof(A) / sizeof(A[0]);
	int cant=0;
	contarInversiones(A, 0, n-1, cant);
	imprimirArray(A, n);
 	cout << "Hay " << cant << " inversiones " << endl;
	
	return 0;
}



void contarInversiones(int* A, int ini, int fin, int& cant){
	if (ini == fin) return;
	int mid = (ini + fin) / 2;
	contarInversiones(A, ini, mid, cant);
	contarInversiones(A, mid+1, fin, cant);
	contabilizar(A, ini, mid, fin, cant);
}

void contabilizar(int* A, int ini, int mid, int fin, int& cant){
	if (ini == fin) return;
	int n = fin - ini + 1;
	int aux[n];
	for(int i=0; i<n; i++) aux[i] = A[ini+i];
	
	int izq = 0;
	int maxIzq = mid - ini;	
	int der = mid - ini + 1;
	int maxDer = fin - ini;
	
	for(int i=0; i<n; i++){
		if (izq > maxIzq)
			A[ini + i] = aux[der++];
		else if (der > maxDer)
			A[ini + i] = aux[izq++];
		else if (aux[izq] > aux[der]){
			A[ini + i] = aux[der++];
			cant += maxIzq - izq + 1;
		}
		else 
			A[ini + i] = aux[izq++];
	}
}

void imprimirArray(int* aux, int tam){
	for(int i=0; i<tam; i++){
		cout << aux[i] << " ";
	}
	cout << endl;
}

