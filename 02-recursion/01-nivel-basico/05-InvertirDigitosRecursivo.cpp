#include <iostream>
using namespace std;


int invertirNumero(int num);
int invertirRecursivo(int num, int suma);


int main(){
	int num;
	do{
		cout << "Ingrese numero: ";
		cin >> num;
		int inv = invertirNumero(num);
		cout << endl;
		cout << "El numero invertido es: " << inv << endl;
	} while(num!=0);
	
	return 0;
}


int invertirNumero(int num){
	return invertirRecursivo(num, 0);
}


int invertirRecursivo(int num, int suma){
	if(num==0) return suma;
	int digito = num%10;
	cout << digito << " ";
	return invertirRecursivo(num/10, suma*10+digito);
}

