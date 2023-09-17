#include <iostream>
using namespace std;

void CreateButton(int x, int y, void (*)(void));
void (*OnClick)(void);
void Mensagem();

int main()
{
    CreateButton(10, 10, Mensagem);

    cout << "Pressionar Botão? ";
    char resposta;
    cin >> resposta;
    
    if (resposta == 'S' || resposta == 's')
        OnClick();
}

void CreateButton(int x, int y, void (*callback)(void))
{
    cout << "Botão criado na posição " << x << "," << y << endl;
    OnClick = callback;
}

void Mensagem()
{
    cout << "Botão Pressionado!" << endl;
}