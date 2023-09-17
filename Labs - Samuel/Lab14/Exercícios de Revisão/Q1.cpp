#include <iostream>
using namespace std;

int main()
{
	double litros;
	double * ptr = &litros;
	cout << "O valor de litros é " << *ptr;
}