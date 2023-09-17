#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	cout << "Digite palavras (s para sair):\n";
    char palavra[50];
    int vogal = 0,consoante = 0,outra = 0;
	
	cin >> palavra;
	
	while (!(palavra[0] == 's' && palavra[1] == '\0'))
	{

		if (isalpha(palavra[0])) // caractere e uma letra
		{
			switch (palavra[0])
			{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U': vogal++; break;
			default : consoante++;
			}
		}
		else  // caractere nao e uma letra
			outra++;

		cin >> palavra;
	}
	
	cout << vogal << " palavras comecam por vogais\n";
	cout << consoante << " palavras comecam por consoantes\n";
	cout << outros << " outras palavras\n";
}