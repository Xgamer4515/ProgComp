#include <iostream>
using namespace std;

struct Caixa
{
	char marca[40];
	float altura;
	float largura;
	float comprimento;
	float volume;
};

void exibir(const Caixa*);
void calcular_volume(Caixa*);

int main()
{
	Caixa caixa { "Caixasnet", 30, 30, 41, 0};
	exibir(&caixa);
	calcular_volume(&caixa);
	exibir(&caixa);

	/*
	
	A vantagem que têm da referência para o ponteiro é:
	
	1. Sintaxe mais limpa e segura: 
	
	Com as referências, usa-se o operador '.' ao
	lugar da '->' usado em ponteiros.

	2. Sem necessidade de operadores de desreferência:

	Com referências, não precisa usar o operador de 
	desreferência * para acessar os valores apontados
	pelos ponteiros. 

	3. Sem necessidade de passagem do endereço:

	Em ponteiros é necessário que passe o endereço de
	uma variável em que nas referências não precisa.

	4. Mais semântica de valor:

	As referências trabalham com a variável diretamente 
	no lugar dos ponteiros em que trabalhamos com o 
	endereço de mémoria de variável onde está localizado.

	*/
}

void exibir(const Caixa * caixa)
{
	cout << caixa->marca << endl
		 << caixa->altura << endl
		 << caixa->largura << endl
		 << caixa->comprimento << endl
		 << caixa->volume << endl;
}

void calcular_volume(Caixa * caixa)
{
	caixa->volume = caixa->altura * caixa->largura * caixa->comprimento;
}