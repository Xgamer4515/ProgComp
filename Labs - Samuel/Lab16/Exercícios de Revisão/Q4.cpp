#include <iostream>
using namespace std;

struct jogador
{
 	char nome[20];
 	float salario;
 	unsigned gols;
};

void exibir_jogador(jogador vet[],int);

int main()
{
	jogador * time = new jogador[2];
	exibir_jogador(time,2)
	delete [] time;
}

void exibir_jogador(jogador vet[],int index)
{
	for(int i = 0;i < index;++i)
	{
		cout << "Jogador " << i + 1 << endl;
		cout << "Nome: " << vet[i]->nome << endl
		<< "Salário: " << vet[i]->salario << endl
		<< "Gols: " << vet[i]->gols << endl << endl;
	}
}