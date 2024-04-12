#include <iostream>
using namespace std;

int main() {
    int vet[10]; 

   
    for(int i = 0; i < 10; i++) {
        cout << "Digite o valor da posicao " << i << " do vetor: ";
        cin >> vet[i];
    }

   
    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(vet[i] > vet[j]) {
                int temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }

   
    cout << "Vetor: ";
    for(int i = 0; i < 10; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;

    return 0;
}
