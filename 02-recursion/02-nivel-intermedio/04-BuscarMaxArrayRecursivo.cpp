#include <iostream>
using namespace std;
#define N 10

void buscarMaxRecursivo(int* arrNum, int n, int& max);

int main(){
	int arrNum[N] = {15, 23 ,45 ,7 ,5, 16 ,65, 84, 82, 15};
	int max=0;
	buscarMaxRecursivo(arrNum, N-1, max);
	cout << "El maximo es: " << max;
	return 0;
} 

void buscarMaxRecursivo(int* arrNum, int n, int& max){
	if (n < 0) return;
	if (max < arrNum[n]) max = arrNum[n];
	buscarMaxRecursivo(arrNum, n-1, max);	
}
