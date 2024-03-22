#include <iostream>
#include <string>
using namespace std;

class Alunos
{
    private:
    string nome;
    string matricula;
    string curso;
    
    public:
    
    void setNome(string nome)
    {
        this->nome = nome;
    };
    
    string getNome()
    {
        return nome;
    };
    
    

       void setMatricula(string matricula)
    {
        this->matricula = matricula;
    };
    
    string getMatricula()
    {
        return matricula;
    };
    
    
      void setCurso(string curso)
    {
        this->curso = curso;
    };
    
    string getCurso()
    {
        return curso;
    };
    
    void printAlunos()
    {
        cout<<"nome:"<<nome<<"\n"<<"matricula:"<<matricula<<"\n"<<"curso:"<<curso<<"\n";
    }

};


int main()
{

  Alunos a;
  
  a.setNome("ana");
  a.setMatricula("124");
  a.setCurso("engenharia");
  
  a.printAlunos();
 
  
   
  
  return 0;
  
 }
 
  
