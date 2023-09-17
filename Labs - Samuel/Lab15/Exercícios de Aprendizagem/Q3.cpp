#include <iostream>
using namespace std;

int main()
{
	cout << "Quantos valores deseja guardar? ";
	int tam;
	cin >> tam;

	int * vet = new int[tam];

	cout << "Quais os valores? ";
	
	for(int i = 0; i < tam;++i)
	{
		cin >> vet[i];
	}

  	cout << endl;
  	
  	cout << "Os valores ";
	
	for(int j = 0;j < tam - 2;++j)
	{
		cout << vet[j] << ", ";
	}

	cout << vet[tam - 2] << " e " << vet[tam - 1] 
  	<< " foram armazendados.";

	delete [] vet;
}