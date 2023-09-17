#include <iostream>
#include <cstring>
using namespace std;

const int TAM_NOME = 30;

struct aluno
{
    char nome[TAM_NOME];
    int nivel;
};

int PegarInfo(aluno va[], int n);
void Mostrar1(aluno a);
void Mostrar2(const aluno* pa);
void Mostrar3(const aluno va[], int n);

int main()
{
    cout << "Tamanho da classe: ";
    int tam;
    cin >> tam;

    // Remova \n para uso do cin.getline
    cin.ignore();

    aluno* ptr = new aluno[tam];
    int inscritos = PegarInfo(ptr, tam);

    for (int i = 0; i < inscritos; ++i)
    {
        Mostrar1(ptr[i]);
        Mostrar2(&ptr[i]);
    }

    Mostrar3(ptr, inscritos);

    delete[] ptr;
    cout << "Feito!\n";
    return 0;
}

int PegarInfo(aluno va[], int n)
{
    int num_lidos = 0;
    aluno a;

    // Solicitar informações dos alunos
    while (num_lidos < n)
    {
        cout << "Nome do aluno (deixe em branco para sair): ";
        cin.getline(a.nome, TAM_NOME);

        // Verificar se o nome está em branco para sair
        if (strlen(a.nome) == 0)
            break;

        cout << "Nível do aluno: ";
        cin >> a.nivel;

        va[num_lidos] = a; // Armazenar no vetor
        num_lidos++;
        
        cin.ignore(); // Limpar o buffer do teclado após cada leitura
    }

    return num_lidos;
}

void Mostrar1(aluno a)
{
    cout a.nome << " "<< a.nivel << endl;
}

void Mostrar2(const aluno* pa)
{
    cout << pa->nome << " " << pa->nivel << endl;
}

void Mostrar3(const aluno va[], int n)
{
    for (int i = 0; i < n; ++i)
		cout << va[i].nome << " " << va[i].nivel << endl;
}