#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


void selectionSort(string nomes[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (nomes[j].length() < nomes[min_idx].length()) 
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            swap(nomes[i], nomes[min_idx]);
        }
    }
}

int main() 
{
    int n;
    cout << "Digite o número de nomes: ";
    cin >> n;

    string* nomes = new string[n];


    for (int i = 0; i < n; i++)
    {
        cout << "Digite o nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

    
    selectionSort(nomes, n);

    
    cout << "Nomes ordenados pelo tamanho:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << nomes[i] << endl;
    }

    
    delete[] nomes;

    return 0;
}
