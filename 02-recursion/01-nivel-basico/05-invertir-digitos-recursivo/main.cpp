#include <iostream>
using namespace std;

int invertirRecursivo(int num, int suma) {
    if (num == 0) return suma;
    int digito = num % 10;
    cout << digito << " ";
    return invertirRecursivo(num / 10, suma * 10 + digito);
}

int invertirNumero(int num) {
    return invertirRecursivo(num, 0);
}

int main() {
    int num;
    while (true) {
        cout << "Ingrese numero: ";
        cin >> num;
        if (num == 0) break;
        int inv = invertirNumero(num);
        cout << "\nEl numero invertido es: " << inv << endl;
    }

    return 0;
}
