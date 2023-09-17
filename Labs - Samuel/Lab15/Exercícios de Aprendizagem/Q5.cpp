#include <iostream>
using namespace std;

struct ASCII
{
	char ch;
	int valor;
};

ASCII* alocarASCII(char,int);

int main()
{
	char ch;
	int valor;

	cout << "Digite um caractere: ";
	cin >> ch;
	cout << "Digite um valor inteiro: ";
	cin >> valor;

	ASCII * elemento = alocarASCII(ch,valor);

	cout << "Caractere: " << asciiElement->ch << endl;
    cout << "Valor: " << asciiElement->valor << endl;

	delete [] elemento;
}

ASCII* alocarASCII(char ch,int valor)
{
	ASCII * ascii = new ASCII;
	ascii->ch = ch;
	ascii->valor = valor;
	return ascii; 
}