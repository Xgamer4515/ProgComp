#include <iostream>
using namespace std;

int soma(int,int,int);

int main()
{
    cout << "Digite três números inteiros a, b e c (\"a\" maior que 1):\n";
    int a,b,c;
    cin >> a >> b >> c;
    
    int resul = soma(a,b,c);
    cout << "A soma é igual a " << resul;
}

int soma(int divisor,int inicio,int fim)
{
    int soma = 0;
    for(int i = inicio;i <= fim;++i)
    {
        if(i % divisor == 0)
            soma += i;
    }
    return soma;
}