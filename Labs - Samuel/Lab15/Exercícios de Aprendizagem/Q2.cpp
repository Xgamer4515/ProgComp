#include <iostream>
using namespace std;

int main()
{
	int * ptr = new int;
	*ptr = 100;

	cout << "Conteúdo armazenado: " << *ptr << endl;
	cout << "Digite novo valor para esse bloco de memória: ";
	int valor;
	cin >> valor;

	*ptr = valor;

	delete ptr;
}