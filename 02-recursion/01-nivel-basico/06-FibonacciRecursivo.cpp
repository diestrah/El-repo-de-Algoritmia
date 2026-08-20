#include <iostream>
using namespace std;


int buscarFibonacci(int n);

int main(){
	int n;
	do{
		cout << "Ingrese posicion n de la serie de fibonacci: ";
		cin >> n;
		int fibonacci = buscarFibonacci(n);
		cout << "El numero de Fibonacci es: " << fibonacci << endl;
	} while(n != 0);
	
	return 0;
}

int buscarFibonacci(int n){
	if(n==1) return 0;
	if(n==2) return 1;
	return buscarFibonacci(n-1) + buscarFibonacci(n-2);
}

