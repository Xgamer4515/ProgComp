#include <iostream>
using namespace std;

struct par 
{
    int x;
    int y;
};

void calcular(const par&, int&, int&);

int main() 
{
    cout << "Digite um par de valores:\n";
    par valores;
    cin >> valores.x >> valores.y;

    int soma, multiplicacao;
    calcular(valores, soma, multiplicacao);

    cout << "Soma: " << soma << endl;
    cout << "Multiplicação: " << multiplicacao << endl;
}

void calcular(const par& entrada, int& soma, int& multiplicacao) 
{
    soma = entrada.x + entrada.y;
    multiplicacao = entrada.x * entrada.y;
}