#include <iostream>
using namespace std;

const int tam = 20;

int main()
{
	cout << "Digite um palavra:";
	char palavra[tam];

	cout << "Em " << palavra << " a ùltima letra é " << palavra[strlen(palavra) - 1];
}