#include <iostream>
using namespace std;

int main()
{
	cout << "Digite números inteiros (0 para finalizar):\n";
	int num_lidos,num,soma;
	float media;
	num_lidos = num = soma = 0;

	cin >> num;

	while(num != 0)
	{
		num_lidos++;
		soma += num;
		cin >> num;
	}

	media = soma / float(num_lidos);

	cout << "Foram lidos " << num_lidos << " números\n"
	<< "A soma dos números é " << soma << "\nA média "
	<< "é " << media;
}