#include <iostream>
using namespace std;

void imprimirRecursivoAsc(int num){
    if (num == 0) return;
    cout << num << " ";
    imprimirRecursivoAsc(num - 1);
}

void imprimirRecursivoDesc(int num){
    if (num == 0) return;
    imprimirRecursivoDesc(num - 1);
    cout << num << " ";
}

int main(){
    int num;
    while (true) {
        cout << "Ingrese numero ";
        cin >> num;
        if (num == 0) break;
        imprimirRecursivoAsc(num);
        cout << endl;
        imprimirRecursivoDesc(num);
        cout << endl;
    };

    return 0;
}
