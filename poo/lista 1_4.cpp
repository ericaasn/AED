#include <iostream>
#include <string>
using namespace std;

class Carros
{
    private:
    string nome;
    string telefone;
    string marca;
    string cor;
    
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
    
      void setMarca(string marca)
      {
       this->marca = marca;
      };
    
    string getMarca()
    {
        return marca;
    };
    
    
      void setCor(string cor)
      {
      this->cor = cor;
      
      };
    
    string getCor()
    {
        return cor;
    };
    
    void printCarros()
    {
           cout<<"nome:"<<nome<<"\n"<<"telefone:"<<telefone<<"\n"<<"marca:"<<marca<<"\n"<<"cor:"<<cor;
    }
    };
    

  int main()
  {
      Carros a;
      
      a.setNome("pedro");
      a.setTelefone("619958877");
      a.setMarca("fiat");
      a.setCor("preto");
      
      a.printCarros();



  
  return 0;
  
 }
 
