#include <iostream>
using namespace std;

int buscarFibonacci(int n) {
    if (n <= 2) return 1;
    return buscarFibonacci(n - 1) + buscarFibonacci(n - 2);
}

int main() {
    int n;
    while (true) {
        cout << "Ingrese posicion n de la serie de fibonacci: ";
        cin >> n;
        if (n == 0) break;
        int fibonacci = buscarFibonacci(n);
        cout << "El numero de Fibonacci es: " << fibonacci << endl;
    };

    return 0;
}
