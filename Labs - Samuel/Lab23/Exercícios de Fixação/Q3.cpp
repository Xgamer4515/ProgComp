#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() 
{
    cout << "Digite o nome do arquivo texto: ";
    char arquivo[20];
    cin >> arquivo;

    ifstream file(arquivo);
    if (!file.is_open()) 
    {
        cout << "Abertura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
    }

    char ch;
    int totalCaracteres = 0;
    int vogais = 0;
    int consoantes = 0;
    int outrosCaracteres = 0;

    while (file.get(ch)) 
    {
        if (isalpha(ch)) 
        {
            totalCaracteres++;
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vogais++;
            else
                consoantes++;
        } 
        else if (!isspace(ch))
        {    
            totalCaracteres++;
            outrosCaracteres++;
        }
    }

    cout << "Número total de caracteres: " << totalCaracteres << endl;
    cout << "Número de vogais: " << vogais << endl;
    cout << "Número de consoantes: " << consoantes << endl;
    cout << "Quantidade de outros caracteres: " << outrosCaracteres << endl;

    file.close();

    return 0;
}
