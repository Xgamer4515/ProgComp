#include <iostream>
using namespace std;

int main()
{
	cout << "Digite as idades do grupo:\n";
	int idade,maior_idade = 0;

	while((cin >> idade) != 0)
	{
		if(idade >= 18)
			maior_idade++;
		cin >> idade;
	}

	cout << "Nesse grupo " << maior_idade << " pessoas são maiores de idade.\n"; 
}