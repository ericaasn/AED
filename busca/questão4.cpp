#include <iostream>
using namespace std;


int pesqbin(int val, int vet[], int n);

int main() {
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 

    int val;
    cout << "Digite o valor a ser procurado no vetor: ";
    cin >> val;

    int pos = pesqbin(val, vet, 10);

    if(pos == -1) {
        cout << "Valor nao encontrado no vetor" << endl;
    } else {
        cout << "Valor encontrado na posicao " << pos << " do vetor" << endl;
    }

    return 0;
}


int pesqbin(int val, int vet[], int n) {
    int ini = 0;
    int fim = n - 1;
    int meio;

    while(ini <= fim) {
        meio = (ini + fim) / 2;

        if(val == vet[meio]) {
            return meio; 
        }

        if(val < vet[meio]) {
            fim = meio - 1;
        } else {
            ini = meio + 1;
        }
    }

    return -1; 
}
