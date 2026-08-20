#include <iostream>
using namespace std;
#include <cstring>

bool esPalindromo(const char* str, int izq, int der);

int main(){
	char cadena[200];
	int izq, der; // índices del array cadena

	cout << "Ingrese cadena: "; cin >> cadena;

	izq = 0;
	der = strlen(cadena) - 1;

	if(esPalindromo(cadena, izq, der))
		cout << cadena << " es palindromo" << endl; 
	else
		cout << "No es palindromo" << endl;
	
	return 0;
}


bool esPalindromo(const char* str, int izq, int der){
	if(izq > der) return true;
	
	if (str[izq] == str[der]){
		return esPalindromo(str, izq + 1, der - 1);
	} 
	else { 
		return false;
	}
}
