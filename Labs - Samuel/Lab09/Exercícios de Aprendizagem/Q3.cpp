#include <iostream>
using namespace std;

int main()
{
	cout << "Digite um número real:";
	float num;
	cin >> num;

	cout << "A parte inteira:" << int(num) << endl;
	cout << "A parte fracionária:" << float(num - int(num)) << endl;
}