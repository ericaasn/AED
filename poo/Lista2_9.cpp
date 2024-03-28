#include <iostream>
#include <string>
using namespace std;

class Aluno
{
private:
    string nome;
    string matricula;
    int idade;
    int semestre;
    string curso;

public:
    
    Aluno(string nome, string matricula, int idade, int semestre, string curso)
        : nome(nome), matricula(matricula), idade(idade), semestre(semestre), curso(curso) {}

    string getNome()
    {
        return nome;
    }

    string getMatricula()
    {
        return matricula;
    }

    int getIdade()
    {
        return idade;
    }

    int getSemestre()
    {
        return semestre;
    }

    string getCurso() 
    {
        return curso;

};
};

int main()
{
   
    Aluno aluno1("Erica", "232025687", 19, 2, "Engenharia de Redes");
    Aluno aluno2("Marília", "20235511", 22, 3, "Engenharia da computação");

   
    cout << "Alunos cadastrados:" << endl;
    cout << "Nome: " << aluno1.getNome() << endl;
    cout << "Matrícula: " << aluno1.getMatricula() << endl;
    cout << "Idade: " << aluno1.getIdade() << endl;
    cout << "Semestre: " << aluno1.getSemestre() << endl;
    cout << "Curso: " << aluno1.getCurso() << endl;
    cout << endl;

    cout << "Nome: " << aluno2.getNome() << endl;
    cout << "Matrícula: " << aluno2.getMatricula() << endl;
    cout << "Idade: " << aluno2.getIdade() << endl;
    cout << "Semestre: " << aluno2.getSemestre() << endl;
    cout << "Curso: " << aluno2.getCurso() << endl;
    cout << endl;

    return 0;
}
