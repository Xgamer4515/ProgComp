#include <iostream>
using namespace std;

int main()
{
	cout << "Digite um ponto-flutuante:";
	float num;
	cin >> num;

	cout << "Notação padrão:" << int(num) << endl;
	cout << scientific;
	cout << "Notação científica:" << num << endl;
	cout << fixed;
	cout.precision(2);
	cout << "Notação decimal:" << num << endl;
}