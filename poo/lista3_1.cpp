#include <iostream>
#include <string>

using namespace std;

class Veiculo {
private:
    float peso;
    int ano;
    string cor;
    string marca;

public:
    
    Veiculo(float peso, int ano, string cor, string marca) {
        this->peso = peso;
        this->ano = ano;
        this->cor = cor;
        this->marca = marca;
    }

    
    float getPeso() {
        return peso;
    }

    int getAno() {
        return ano;
    }

    string getCor() {
        return cor;
    }

    string getMarca() {
        return marca;
    }

 
    void setPeso(float novoPeso) {
        peso = novoPeso;
    }

    void setAno(int novoAno) {
        ano = novoAno;
    }

    void setCor(string novaCor) {
        cor = novaCor;
    }

    void setMarca(string novaMarca) {
        marca = novaMarca;
    }
};

int main() {
 
    Veiculo carro(1500, 2022, "preto", "Ford");

    cout << "Peso: " << carro.getPeso() << endl;
    cout << "Ano: " << carro.getAno() << endl;
    cout << "Cor: " << carro.getCor() << endl;
    cout << "Marca: " << carro.getMarca() << endl;


    carro.setPeso(1600);
    carro.setCor("vermelho");

    cout << "\n informações:" << endl;
    cout << "Peso: " << carro.getPeso() << endl;
    cout << "Cor: " << carro.getCor() << endl;

    return 0;
}
