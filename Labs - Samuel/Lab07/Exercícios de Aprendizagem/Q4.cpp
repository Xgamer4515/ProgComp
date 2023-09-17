#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int bitsAltos(int);

int main()
{
	cout << "Digite um valor inteiro:";
	int num;
	cin >> num;
	
	int resul = bitsAltos(num);
	
	cout << "Os 16 bits mais altos desse valor correspondem ao número " 
	<< resul << endl << endl;
}

int bitsAltos(int num)
{
	unsigned int mascara = 4294901760;
	unsigned int bitsAltos = (num & mascara) >> 16;
	return bitsAltos;
}