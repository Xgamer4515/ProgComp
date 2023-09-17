#include <iostream>
using namespace std;

enum situacao{Aprovado,Trancado,Reprovado};

union identificador
{
    char nome[20];
    long matricula;
}

struct Aluno
{
    identificador id;
    unsigned codigo;
    situacao disciplina;
};

void exibir_aluno(Aluno *);
istream& operator>>(istream&,situacao&);
ostream& operator<<(ostream&,situacao&);

int main() 
{
    cout << "Digite o número de alunos (mínimo 1): ";
    int tam;
    cin >> tam;

    Aluno * classe = new Aluno[tam];

    cout << "===== Aluno 1 =====\n";
    cout << "Nome: " 
    cin >> classe[0].id.nome;
    
    cout << "Código da disciplina: ";
    cin >> classe[0].codigo;
    
    cout << "Situação da disciplina: ";
    cin >> classe[0].disciplina;

    exibir_aluno(classe);
}

void exibir_aluno(Aluno * alu)
{
    cout << "Nome: " << alu[0].id << endl;
    cout << "Código da disciplina: " << alu[0].codigo << endl;
    cout << "Situação da disciplina: " << alu[0].disciplina << endl;
}

istream& operator>>(istream& is,situacao& s)
{
    int temp;
    cin >> temp;
    s = (situacao) temp;
    return is;
}

ostream& operator<<(ostream& os,situacao& s)
{
    switch(s)
    {
        case Aprovado: os << "Aprovado"; break;
        case Trancado: os << "Trancado"; break;
        case Reprovado: os << "Reprovado"; break; 
    }
    return os;
}