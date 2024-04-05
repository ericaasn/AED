#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Animal {
protected:
    string nome;
    int idade;

public:
    Animal(string nome, int idade)
        : nome(nome), idade(idade) {}

    virtual void fazerSom() = 0; 

    virtual void mostrarInfo() {
        cout << "Nome: " << nome << ", Idade: " << idade << endl;
    }

    virtual void salvarInfo(ofstream& arquivo) {
        arquivo << "Nome: " << nome << ", Idade: " << idade << endl;
    }
};

class Cachorro : public Animal {
private:
    string raca;

public:
    Cachorro(string nome, int idade, string raca)
        : Animal(nome, idade), raca(raca) {}

    void fazerSom() override {
        cout << "Au Au!" << endl;
    }

    void mostrarInfo() override {
        Animal::mostrarInfo();
        cout << "Raça: " << raca << endl;
    }

    void salvarInfo(ofstream& arquivo) override {
        arquivo << "Tipo: Cachorro, ";
        Animal::salvarInfo(arquivo);
        arquivo << "Raça: " << raca << endl;
    }
};

class Gato : public Animal {
private:
    string corPelagem;

public:
    Gato(string nome, int idade, string corPelagem)
        : Animal(nome, idade), corPelagem(corPelagem) {}

    void fazerSom() override {
        cout << "Miau!" << endl;
    }

    void mostrarInfo() override {
        Animal::mostrarInfo();
        cout << "Cor da Pelagem: " << corPelagem << endl;
    }

    void salvarInfo(ofstream& arquivo) override {
        arquivo << "Tipo: Gato, ";
        Animal::salvarInfo(arquivo);
        arquivo << "Cor da Pelagem: " << corPelagem << endl;
    }
};

int main() {
    Cachorro cachorro("kiara", 5, "Labrador");
    Gato gato("mingau", 3, "Branco");

    cachorro.fazerSom();
    cachorro.mostrarInfo();
    cout << endl;

    gato.fazerSom();
    gato.mostrarInfo();
    cout << endl;

    ofstream arquivo("animais.txt");
    if (arquivo.is_open()) {
        cachorro.salvarInfo(arquivo);
        gato.salvarInfo(arquivo);
        arquivo.close();
        cout << "Informações dos animais salvas no arquivo 'animais.txt'" << endl;
    } else {
        cout << "Erro ao abrir o arquivo para escrita." << endl;
    }

    return 0;
}
