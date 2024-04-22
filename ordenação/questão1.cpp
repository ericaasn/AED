
   #include <iostream>
#include <vector>
#include <string>

using namespace std;

void insertionSort(vector<string> &nomes) 
{
    int n = nomes.size();
    for (int i = 1; i < n; i++)
    {
        string chave = nomes[i];
        int j = i - 1;
        while (j >= 0 && nomes[j] > chave) 
        {
            nomes[j + 1] = nomes[j];
            j = j - 1;
        }
        nomes[j + 1] = chave;
    }
}

int main() 
{
    int n;
    cout << "Digite o número de nomes: ";
    cin >> n;

    vector<string> nomes;
    string nome;

 
    for (int i = 0; i < n; i++)
    {
        cout << "Digite o nome " << i + 1 << ": ";
        cin >> nome;
        nomes.push_back(nome);
    }

    
    insertionSort(nomes);

   
    cout << "Nomes ordenados:" << endl;
    for (const string& nome : nomes)
    {
        cout << nome << endl;
    }

    return 0;
}
