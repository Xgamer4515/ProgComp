#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	cout << "Digite uma palavra: ";
	char palavra[20];
	cin >> palavra;

	char invertida[20];

	int tam = strlen(palavra);

	for(int i = 0;i < tam;++i)
	{
		invertida[i] = palavra[tam - i - 1];
	}

	invertida[tam] = '\0';

	cout << "Palavra invertida: " << invertida << endl;

	if (strcmp(palavra, invertida))
 		cout << "A palavra não é um palíndromo\n";
	else
 		cout << "A palavra é um palíndromo\n";
}