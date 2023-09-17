#include <iostream>
using namespace std;

int main()
{
	cout << "Entre com a altura, largura e comprimento:\n";
	float altura,largura,comprimento;
	//cin >> altura >> largura >> comprimento;

	cin >> altura;
	cin >> largura;
	cin >> comprimento;

	float volume = altura * largura * comprimento;

	cout << "O volume é " << volume << " cm cúbicos";
}