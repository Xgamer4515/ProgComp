#include <iostream>
using namespace std;

int main()
{
	int segundos,minutos;

	cout << "Digite um quantidade de minutos: ";
	cin >> minutos;

	segundos = minutos * 60;

	cout << "Existem " << segundos << "segundos em " << minutos << " minutos\n";

	system("pause");
	return 0;
}