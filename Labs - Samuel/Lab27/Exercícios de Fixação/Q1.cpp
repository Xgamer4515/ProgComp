#include <iostream>
using namespace std;

inline double valor_maximo(double,double);
inline double valor_minimo(double,double);
inline char converter_maiusculo(char);
inline double absoluto(double);

int main() 
{
    cout << "Digite dois números separados por espaço: ";
	double num1, num2;
    cin >> num1 >> num2;

    cout << "Digite uma letra em minúsculo: ";
    char letra;
    cin >> letra;

    double maximo = valor_maximo(num1, num2);
    double minimo = valor_minimo(num1, num2);
    char maiusculo = converter_maiusculo(letra);
    double valorAbsoluto = absoluto(num1);

    cout << "Valor máximo: " << maximo << endl;
    cout << "Valor mínimo: " << minimo << endl;
    cout << "Letra em maiúsculo: " << maiusculo << endl;
    cout << "Valor absoluto do primeiro número: " << valorAbsoluto << endl;

    return 0;
}

inline double valor_maximo(double a,double b)
{
	return (a > b) ? a : b;
}

inline double valor_minimo(double a,double b)
{
	return (a > b) ? b : a;
}

inline double absoluto(double numero)
{
	return (numero < 0) -numero : numero:
}

inline char converter_maiusculo(char ch)
{
	return ch -= 32;
}