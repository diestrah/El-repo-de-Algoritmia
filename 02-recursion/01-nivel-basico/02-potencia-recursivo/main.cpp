#include <iostream>
using namespace std;

int calcPotenciaRecursivo(int base, int exp) {
    if (exp == 0) return 1;
    return base * calcPotenciaRecursivo(base, exp - 1);
}

int main() {
    int base, exp;
    while (true) {
        cout << "Ingrese número y base: ";
        cin >> base >> exp;
        if (base == 0 && exp == 0) break;
        int potencia = calcPotenciaRecursivo(base, exp);
        cout << "La potencia es: " << potencia << endl;
    };

    return 0;
}
