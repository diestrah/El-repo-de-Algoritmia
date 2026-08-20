#include <iostream>
using namespace std;

int calcPotenciaRecursivo(int base, int exp);

int main(){
	int base, exp;
	do{
		cout << "Ingrese número y base: ";
		cin >> base >> exp;
		int potencia = calcPotenciaRecursivo(base , exp);
		cout << "La potencia es: " << potencia << endl;
	} while(base!=0);
	return 0;
}


int calcPotenciaRecursivo(int base, int exp){
	if(exp==0) return 1;
	return base*calcPotenciaRecursivo(base, exp-1); 
}

