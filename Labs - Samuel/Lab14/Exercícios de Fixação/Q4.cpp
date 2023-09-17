#include <iostream>
using namespace std;

union Cor
{
	struct rgba
	{
		short red;
		short green;
		short blue;
		short alpha;	
	};

	long all; 
}

void ler_RGBA(Cor *);
void ler_int32(Cor *);

int main()
{
	cout << "Digite uma cor no formato\n";
	Cor cor;
	Cor * ptr = &cor;
	ler_RGBA(ptr);
	ler_int32(ptr);
}

void ler_RGBA(Cor * cor)
{
	cout << "RGBA: ";
	cin >> cor.rgba.red;
	cin >> cor.rgba.green;
	cin >> cor.rgba.blue;
	cin >> cor.rgba.alpha;
}

void ler_int32(Cor * cor)
{
	cout << "Int32: ";
	cin >> cor.all;
}