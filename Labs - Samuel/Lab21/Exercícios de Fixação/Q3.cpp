#include <iostream>
#include <cstring>
using namespace std;

struct Produto
{
    char nome[25];
    double preco;
};

int main()
{
    cout << "Loja de Informática\n";

    Produto p,mais_caro {' ',0};
    double total = 0;
    int produto_maior_que_mil = 0;
    char opcao = 'S';
    
    while(opcao != 'N' && opcao != 'n')
    {
        cout << "-------------------\n";
        cout << "Produto: ";
        cin >> p.nome;
        cout << "Preço: ";
        cin >> p.preco;
        total += p.preco;

        if(mais_caro.preco < p.preco)
            strcpy(mais_caro.nome,p.nome);

        if(p.preco > 1000)
            produto_maior_que_mil++;   
    
        cout << "-------------------\n";
        cout << "Deseja continuar [S/N]? ";
        cin >> opcao;

        cout << endl << endl;
    }

    cout << "Total da compra: R$" << total << endl;
    cout << produto_maior_que_mil << " produtos custam mais de R$1000.\n";
    cout << mais_caro.nome << " é o produto mais caro.";
}