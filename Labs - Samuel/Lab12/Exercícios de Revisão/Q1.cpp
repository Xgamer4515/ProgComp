#include <iostream>
using namespace std;

struct complexo
{
	float real;
	float img;	
};

complexo soma(complexo,complexo);
void exibir(complexo);
complexo ler();
complexo mult(complexo,complexo);

int main()
{
	cout << "Primeiro Complexo: ";
	complexo c1 = ler();

	cout << "Segundo Complexo: ";
	complexo c2 = ler();

	complexo soma = soma(c1,c2);
	complexo mult = mult(c1,c2);

	cout << "A soma dos números: ";
	exibir(soma);

	cout << "A multiplicação dos números: ";
	exibir(mult);
}

complexo soma(complexo a,complexo b)
{
	complexo c;
	c.real = a.real + b.real;
	c.img = a.img + b.img;
	return c;
}

void exibir(complexo c)
{
	cout << c.real;
	cout << showpos;
	cout << c.img;
	cout << noshowpos;
	cout << "i";
}

complexo ler()
{
	complexo temp;
	cin >> temp.real;
	cin >> temp.img;
	cin.ignore();
}

complexo mult(complexo a,complexo b)
{
	complexo x;
	x.real = a.real * b.real;
	x.img = a.img * b.img;
	return x;
}