#include <iostream>
using namespace std;

int potencia(int base, int exp) {
    if (exp == 0) return 1;
    int mitad = potencia(base, exp / 2);
    if (exp % 2 == 0) return mitad * mitad;
    return mitad * mitad * base;
}

int main() {
    int base = 2;
    int exp = 10;
    cout << potencia(base, exp);
    return 0;
}

