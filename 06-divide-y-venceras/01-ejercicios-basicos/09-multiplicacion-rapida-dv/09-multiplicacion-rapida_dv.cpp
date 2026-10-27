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
	else return mitad + mitad + (b > 0 ? a : -a);
}
