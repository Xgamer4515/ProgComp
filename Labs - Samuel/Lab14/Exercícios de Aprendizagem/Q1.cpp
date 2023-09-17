#include <iostream>
using namespace std;

struct Tigela
{
	char estado[6];
	char tipoAlimento[6];
};

void Fome(Tigela *);

int main()
{
	Tigela minhaTigela = {"cheia","canja"};
	Tigela * ptr_tigela = &minhaTigela;

	cout << "A tigela antes da janta:\n";
	cout << "Estado da tigela:" << minhaTigela.estado;
	cout << "Tipo de alimento:" << minhaTigela.tipoAlimento;

	Fome(ptr_tigela);

	cout << "A tigela depois da janta";
	cout << "Estado da tigela:" << minhaTigela.estado;
	cout << "Tipo de alimento:" << minhaTigela.tipoAlimento;	
}

void Fome(Tigela * t)
{
	t->estado = "vazia";
}