#include <iostream>
using namespace std;

struct Controller
{
	char name[40];
	int buttons;
	int axis;
};

void Enumerate(void (*)(Controller));
void ListarNomes(Controller);
void ListarEixos(Controller);

int main()
{
	Enumerate(ListarNomes);
	Enumerate(ListarEixos);
}

void Enumerate(void(*f)(Controller))
{
	Controller vet[3] =
	{
		{"Joy", 8, 4},
		{"Xbox", 10, 3},
		{"Play", 8, 6}
	};

	for (auto i : vet)
		f(i);
}

void ListarEixos(Controller eixos) 
{
	cout << eixos.axis << " ";
}

void ListarNomes(Controller nome) 
{
	cout <<nome.name<< " ";	
}