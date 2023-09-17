#include <iostream>
using namespace std;

struct Palavra
{
	char ingles[20];
	char portugues[20];
	char espanhol[20];
};

int main()
{
	Palavra dicionario[10] =
	{
		{"cat","gato","gato"},
		{"dog","cachorro","perro"}
	};

	cout << "Digite uma palavra em português,ingles e espanhol respectivamente nessa ordem:";
	cin >> dicionario[2].portugues >> dicionario[2].ingles >> dicionario[2].espanhol;

	cout << "=== Dicionário ===\n";
	cout << "Palavra 1\n";
	cout << "Portugues: " << dicionario[0].portugues << endl;
	cout << "Ingles: " << dicionario[0].ingles << endl;
	cout << "Espanhol: " << dicionario[0].espanhol << endl << endl;
	cout << "Palavra 2\n";
	cout << "Portugues: " << dicionario[0].portugues << endl;
	cout << "Ingles: " << dicionario[0].ingles << endl;
	cout << "Espanhol: " << dicionario[0].espanhol << endl << endl;
	cout << "Palavra 3\n";
	cout << "Portugues: " << dicionario[0].portugues << endl;
	cout << "Ingles: " << dicionario[0].ingles << endl;
	cout << "Espanhol: " << dicionario[0].espanhol << endl;
}