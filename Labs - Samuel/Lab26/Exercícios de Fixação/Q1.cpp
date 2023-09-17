#include <iostream>
using namespace std;

const char * Meses[4] = 
{
	{"Marco"},
	{"Abril"},
	{"Junho"},
	{"Julho"}
};

void preencher(double[],int);
void mostrar(double[],int);

int main()
{
	const int MAX = 4;
	double gastos[MAX];

	preencher(gastos,MAX);
	mostrar(gastos);
}

void preencher(double vet[],int tam) 
{
	for(int i = 0;i < tam;++i)
	{
		cout << "Entre com o gasto de " << Meses[i] << ": ";
		cin >> vet[i];
	}
}

void mostrar(double vet[],int tam) 
{
	double total = 0.0;
	cout << "\nGastos\n";
	for (int i = 0; i < tam; i++)
	{
		cout << Meses[i] << ": R$" << vet[i] << endl;
		total += vet[i];
	}
	cout << "Total de gastos: R$" << total << endl;
}