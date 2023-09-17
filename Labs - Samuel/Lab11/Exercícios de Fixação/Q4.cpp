#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char nome[] = "C++ Primer Plus";

	cout << "O vetor nome têm " << strlen(nome) 
	<< " letras e têm " << sizeof(nome) << " bytes.";
}