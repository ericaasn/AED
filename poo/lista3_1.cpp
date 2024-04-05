#include <iostream>
#include <fstream>
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

class ConcessionariaVeiculos {
private:
    static const int MAX_VEICULOS = 100;
    Veiculo veiculos[MAX_VEICULOS];
    int numVeiculos;

public:
    ConcessionariaVeiculos() : numVeiculos(0) {}

    void adicionarVeiculo(float peso, int ano, string cor, string marca) {
        if (numVeiculos < MAX_VEICULOS) {
            veiculos[numVeiculos] = Veiculo(peso, ano, cor, marca);
            numVeiculos++;
        } else {
            cout << "Limite de veículos atingido. Não é possível adicionar mais veículos." << endl;
        }
    }

    void imprimirVeiculos() {
        cout << "Veículos Cadastrados:" << endl;
        for (int i = 0; i < numVeiculos; ++i) {
            cout << "Marca: " << veiculos[i].getMarca() << ", Ano: " << veiculos[i].getAno()
                 << ", Cor: " << veiculos[i].getCor() << ", Peso: " << veiculos[i].getPeso() << endl;
        }
    }

    void imprimirVeiculosEmArquivo(string nomeArquivo) {
        ofstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            arquivo << "Veículos Cadastrados:\n";
            for (int i = 0; i < numVeiculos; ++i) {
                arquivo << "Marca: " << veiculos[i].getMarca() << ", Ano: " << veiculos[i].getAno()
                        << ", Cor: " << veiculos[i].getCor() << ", Peso: " << veiculos[i].getPeso() << "\n";
            }
            arquivo.close();
            cout << "Veículos salvos em " << nomeArquivo << endl;
        } else {
            cout << "Erro ao abrir o arquivo para escrita." << endl;
        }
    }
};

int main() {
    ConcessionariaVeiculos concessionaria;

    concessionaria.adicionarVeiculo(1500, 2022, "preto", "Ford");
    concessionaria.adicionarVeiculo(1600, 2023, "vermelho", "Toyota");
    concessionaria.adicionarVeiculo(1700, 2024, "azul", "Chevrolet");

    concessionaria.imprimirVeiculos();
    concessionaria.imprimirVeiculosEmArquivo("veiculos_cadastrados.txt");

    return 0;
}
