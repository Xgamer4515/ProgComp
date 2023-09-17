#include <iostream>
using namespace std;

int main()
{
    int distancia;
    double preco;

    cout << "Informe a distância da viagem em quilômetros: ";
    cin >> distancia;

    if (distancia <= 200)
        preco = distancia * 0.5;
    else if (distancia <= 400)
        preco = distancia * 0.4;
    else
        preco = distancia * 0.3;

    cout << "O preço da passagem é: R$" << preco << endl;
}