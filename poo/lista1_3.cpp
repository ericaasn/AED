
#include <iostream>
#include <string>
using namespace std;

class Alunos
{
    private:
    string nome;
    string matricula;
    string curso;
    string nota;
    string faltas;
    
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
    
    void setNota(string nota)
    {
        this->nota = nota;
    };
    
    string getNota()
    {
        return nota;
    };
    
    
    void setFaltas(string faltas)
    {
        this->faltas = faltas;
    };
    
    string getFaltas()
    {
        return faltas;
    };
    
    
    
    
    void printAlunos()
    {
        cout<<"nome:"<<nome<<"\n"<<"matricula:"<<matricula<<"\n"<<"curso:"<<curso<<"\n"<<"nota"<<nota<<"faltas"<<faltas;
    }

};


int main()
{

  Alunos a;
  
  a.setNome("ana");
  a.setMatricula("124");
  a.setCurso("engenharia");
  a.setNota("5,5");
  a.setFaltas("5");
  a.printAlunos();
 
  
   
  
  return 0;
  
 }
 
