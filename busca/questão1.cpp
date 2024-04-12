#include <iostream>
using namespace std;

int main() {
    int vet[10]; // cria um vetor de inteiros com 10 posições

    // preenche o vetor com inteiros
    for(int i = 0; i < 10; i++) {
        cout << "Digite o valor da posição " << i << " do vetor: ";
        cin >> vet[i];
    }

    // imprime o vetor
    cout << "Vetor: ";
    for(int i = 0; i < 10; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;

    return 0;
};
     
