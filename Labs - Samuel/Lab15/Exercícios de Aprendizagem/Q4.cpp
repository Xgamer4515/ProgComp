#include <iostream>
#include <string>
using namespace std;

struct Local
{
	char nome[40];
	char pais[40];
	char continente[60];
};

int main()
{
	cout << "Deseja visitar quantos locais? ";
	int tam;
	cin >> tam;

	Local * turismo = new Local[tam];

	for(int i = 0;i < tam;++i)
	{
		cout << "Local " << i + 1 << endl;
		
		cout << "Digite o nome: ";
		cin.getline(turismo[i].nome, 40);
		
		cout << "Digite o país: ";
		cin.getline(turismo[i].pais, 40);
		
		cout << "Digite o continente: ";
		cin.getline(turismo[i].continente, 60);
	}

	for(int j = 0;j < tam;++j)
	{
		cout << "Local " << j + 1 << endl;
		cout << "Nome: " << turismo[i].nome << endl;
		cout << "País: " << turismo[i].pais << endl;
		cout << "Continente: " << turismo[i].continente << endl << endl;
	}

	delete [] turismo;
}