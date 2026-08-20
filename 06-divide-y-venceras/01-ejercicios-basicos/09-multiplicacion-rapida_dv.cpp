/*	Ejercicio:
/*	Calcula el producto de dos número utilizando divide y vencerás.
/*	Nota: el algoritmo debe aplicar para valores positivos y negativos de los números
/*	Complejidad: log(n)
*/	

#include <iostream>
using namespace std;

int multiplicar(int a, int b);

int main(){
	int a = 7;
	int b = 6;
	cout << multiplicar(a, b);	
	return 0;
}

int multiplicar(int a, int b){
	if(b == 0) return 0;
	int mitad = multiplicar(a, b/2);
	if(b%2==0) return mitad + mitad;
	else return mitad + mitad + a;
}

