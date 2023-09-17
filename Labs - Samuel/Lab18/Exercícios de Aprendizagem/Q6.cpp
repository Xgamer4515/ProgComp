#include <iostream>
#include <cstring>
using namespace std;

struct Pessoa
{
	char nome[20];
	int idade;
	char sexo;
};

int main()
{
	cout << "Encha seu caderno com registros de pessoas. Digite \"fim\" para finalizar:\n";
	int idtotal = 0;

	Pessoa p;

	for(int i = 0;strcmp(p.nome,"fim");++i)
	{
		cout << "Nome: ";
		cin.getline(p.nome,20);

		if(strcmp(p.nome,"fim"))
		{
			cout << "Idade: ";
			cin >> p.idade;
			idtotal += p.idade;

			cout << "Sexo (M/F): ";
			cin >> p.sexo;

			cout << endl;
		}
		else
		{
			cout << "Fim da lista.\n";
		}
	}

	cout << "A soma das idade de todos na lista é de: " << idtotal << endl;
}