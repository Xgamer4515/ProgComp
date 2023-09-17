#include <iostream>
using namespace std;

void exibir(const char*);
void exibir(const char*,bool);

int main()
{
	char frase[20] = "Meu programa em C++";
	exibir(frase);
	exibir(frase,false);
	exibir(frase,true);
}

void exibir(const char * str)
{
	cout << str << endl;
}

void exibir(const char* str, bool chamar)
{
	static int chamadas = 1;

	if(chamar == true)
		for(int i = 0;i < chamadas;++i)
			cout << str << endl;

	chamadas++;
}