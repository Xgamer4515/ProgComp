#include <iostream>
using namespace std;

double calcular(double, double, double (*)(double, double));
double multiplicacao(double x, double y);
double soma(double x, double y);

int main()
{
    char opcao;
    double x, y;

    do 
    {
        cout << "Digite dois valores separados por espaço: ";
        cin >> x >> y;

        cout << "Escolha a operação (s para soma, m para multiplicação): ";
        cin >> opcao;

        double resultado;

        if (opcao == 's') 
        {
            resultado = calcular(x, y, soma);
        } 
        else if (opcao == 'm') 
        {
            resultado = calcular(x, y, multiplicacao);
        } 
        else 
        {
            cout << "Opção inválida." << endl;
            continue;
        }

        cout << "Resultado: " << resultado << endl;

        cout << "Deseja continuar (s/n)? ";
        cin >> opcao;
    } while (opcao == 's');
}

double calcular(double a, double b, double (*pf)(double, double))
{
    return pf(a, b);
}

double soma(double x, double y)
{
    return x + y;
}

double multiplicacao(double x, double y)
{
    return x * y;
}