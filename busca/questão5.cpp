#include <iostream>
using namespace std;


int pesqseq(int val, int vet[], int n);


int pesqbin(int val, int vet[], int n);


int pesqsent(int val, int vet[], int n);

int main() 
{
    int vet[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int val;
    cout << "Digite o valor a ser procurado no vetor: ";
    cin >> val;

    int posseq = pesqseq(val, vet, 100);
    int posbin = pesqbin(val, vet, 100);
    int possent = pesqsent(val, vet, 100);

    int nseq = 0;
    int nbin = 0;
    int nsent = 0;

    if(posseq != -1) {
        for(int i = 0; i < 100; i++) 
        {
            if(vet[i] == val)
            
            {
                nseq++;
            }
        }
    }

    if(posbin != -1) 
    {
        int meio;
        int ini = 0;
        int fim = 99;

        do {
            meio = (ini + fim) / 2;
            nbin++;

            if(val == vet[meio])
            {
                break;
            }

            if(val < vet[meio]) 
            {
                fim = meio - 1;
            } else {
                ini = meio + 1;
            }

        } while(ini <= fim);
    }

    if(possent != -1) 
    {
        int meio;
        int ini = 0;
        int fim = 99;
        vet[100] = val; 

        do {
            meio = (ini + fim) / 2;
            nsent++;

            if(val == vet[meio]) 
            {
                break;
                
            }

            if(val < vet[meio])
            {
                fim = meio - 1;
            } else {
                ini = meio + 1;
            }

        }
        while(ini <= fim);
    }

    cout << "Pesquisa sequencial: " << nseq << " pesquisas" << endl;
    cout << "Pesquisa binaria: " << nbin << " pesquisas" << endl;
    cout << "Pesquisa com sentinela: " << nsent << " pesquisas" << endl;

    return 0;
}


int pesqseq(int val, int vet[], int n) 
{
    for(int i = 0; i < n; i++) 
    {
        if(vet[i] == val) 
        {
            return i; 
        }
    }

    return -1; 


int pesqbin(int val, int vet[], int n)
{
    if(n == 0) 
    {
        return -1;
    }

    int meio = n / 2;

    if(val == vet[meio]) 
    {
        return meio;
    }

    if(val < vet[meio])
    {
        return pesqbin(val, vet, meio);
    } else
    {
        int pos = pesqbin(val, vet + meio + 1, n - meio - 1);
        if(pos == -1) 
        {
            return -1;
        } else 
        {
            return pos + meio + 1;
        
        }
        }
//A pesquisa sequencial e a pesquisa sentinela fazem mais pesquisa do que a pesquisa binária
