#include <iostream>
using namespace std;

int sumarDigitosRecursivo(int num){
    if (num == 0) return 0;
    int digito = num % 10;
    return digito +	sumarDigitosRecursivo(num / 10);
}

int main(){
    int num;
    while (true) {
        cout << "Ingrese numero: ";
        cin >> num;
        if (num == 0) break;
        int suma = sumarDigitosRecursivo(num);
        cout << "La suma de digitos es: " << suma << endl;
    }

    return 0;
}
