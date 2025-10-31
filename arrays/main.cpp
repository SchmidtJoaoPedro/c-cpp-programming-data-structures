#include <iostream>
using namespace std;

int main() {
    int QtD, i, x = 0;
    float* Nota = NULL, S = 0, NC;

    cout << "Quantidade de notas: ";
    cin >> QtD;

    Nota = new float[QtD];

    for (i = 0; i < QtD; i++) {
        cout << "Entre com a nota " << i + 1 << ": ";
        cin >> Nota[i];
    }

    for (i = 0; i < QtD; i++) {
        S += Nota[i];
    }

    cout << "Soma das notas: " << S << endl;

    cout << "Nota de corte: ";
    cin >> NC;

    for (i = 0; i < QtD; i++) {
        if (Nota[i] >= NC) {
            x++;
        }
    }

    cout << "Notas maiores que a nota de corte: " << x << endl;

    delete[] Nota;
    return 0;
}
