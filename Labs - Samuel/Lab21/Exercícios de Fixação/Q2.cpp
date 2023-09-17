#include <iostream>
using namespace std;

int main()
{
    double renda = 0, imposto = 0;

    while (renda >= 0)
    {
        cout << "Digite o valor da renda (valor negativo para terminar): ";
        cin >> renda;

        if (renda <= 5000)
            imposto = 0;
        else if (renda <= 15000)
            imposto = (renda - 5000) * 0.1;
        else if (renda <= 35000)
            imposto = 10000 * 0.1 + (renda - 15000) * 0.15;
        else if (renda <= 65000)
            imposto = 10000 * 0.1 + 20000 * 0.15 + (renda - 35000) * 0.2;
        else
            imposto = 10000 * 0.1 + 20000 * 0.15 + 30000 * 0.2 + (renda - 65000) * 0.25;

        cout << "O imposto de renda será de R$" << imposto << endl;
    }
}