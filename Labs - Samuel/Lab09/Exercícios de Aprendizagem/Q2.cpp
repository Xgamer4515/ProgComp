#include <iostream>
using namespace std;

int main()
{
	cout << "Digite dois números inteiros:";
	int num1,num2;
	cin >> num1 >> num2;

	cout << "O quociente " << num1 << " / " << num2 << " é " << int(num1 / num2) << endl;
	cout << "O resta da divisão " << num1 << " % " << num2 << " é " << num1 % num2 << endl;  	
}