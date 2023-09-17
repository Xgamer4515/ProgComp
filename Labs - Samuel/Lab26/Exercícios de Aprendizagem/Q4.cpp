#include <iostream>
#include <fstream>
using namespace std;

struct Produto
{
    double preco_normal;
    double preco_atacado;
    int quantidade;
};

double aplicar_preco(Produto,int);
double total_pedido(Produto*, int*, int);

int main()
{
    ifstream arquivo_produtos("Produtos.txt");
    ifstream arquivo_pedidos("Pedidos.txt");

    int n;
    arquivo_produtos >> n;

    Produto * produtos = new Produto[n];
    int * pedidos = new int[n];

    for(int i = 0; i < n; i++)
    {
        arquivo_produtos >> produtos[i].preco_normal >> produtos[i].preco_atacado >> produtos[i].quantidade;
        arquivo_pedidos >> pedidos[i];
    }

    cout << "Total do pedido: " << total_pedido(produtos, pedidos, n) << endl;

    delete [] produtos;
    delete [] pedidos;
}

double aplicar_preco(Produto p, int qtd)
{
    if(qtd >= p.quantidade)
        return p.preco_atacado * qtd;
    else
        return p.preco_normal * qtd;
}

double total_pedido(Produto * produtos, int * pedidos, int n)
{
    double total = 0;
    for(int i = 0; i < n; i++)
        total += aplicar_preco(produtos[i], pedidos[i]);
    return total;
}