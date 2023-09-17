#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cout << "==================\n";
	cout << "\tPalíndromo\n";
	cout << "==================\n";
	cout << "Digite a frase:\n";
	char frase[60];
	cin.getline(frase,60);

	char sem_espaco[60] = {};
	char invertida[60] = {};

	for(int i = 0,j = 0; i < strlen(frase);++i)
	{
		if(frase[i] != ' ')
			sem_espaco[j++] = frase[i];
	}

	for(int i = 0,k = strlen(sem_espaco) - 1; i < strlen(sem_espaco); ++i, --k)
	{
		invertida[i] = sem_espaco[k];
	}

	(strcmp(sem_espaco,invertida)) ? cout << "Não é um palíndromo.\n" : cout << "É um palíndromo.\n"; 
}