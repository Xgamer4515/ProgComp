#include <iostream>
using namespace std;

struct complexo
{
	float real;
	float img;	
};

complexo operator*(complexo,complexo);
complexo operator+(complexo,complexo);
ostream& operator<<(ostream&, complexo&);
istream& operator>>(istream&, complexo&);

int main()
{
	cout << "Digite o primeiro número complexo: ";
	complexo c1;
	cin >> c1;

	cout << "Segundo Complexo: ";
	complexo c2;
	cin >> c2;

	cout << "A soma dos números: " << c1 + c2 << endl;
	cout << "A multiplicação dos números: " << c1 * c2 << endl;
}

complexo operator+(complexo a,complexo b)
{
	complexo c;
	c.real = a.real + b.real;
	c.img = a.img + b.img;
	return c;
}

ostream& operator<<(ostream& os, complexo& c)
{
	os << c.real;
	os << showpos;
	os << c.img;
	os << noshowpos;
	os << "i";

	return os;
}

istream& operator>>(istream& is, complexo& temp)
{
	is >> temp.real;
	is >> temp.img;
	cin.ignore();

	return is;
}

complexo operator*(complexo a,complexo b)
{
	complexo x;
	x.real = a.real * b.real;
	x.img = a.img * b.img;
	return x;
}