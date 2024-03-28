
#include <iostream>
#include <string>
using namespace std;

class Agenda
{
private: 
    string nome;
    string telefone;
    string endereco;
    string cep;

public:
    void setNome(string nome)
    {
        this->nome = nome;
    }

    string getNome()
    {
        return nome;
    }

    void setTelefone(string telefone)
    {
        this->telefone = telefone;
    }

    string getTelefone()
    {
        return telefone;
    }

    void setEndereco(string endereco)
    {
        this->endereco = endereco;
    }

    string getEndereco() 
    {
        return endereco;
    }

    void setCep(string cep) 
    {
        this->cep = cep;
    }

    string getCep()
    {
        return cep;
    }

    void printAgenda()
    {
        cout << nome << "," << telefone << "," << endereco << "-" << cep << endl;
    }
};

int main()
{
    Agenda a;

 
    a.setNome("Ana");
    a.setTelefone("61998567543");
    a.setEndereco("Quadra 9, Rua 5- Asa Norte");
    a.setCep("72760090");
    a.printAgenda();

    a.setNome("Pedro");
    a.setTelefone("6192471343");
    a.setEndereco("Quadra 10, Rua 2- Asa Sul");
    a.setCep("7276080");
    a.printAgenda();

    a.setNome("Erica");
    a.setTelefone("6198556431");
    a.setEndereco("Quadra 9, Rua 15- Taguatinga");
    a.setCep("71715214");
    a.printAgenda();

    a.setNome("Bia");
    a.setTelefone("6195634422");
    a.setEndereco("Quadra 34, Rua 21- Brazlândia");
    a.setCep("3643790");
    a.printAgenda();

    return 0;
}
