#include <iostream>
using namespace std;

#define N 7

int sumarArrayRecursivo(int *arrNum, int n);

int main(){
	int arrNum[N]={23, 17, 43, 12, 87, 43, 12};
	
	int suma = sumarArrayRecursivo(arrNum, N-1);
	cout << endl << "La suma es: " << suma;
	
	return 0;
}

int sumarArrayRecursivo(int *arrNum, int n){
	cout << arrNum[n] << " "; // vemos el recorrido
	if (n < 1) return arrNum[0];
	return arrNum[n] + sumarArrayRecursivo(arrNum, n-1);
}
