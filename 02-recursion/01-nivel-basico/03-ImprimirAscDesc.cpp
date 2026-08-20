#include <iostream>
using namespace std;

void imprimirRecursivoAsc(int num);
void imprimirRecursivoDesc(int num);

int main(){
	int num;
	
	do{
		cout << "Ingrese numero ";
		cin >> num;
		imprimirRecursivoAsc(num);
		cout << endl;
		imprimirRecursivoDesc(num);
		cout << endl;
	} while(num!=0);
	
	return 0;
}


void imprimirRecursivoAsc(int num){
	if(num == 0) return;
	cout << num << " ";
	imprimirRecursivoAsc(num-1);
}

void imprimirRecursivoDesc(int num){
	if(num == 0) return;
	imprimirRecursivoDesc(num-1);
	cout << num << " ";
}
