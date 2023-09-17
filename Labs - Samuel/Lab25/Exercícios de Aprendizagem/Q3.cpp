#include <iostream>
using namespace std;

const int MAX = 10;

int Locate(int[],int,int);
bool OpenSpace(int[],int,int,int);

int main() 
{
    int vetor[MAX];
    int tamanho = 0;

    cout << "Digite 10 valores para preencher o vetor:\n";
    bool vetor_cheio = false;
    for (int i = 0; i < MAX && vetor_cheio == false; i++) 
    {
        int valor;
        cin >> valor;

        int posicao = Locate(vetor, valor, tamanho);

        if (OpenSpace(vetor, tamanho, posicao, valor)) 
        {
            cout << "Valor " << valor << " inserido na posição " << posicao << endl;
        } 
        else 
        {
            cout << "Vetor está cheio, não é possível inserir mais elementos.\n";
            vetor_cheio = true;
        }
    }

    cout << "Valores ordenados:\n";
    for (int i = 0; i < tam; i++)
        cout << vetor[i] << " ";
    cout << endl;
}

int Locate(int vetor[], int elemento, int tam) 
{
    int posicao = 0;
    while (posicao < tam && elemento > vetor[posicao])
        posicao++;
    return posicao;
}

bool OpenSpace(int vetor[], int tamanho, int posicao, int elemento) {
    if (tamanho >= TAMANHO) {
        return false;
    }

    for (int i = tamanho; i > posicao; i--)
        vetor[i] = vetor[i - 1];

    vetor[posicao] = elemento;
    tamanho++;
    return true;
}