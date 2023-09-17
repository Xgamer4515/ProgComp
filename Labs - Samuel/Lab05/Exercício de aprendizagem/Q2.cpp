#include <iostream>
using namespace std;

float ajuste_de_salario(float);

int main()
{
    cout << "Salário atual:";
    float salario;
    cin >> salario;

    float salario_ajustado = ajuste_de_salario(salario);

    cout << "Salário ajustado para R$" << salario_ajustado;
}

float ajuste_de_salario(float valor)
{
    float salario = valor + valor * 0.15;
    return salario;
}