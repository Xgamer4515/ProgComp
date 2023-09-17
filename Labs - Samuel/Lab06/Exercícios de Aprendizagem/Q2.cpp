#include <iostream>
using namespace std;

#define preco_pao 0.3
#define preco_pastel 0.25

int main()
{
    cout << "Pães&Cia\n\n";

    cout << "Quantos pães? ";
    int paes;
    cin >> paes;

    cout << "Quantos pastéis? ";
    int pasteis;
    cin >> pasteis;

    float total = paes * preco_pao + preco_pastel * pasteis;

    cout << "O total das compras é R$" << total;
}