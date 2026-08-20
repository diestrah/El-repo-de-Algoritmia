/*
 *  Autor	: 	Naim Diestra
 *  Fecha	:	28/06/2026
 *
 *	Descripción:
 *  Este programa implementa una función que verifica si un array de caracteres (una cadena)
 *  es una palabra palíndroma o no.
 *  ¿Qué es una palabra palíndroma? Es aquella palabra la cual si invertimos sus letras dice lo mismo.
 *  Ejemplo: 
 *  Hola -> aloh  				- No es palíndroma DDDD:
 *  Reconocer -> Reconocer 		- Es palindroma :DDDD
 *
 *  Restricciones:
 *  Solo se debe utilizar recursión. 
*/	


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
	if (str[izq] == str[der]) 
		return esPalindromo(str, izq + 1, der - 1);
	else 
		return false;
}
