#include <iostream>
#include <string>

using namespace std;


int partition(string &s, int low, int high) 
{
    char pivot = s[low]; 
    int i = low;
    int j = high;

    while (true) 
    {
        while (s[i] > pivot) 
        {
            i++;
        }
        while (s[j] < pivot) 
        {
            j--;
        }
        if (i >= j) 
        {
            return j;
        }
        swap(s[i], s[j]);
        i++;
        j--;
    }
}


void quickSort(string &s, int low, int high) 
{
    if (low < high) 
    {
        int pi = partition(s, low, high);

        quickSort(s, low, pi);
        quickSort(s, pi + 1, high);
    }
}

int main()
{
    string input;

    cout << "Digite a string: ";
    getline(cin, input);

    
    quickSort(input, 0, input.length() - 1);

   
    cout << "String ordenada em ordem decrescente: " << input << endl;

    return 0;
}

