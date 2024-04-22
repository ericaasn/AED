#include <iostream>
#include <cstring>

using namespace std;

struct pessoa 
{
    int Matricula;
    char Nome[30];
    float Nota;
};


void merge(pessoa arr[], int l, int m, int r, int escolha) 
{
    int n1 = m - l + 1;
    int n2 = r - m;

    
    pessoa L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        bool comparacao;
        if (escolha == 1)
            comparacao = L[i].Matricula <= R[j].Matricula;
        else if (escolha == 2)
            comparacao = strcmp(L[i].Nome, R[j].Nome) <= 0;
        else
            comparacao = L[i].Nota <= R[j].Nota;

        if (comparacao) 
        {
            arr[k] = L[i];
            i++;
        } else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

   
    while (j < n2) 
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(pessoa arr[], int l, int r, int escolha)
{
    if (l < r) 
    {
        
        int m = l + (r - l) / 2;

        
        mergeSort(arr, l, m, escolha);
        mergeSort(arr, m + 1, r, escolha);

        
        merge(arr, l, m, r, escolha);
    }
}


void printArray(pessoa arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << "Matricula: " << arr[i].Matricula << ", Nome: " << arr[i].Nome << ", Nota: " << arr[i].Nota << endl;
    }
}

int main() 
{
    int N;
    cout << "Digite o número de pessoas: ";
    cin >> N;

    pessoa pessoas[N];

    
    for (int i = 0; i < N; i++) 
    {
        cout << "Digite a matricula da pessoa " << i + 1 << ": ";
        cin >> pessoas[i].Matricula;
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        cin.ignore();
        cin.getline(pessoas[i].Nome, 30);
        cout << "Digite a nota da pessoa " << i + 1 << ": ";
        cin >> pessoas[i].Nota;
    }

    int escolha;
    cout << "Escolha o campo para ordenar (1 - Matricula, 2 - Nome, 3 - Nota): ";
    cin >> escolha;

    
    mergeSort(pessoas, 0, N - 1, escolha);

 
    cout << "\nArray de pessoas ordenado:\n";
    printArray(pessoas, N);

    return 0;
}
