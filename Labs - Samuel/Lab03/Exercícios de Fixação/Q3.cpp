#include <iostream>
using namespace std;

int main()
{
	cout << "Digite sua idade: ";
	int idade;
	cin >> idade;

	int dias = idade * 365;

	cout << idade << " anos equivalem a " << dias << " dias";
}