#include <iostream>
using namespace std;


int pesqseq(int val, int vet[], int n);

int main() {
    int vet[10];
   
    for(int i = 0; i < 10; i++) {
        cout << "Digite o valor da posicao " << i << " do vetor: ";
        cin >> vet[i];
    }

    int val;
    cout << "Digite o valor a ser procurado no vetor: ";
    cin >> val;

    int pos = pesqseq(val, vet, 10);

    if(pos == -1) {
        cout << "Valor nao encontrado no vetor" << endl;
    } else {
        cout << "Valor encontrado na posicao " << pos << " do vetor" << endl;
    }

    return 0;
}


int pesqseq(int val, int vet[], int n) {
    for(int i = 0; i < n; i++) {
        if(vet[i] == val) {
            return i;
        }
    }

    return -1;
}
