#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	while (++i < 4)
 		cout << "Oi! ";
	do
 		cout << "Tchau! ";
	while (i++ <= 8);
}

/*

Saída do programa:

Oi! Oi! Oi! Tchau! Tchau! Tchau! Tchau! Tchau! Tchau! 

*/