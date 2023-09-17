#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cout << "Digite palavras(pronto para acabar):\n";
	char palavra[20];
	int palavra_total = 0;
	
	cin >> palavra;
	while(strcmp(palavra,"pronto"))
	{
		palavra_total++;
		cin >> palavra;
	}

	cout << "Foram digitadas um total " << palavra_total << " palavras.\n"; 
}