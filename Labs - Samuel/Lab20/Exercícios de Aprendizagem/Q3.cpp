#include <iostream>
using namespace std;

int main()
{
    cout << "Digite um texto (# para finalizar):\n";
    char ch;
    int substituicoes = 0;

    while (cin.get(ch) && ch != '#')
    {
        if (ch == '.') 
        {
            cout << '!';
            substituicoes++;
        }
        else if (ch == '!')
        {
            cout << "!!";
            substituicoes++;
        }
        else
            cout << ch;
    }

    cout << "\nSubstituições: " << substituicoes << endl;
}