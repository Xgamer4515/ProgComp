#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "Entre com dois números: ";
	char num1[2];
	cin >> num1;
	int num2;
	cin >> num2;

	int mult = atoi(num1) * num2;
	cout << "A multiplicação entre eles é " << mult;
}