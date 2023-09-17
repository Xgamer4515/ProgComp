#include <iostream>
using namespace std;

const int tam = 40; 

int main()
{
	cout << "Qual o seu nome?";
	char nome_completo[tam];
	cin.getline(nome_completo, tam);

	cout << "Que conceito você merece?";
	char conceito;
	cin >> conceito;

	cout << "Bom dia," << nome_completo << ". Seu conceito é " << char(conceito + 1); 
}