#include <iostream>
using namespace std;

void troca(int* x, int* y) {
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main() {
    int A = 50, B = 22;
    cout << "A = " << A << "  B = " << B << endl; // mostra A = 50, B = 22
    troca(&A, &B); // troca A com B
    cout << "A = " << A << "  B = " << B << endl; // mostra B = 50, A = 22

    return 0;
}
