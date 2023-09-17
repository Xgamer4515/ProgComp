#include <iostream>
using namespace std;

void Mais(int *);
int Incrementa(int);

int main()
{
	cout << "Digite o valor:";
	int num;
	cin >> num;

	int * ptr = &num;

  	Mais(ptr);
	cout << "Resultado após Mais: " << *ptr << endl;
	*ptr = Incrementa(num);
  	cout << "Resultado após Incrementa: " << *ptr << endl;
}

void Mais(int * ptr)
{
	*ptr += 1;
}

int Incrementa(int a)
{
	return a + 1;
}