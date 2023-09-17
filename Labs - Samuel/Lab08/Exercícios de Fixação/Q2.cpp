#include <iostream>
using namespace std;

int main()
{
	cout << "Digite um ponto flutuante:";
	float num;
	cin >> num;

	cout << "Notação padrão:" << num << '\n';
	cout << scientific;
	cout << "Notação científica:" << num << endl;
	
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(6);
	cout << "Notação decimal:" << num << endl;
}