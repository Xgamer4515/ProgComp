#include <iostream>
using namespace std;

int maior_valor(int[]);
int menor_valor(int[]);

int main()
{
	cout << "Arquivo: ";
	char arquivo[40];
	cin >> arquivo;

	ifstream fin(arquivo,ios_base::in);
	if(!fin.is_open())
	{
		cout << "Erro ao abrir arquivo " << arquivo << endl;
		return EXIT_FAILURE; 
	}
	
	int vet[100];
	for(int i = 0;i < 100;++i)
		fin >> vet[i];

	int posicao_maior_valor = maior_valor(vet);
	int posicao_menor_valor = menor_valor(vet);

	cout << "A posição " << posicao_menor_valor << " contém o menor número (" << vet[posicao_menor_valor] << ")\n";
	cout << "A posição " << posicao_maior_valor << " contém o menor número (" << vet[posicao_maior_valor] << ")\n";
}

int maior_valor(int vet[]) 
{
	int pos = 0;

	for(int i = 0, valor = vet[0]; i < 100 ;++i)
	{
		if(vet[i] > valor)
		{
			valor = vet[i];
			pos = i;
		}
	}

	return pos;
}

int menor_valor(int vet[])
{
	int pos = 0;

	for(int i = 0, valor = vet[0]; i < 100 ;++i)
	{
		if(vet[i] < valor)
		{
			valor = vet[i];
			pos = i;
		}
	}

	return pos;
}