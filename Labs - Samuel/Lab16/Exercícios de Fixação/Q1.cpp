#include <iostream>
using namespace std;

const int meses_totais = 12;
const char meses[12][10] =
{
	"Janeiro","Fevereiro","Março","Abril",
	"Maio","Junho","Julho","Agosto",
	"Setembro","Outubro","Novembro","Dezembro"
};

int main()
{
	int vendas_mes[meses_totais];
	
	cout << "Digite o número de livros vendidos:" << endl;

	for(int i = 0;i < meses_totais;++i)
	{
		cout << meses[i] << ": ";
		cin >> vendas_mes[i];
	}

	int vendas_totais = 0;

	for(int j = 0;j < meses_totais;++i)
	{
		vendas_totais += vendas_mes[i];
	}

	cout << "Em um ano foram vendidos " << vendas_totais << " livros.";
}