#include <iostream>
using namespace std;

struct carro
{
    char modelo[20];
    int ano;
    double preco;
};

int main() 
{
    carro garagem[10] = 
    {
        {"Vectra",2009,58000},
        {"Polo",2008,45000}
    };

    carro * car = &garagem[1];

    cout << "===== Carro 2 =====\n";
    cout << "Modelo: " << ptr->modelo;
    cout << "Ano: " << ptr->ano;
    cout << "Preço: " << ptr->preco;
}