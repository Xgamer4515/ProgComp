#include <iostream>
using namespace std;

int main()
{
    char resp = 'S';

    while(resp != 'N' && resp != 'n')
    {
        cout << "Digite o operador: ";
        char operador;
        cin >> operador;

        cout << "Digite dois numeros: ";
        float n1, n2;
        cin >> n1 >> n2;

        switch(operador)
        {
            case '+':
                cout << "A soma de " << n1 << " e " << n2 << " e igual a " << n1 + n2 << endl;
                break;
            case '-':
                cout << "A subtracao de " << n1 << " e " << n2 << " e igual a " << n1 - n2 << endl;
                break;
            case '*':
                cout << "A multiplicacao de " << n1 << " e " << n2 << " e igual a " << n1 * n2 << endl;
                break;
            case '/':
                (n2 == 0) ? cerr << "Impossivel dividir por zero" : 
				cout << "A divisao de " << n1 << " e " << n2 << " e igual a " << n1 / n2 << endl;
                break;
        }

        cout << "Deseja continuar (S/N)? ";
        cin >> resp;
    }
}