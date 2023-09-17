#include <iostream>
using namespace std;

struct carro
{
    char modelo[20];
    int ano;
    double preco;
};

void ler_carro(carro *);

int main() 
{
    carro * garagem = new carro[2];
    ler_carro(garagem);
    delete [] garagem; 
}

void ler_carro(carro * garagem)
{
    cout << "Entre com os dados de 2 carros: ";
    cin >> garagem[0].modelo 
    >> garagem[0].ano
    >> garagem[0].preco;

    cin >> garagem[1].modelo 
    >> garagem[1].ano
    >> garagem[1].preco;

    cout << "O valor total é R$" << garagem[0] + garagem[1];
}