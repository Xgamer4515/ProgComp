#include <iostream>
#include <fstream>
using namespace std;

double maior_valor(const double[], int);

int main() 
{
	cout << "Nome do arquivo: ";
	char arquivo[40];
	cin >> arquivo;
	
	ifstream fin(arquivo, ios_base::in);
	if (!fin.is_open()) {
		cout << "Erro ao abrir arquivo " << arquivo << endl;
		return EXIT_FAILURE;
	}

	int tam = 0;
	double temp;

	while (fin >> temp)
		tam++;

	fin.close();

	double vetor[tam];

	fin.open(arquivo, ios_base::in);
	if (!fin.is_open()) {
		cout << "Erro ao abrir arquivo " << arquivo << endl;
		return EXIT_FAILURE;
	}

	for (int i = 0; i < tam; ++i) 
		fin >> vetor[i];

	double valor = maior_valor(vetor, tam);

	cout << "O maior valor é " << valor << endl;
}

double maior_valor(const double vet[], int tam) 
{
	double valor = vet[0];

	for (int i = 1; i < tam; ++i) 
		if (vet[i] > valor)
			valor = vet[i];

	return valor;
}