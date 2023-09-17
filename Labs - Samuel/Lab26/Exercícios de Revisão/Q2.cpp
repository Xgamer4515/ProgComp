#include <iostream>
using namespace std;

int subst(char * str, char c1, char c2);

int main() 
{
	char palavra[] = "joazinho";
	int subst = subst(&palavra,'j','t');
	cout << "Na palavra " << palavra << " substitui o j pelo t " << subst << " vezes";   
}

int subst(char * str, char c1, char c2) 
{
	int tam =  sizeof(str);
	int qtd = 0;
	for(int i = 0;i < tam;++i) 
	{
		if(str[i] == c1) 
		{
			str[i] = c2;
			qtd++;
		}
	} 
		
	return qtd;
}