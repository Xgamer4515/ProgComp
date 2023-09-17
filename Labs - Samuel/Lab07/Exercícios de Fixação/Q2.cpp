#include <iostream>
using namespace std;

void alarme();
int ler_senha();

int main()
{
    alarme();
    int senha = ler_senha();

    while(senha != 123)
    {
        cout << "Senha incorreta!\n";
        cout << "Digite novamente sua senha:___\b\b\b";
    }
    
    cout << "Obrigado!";
}

void alarme()
{
    cout << "Iniciando com um som...";
    cout << "\a\a\a";
}

int ler_senha()
{
    cout << "Digite sua senha:___\b\b\b";
}