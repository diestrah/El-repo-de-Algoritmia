/*-------------------------------------------------------------------*/
/*  Ejercicio:
 *  Buscar el pico de un arreglo bitónico usando recursión.
 *
 *  El arreglo está ordenado de forma que sus valores primero crecen
 *  y luego decrecen. El pico es el valor máximo único del arreglo.
 *
 * 	Nota: No pueden existir dos picos dentro del array.
 *
 *  Complejidad: O(log n).
/*-------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int buscarPico(int* A, int ini, int fin);

int main(){
	int A[] = {1, 3, 17, 12, 9, 5, 2};
	int n = sizeof(A)/sizeof(A[0]);
	
	cout << "pico: " << buscarPico(A, 0, n-1);
	
	return 0;
}


int buscarPico(int* A, int ini, int fin){
	if(ini == fin) return A[ini];
	
	int mid = (ini + fin) / 2;
	
	if (A[mid-1] < A[mid] and A[mid] > A[mid+1]) 
		return A[mid];
	else {
		if (A[mid]<A[mid+1])
			return buscarPico(A, mid+1, fin);
		else 
			return buscarPico(A, ini, mid-1);
	}
	
}
