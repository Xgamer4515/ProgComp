#include <iostream>
using namespace std;

struct peixe
{
 	char tipo[20];
 	float peso;
 	unsigned comp;
};

int main()
{
	cout << "Tamanho do vetor: ";
	int tam;
	cin >> tam;

	peixe * aquario = new peixe[tam];

	cout << endl << endl;

	cout << "Tipo: ";
	cin >> aquario->tipo;

	cout << "Peso: ";
	cin >> aquario->peso;

	cout << "Comprimento: ";
	cin >> aquario->comp;

	cout << endl;

	cout << "O peso do peixe é " << aquario->peso << " gramas";

	delete [] aquario;
}