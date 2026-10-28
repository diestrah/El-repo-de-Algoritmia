#include <iostream>
using namespace std;

void imprimirArray(int* aux, int tam) {
    for (int i = 0; i < tam; i++)
        cout << aux[i] << " ";
    cout << endl;
}

int main() {
    // Array A
    int A[] = {2, 4};
    int iA = 0; // �ndice para el array A
    int maxA = sizeof(A) / sizeof(A[0]);

    // Array B
    int B[] = {1, 3, 5};
    int iB = 0; // indice para el array B
    int maxB = sizeof(B) / sizeof(B[0]);

    // Definicion del nuevo array
    int tam = maxA + maxB;
    int aux[tam];

    // Merge
    for (int i = 0; i < tam; i++) {
        if (iA >= maxA)
            aux[i] = B[iB++];
        else if (iB >= maxB)
            aux[i] = A[iA++];
        else if (A[iA] < B[iB])
            aux[i] = A[iA++];
        else
            aux[i] = B[iB++];
    }

    // Mostrar valores
    imprimirArray(aux, tam);

    return 0;
}
