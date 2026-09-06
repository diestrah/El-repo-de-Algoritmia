/*	Dado un arreglo de enteros, 
	implementa una funcion con divide y venceras 
	que encuentre el minimo y el maximo del arreglo.
*/

#include <iostream>
using namespace std;

// struct que almacena el max y min valor
struct Resultado{
	int min;
	int max;
};

struct Resultado minMax(int* arr, int ini, int fin);

int main(){
	int arr[] = {8, 3, 10, 5, 2, 14, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	struct Resultado dato = minMax(arr, 0, n-1);
	cout << "minimo: "<<dato.min << endl;
	cout << "maximo: "<<dato.max << endl;
	return 0;
}


struct Resultado minMax(int* arr, int ini, int fin){
	if(ini == fin){
		Resultado primero;
		primero.max = arr[ini];
		primero.min = arr[ini];
		return primero;		
	}
	int mid = (ini+fin) / 2;
	struct Resultado izq = minMax(arr, ini, mid);
	struct Resultado der = minMax(arr, mid+1, fin);
	struct Resultado final;
	
	final.min = (izq.min < der.min) ? izq.min : der.min;
	final.max = (izq.max > der.max) ? izq.max : der.max;
	
	return final;
}
