#include <iostream>
using namespace std;

double calcular(double, double, double (*)(double, double));
double multiplicacao(double x, double y);
double soma(double x, double y);

int main()
{
    double (*pf[2])(double, double) = {soma, multiplicacao};

    char opcao;
    double x, y;

    do {
        cout << "Digite dois valores separados por espaço: ";
        cin >> x >> y;

        cout << "Escolha a operação (s para soma, m para multiplicação): ";
        cin >> opcao;

        double resultado;

        if (opcao == 's' || opcao == 'm') {
            resultado = calcular(x, y, pf[opcao == 's' ? 0 : 1]);
            cout << "Resultado: " << resultado << endl;
        } else {
            cout << "Opção inválida." << endl;
        }

        cout << "Deseja continuar (s/n)? ";
        cin >> opcao;
    } while (opcao == 's');

    return 0;
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