#include <iostream>
using namespace std;

struct tupla
{
	int a;
	int b;
	int c;
};

void trocar(tupla&,tupla&);

int main()
{
	cout << "Tupla A: ";
	tupla a;
	cin >> a.a >> a.b >> a.c;

	cout << "Tupla B: ";
	tupla b;
	cin >> b.a >> b.b >> b.c;

	cout << "\nInvertendo...\n\n";
	trocar(a,b);

	cout << "Tupla A: " 
		 << a.a << ' '
		 << a.b << ' '
		 << a.c << endl;

	cout << "Tupla B: " 
		 << b.a << ' '
		 << b.b << ' '
		 << b.c << endl;		 
}

void trocar(tupla & a, tupla & b)
{
	tupla temp;
	temp = a;
	a = b;
	b = temp; 
}