#include <iostream>
#include <fstream>
using namespace std;

struct Aluno 
{
    char nome[15];
    char sobrenome[15];
    char turno;
    int serie;
};

Aluno* expandir(Aluno[], Aluno, int);

int main() 
{
    ifstream fin("alunos.txt");
    if (!fin.is_open()) 
    {
        cerr << "Erro ao abrir o arquivo alunos.txt\n";
        exit(EXIT_FAILURE);
    }

    Aluno * alunos = nullptr;
    int numAlunos = 0;
    Aluno aux;

    while (fin >> aux.nome >> aux.sobrenome >> aux.turno >> aux.serie) 
    {
        alunos = expandir(alunos, aux, numAlunos);
        numAlunos++;
    }

    fin.close();

    for (int serie = 6; serie <= 8; serie++) 
    {
        cout << (serie == 6 ? "Matutino " : "Vespertino ") << serie << "ª Série\n";
        cout << "-----------------\n";

        for (int i = 0; i < numAlunos; i++) 
        {
            if (alunos[i].serie == serie) 
            {
                cout << alunos[i].nome << ' ' 
                     << alunos[i].sobrenome << ' '
                     << alunos[i].turno 
                     << alunos[i].serie << endl;
            }
        }
        cout << endl;
    }
    delete[] alunos;
}

Aluno* expandir(Aluno alunos[], Aluno aluno, int tam) 
{
    Aluno* novaturma = new Aluno[tam + 1];

    for (int i = 0; i < tam; ++i)
        novaturma[i] = alunos[i];
    
    novaturma[tam++] = aluno;

    delete[] alunos;

    return novaturma;
}