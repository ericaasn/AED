#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int X[N];
    for (int i = 0; i < N; i++) 
    {
        cin >> X[i];
    }

    int maior = X[0];
    int posicao = 0;
    for (int i = 1; i < N; i++) 
    {
        if (X[i] > maior)
        {
            maior = X[i];
            posicao = i;
        }
    }

    cout << "Maior elemento: " << maior << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}
