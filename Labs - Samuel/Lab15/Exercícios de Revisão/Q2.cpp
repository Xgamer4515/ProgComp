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
	// Para criar um variável de tipo peixe
	// Colocamos o tipo que é peixe e o nome
	peixe palhaco;

	// Como alocar dinamicamente um registro 
	// de tipo peixe
	// Primero colocamos o tipo que queremos apontar
	// * e nome do ponteiro
	// a ponteiro vai receber new e o tipo de dado
	peixe * aquario = new peixe;

	delete [] aquario; 
}