#include <iostream>
using namespace std;

struct carro
{
	char fabricante[20];
	int ano_fabricacao;
};

int main()
{
	cout << "Quantos carros para catalogar? ";
	int tam;
	cin >> tam;

	carro * garagem = new carro[tam];

	for(int i = 0;i < tam;++i)
	{
		cout << "Carro " << i + 1 << endl;
		cout << "Marca: ";
		cin >> garagem[i].fabricante;
		cout << "Ano: ";
		cin >> garagem[i].ano_fabricacao;
	}

	for(int i = 0;i < tam;++i)
	{
		cout << garagem[i].ano_fabricacao << '\t'
		<< garagem[i].fabricante << endl;
	}

	delete [] garagem;
}