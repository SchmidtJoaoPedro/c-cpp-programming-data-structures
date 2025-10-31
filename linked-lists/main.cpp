#include <iostream>
using namespace std;

typedef struct no {
    int valor;
    struct no* prox;
} *lista;

int soma(lista p) {
    lista aux = p;
    int s = 0;
    while (aux != NULL) {
        s += aux->valor;
        aux = aux->prox;
    }
    return s;
}

int conta(lista p) {
    lista aux = p;
    int c = 0;
    while (aux != NULL) {
        c++;
        aux = aux->prox;
    }
    return c;
}

void mostra(lista p) {
    lista aux = p;
    while (aux != NULL) {
        cout << aux->valor << " ";
        aux = aux->prox;
    }
}

int main() {
    lista x;
    x = new no;
    x->valor = 12;
    x->prox = new no;
    x->prox->valor = 50;
    x->prox->prox = NULL;
    
    mostra(x);
    cout << "\nTotal: " << soma(x) << endl;
    cout << "Tamanho: " << conta(x) << endl;

    return 0;
}
