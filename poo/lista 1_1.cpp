#include <iostream>
#include <string>
 using namespace std;
 
 class Agenda
 {
 
private: 
string nome;
string telefone;

public:
void setNome(string nome)
{
    this->nome = nome;
};

string getNome()
{
    return nome;
};




void setTelefone(string telefone)
{
    this->telefone = telefone;
};

string getTelefone()
{
    return telefone;
};


void printAgenda()
{
    cout << nome << "," << telefone << endl;
} 


};

int main()
{
    Agenda a;
    a.setNome("Ana");
    a.setTelefone("61998567543");
    a.printAgenda();
    a.setNome("Bia");
    a.setTelefone("6195634422");
    
    a.printAgenda();
     
    return 0;
}



