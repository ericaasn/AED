#include <iostream>
#include <string>

using namespace std;

class Pessoa {
protected:
    string nome;
    string endereco;
    string telefone;

public:
    Pessoa(string nome, string endereco, string telefone)
        : nome(nome), endereco(endereco), telefone(telefone) {}

    void imprimirInfo() {
        cout << "Nome: " << nome << ", Endereço: " << endereco << ", Telefone: " << telefone << endl;
    }
};

class Empregado : public Pessoa {
protected:
    float salarioBase;

public:
    Empregado(string nome, string endereco, string telefone, float salarioBase)
        : Pessoa(nome, endereco, telefone), salarioBase(salarioBase) {}

    float calcularSalario() {
        return salarioBase;
    }
};

class Vendedor : public Empregado {
private:
    float valorVendas;
    float comissao;

public:
    Vendedor(string nome, string endereco, string telefone, float salarioBase, float comissao)
        : Empregado(nome, endereco, telefone, salarioBase), valorVendas(0), comissao(comissao) {}

    void registrarVenda(float valorVenda) {
        valorVendas += valorVenda;
    }

    float calcularSalario() {
        return salarioBase + (valorVendas * comissao / 100);
    }
};

int main() {
    Vendedor vendedor("Joao", "Rua ABC", "123456789", 1500, 5);

    vendedor.registrarVenda(2000);
    vendedor.registrarVenda(3000);

    cout << "Informações do Vendedor:" << endl;
    vendedor.imprimirInfo();
    cout << "Salário: " << vendedor.calcularSalario() << endl;

    return 0;
}
