#include <iostream>
using namespace std;

struct Login
{
	char nome[20];
	char senha[20];
};

int main()
{
	Login admin = {"Samuel","ProgComp"};
	
	cout << "Digite seu nome: ";
	Login user;
	cin >> user.nome;

	cout << "Digite a senha: ";
	cin >> user.senha;

	bool senha = false;
	bool nome = false;

	for(int i = 0;user.nome[i] == admin.nome[i];++i)
		nome = true;

	for(int i = 0;user.senha[i] == admin.senha[i];++i)
		senha = true;

	if(senha && nome)
		cout << "Login e senha corretos.\n";
	else
		cout << "Login ou senha estão incorretos.\n";
}