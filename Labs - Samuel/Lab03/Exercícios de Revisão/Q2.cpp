#include <iostream>
using namespace std;

int main()
{
	cout << "Que horas são?\n";
	int horas,min;
	//char ch;

	cin >> horas;
	//cin >> ch;
	cin.ignore();
	cin >> min;


	cout << horas << "horas\n";
	cout << min << "minutos\n";
}