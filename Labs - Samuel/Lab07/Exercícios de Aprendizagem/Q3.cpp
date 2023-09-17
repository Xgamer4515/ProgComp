#include <iostream>
using namespace std;

int bitsBaixos(int);

int main()
{
	cout << "Digite um valor inteiro:";
	int num;
	cin >> num;

	int resul = bitsBaixos(num);
	cout << "Os 16 bits mais baixos desse valor correspondem ao número " << resul;
}

int bitsBaixos(int mascara)
{
	return mascara &= (1 << 16) - 1;
}