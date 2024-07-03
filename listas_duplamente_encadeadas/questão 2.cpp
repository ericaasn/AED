
#include <iostream>
#include <string>
using namespace std;


struct Tema 
{
    string nome;
    string descricao;
    Tema* anterior;
    Tema* proximo;

    Tema(const string& n, const string& desc) : nome(n), descricao(desc), anterior(nullptr), proximo(nullptr) {}
};


class ListaTemas 
{
private:
    Tema* primeiro;
    Tema* ultimo;
    Tema* atual;

public:
    ListaTemas() : primeiro(nullptr), ultimo(nullptr), atual(nullptr) {}

    
    void incluirTema(const string& nome, const string& descricao) {
        Tema* novoTema = new Tema(nome, descricao);
        if (primeiro == nullptr) 
        {
            primeiro = ultimo = novoTema;
        }
        else
        {
            ultimo->proximo = novoTema;
            novoTema->anterior = ultimo;
            ultimo = novoTema;
        }
        cout << "Tema '" << nome << "' incluído com sucesso." << endl;
    }

   
    void removerTema(const string& nome)
    {
        Tema* temp = primeiro;
        while (temp)
        {
            if (temp->nome == nome)
            {
                if (temp == primeiro) 
                {
                    primeiro = primeiro->proximo;
                    if (primeiro)
                        primeiro->anterior = nullptr;
                    else
                        ultimo = nullptr;
                } else if (temp == ultimo)
                {
                    ultimo = ultimo->anterior;
                    if (ultimo)
                        ultimo->proximo = nullptr;
                    else
                        primeiro = nullptr;
                } else {
                    temp->anterior->proximo = temp->proximo;
                    temp->proximo->anterior = temp->anterior;
                }
                delete temp;
                cout << "Tema '" << nome << "' removido com sucesso." << endl;
                return;
            }
            temp = temp->proximo;
        }
        cout << "Tema '" << nome << "' não encontrado." << endl;
    }

    
    
    void proximoTema()
    {
        if (atual == nullptr) 
        {
            atual = primeiro;
        } else if (atual->proximo) 
        {
            
            atual = atual->proximo;
        } else 
        {
            cout << "Você está no último tema." << endl;
        }
        exibirTemaAtual();
    }

 
   void temaAnterior()
   {
        if (atual == nullptr)
        {
            atual = ultimo;
        } else if (atual->anterior) 
        {
            atual = atual->anterior;
        } else {
            cout << "Você está no primeiro tema." << endl;
        }
        exibirTemaAtual();
    }

 
 
    void pesquisarTema(const string& nome) 
    {
        Tema* temp = primeiro;
        while (temp) {
            if (temp->nome == nome) 
            {
                atual = temp;
                exibirTemaAtual();
                return;
            }
            temp = temp->proximo;
        }
        cout << "Tema '" << nome << "' não encontrado." << endl;
    }

 
    void exibirTemaAtual()
    {
        if (atual == nullptr)
        {
            cout << "Nenhum tema selecionado." << endl;
        } 
        else
        {
            cout << "Tema: " << atual->nome << endl;
            cout << "Descrição: " << atual->descricao << endl;
        }
    }
};

int main() 
{
    ListaTemas lista;

    int opcao;
    string nome, descricao;

    do {
        cout << "\nMenu:\n";
        cout << "1. Incluir um Tema\n";
        cout << "2. Remover um Tema\n";
        cout << "3. Navegar para o Próximo Tema\n";
        cout << "4. Navegar para o Tema Anterior\n";
        cout << "5. Pesquisar um Tema pelo Nome\n";
        cout << "6. Sair do Programa\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
       

        switch (opcao)
        {
            case 1:
                cout << "Digite o nome do tema: ";
                getline(cin, nome);
                cout << "Digite a descrição do tema: ";
                getline(cin, descricao);
                lista.incluirTema(nome, descricao);
                break;
            case 2:
                cout << "Digite o nome do tema a ser removido: ";
                getline(cin, nome);
                lista.removerTema(nome);
                break;
            case 3:
                lista.proximoTema();
                break;
            case 4:
                lista.temaAnterior();
                break;
            case 5:
                cout << "Digite o nome do tema a ser pesquisado: ";
                getline(cin, nome);
                lista.pesquisarTema(nome);
                break;
            case 6:
                cout << "Encerrando o programa." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 6);

    return 0;
}
