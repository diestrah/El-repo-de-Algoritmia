/*	Ejercicio:
/*	Contar las inversiones de dos arrays.
/*	Al momento de contar las inversiones, insertar los datos
/*	ordenadamente en otro array. Finalmente, imprimir este	
/*	último array.
*/

#include <iostream>
using namespace std;

void imprimirArray(int* aux, int tam);

int main(){
	int A[] = {2, 4};
	int iA = 0;
	int maxA = sizeof(A)/sizeof(A[0]);
	int B[] = {1, 3, 5};
	int iB = 0;
	int maxB = sizeof(B)/sizeof(B[0]);
	
	int tam = maxA+maxB;
	int aux[tam];
	int inv = 0;
		
	for(int i=0; i<tam; i++){
		if (iA >= maxA) 
			aux[i] = B[iB++];
		else if (iB >= maxB)
			aux[i] = A[iA++];
		else if (A[iA] > B[iB]){
			aux[i] = B[iB++];		
			inv += maxA-iA;
		}
		else
			aux[i] = A[iA++];
	}
	
	imprimirArray(aux, tam);
	cout << inv << " inversiones " << endl;
	return 0;
}

void imprimirArray(int* aux, int tam){
	for(int i=0; i<tam; i++){
		cout << aux[i] << " ";
	}
	cout << endl;
}
