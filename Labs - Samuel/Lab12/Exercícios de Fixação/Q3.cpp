#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// não foi usado "using namespace std;" porque o espaço de nomes std
// já contém um elemento de nome "data", o que causaria um choque 
// com o tipo "data" definido no programa

struct data {
	int dia,mes,ano;
};

int DiasDeVida(data, data);

int main() {
	data nascimento, atual;	// data no formato DD/MM/AAAA
	char barra;

	cout << "Data de nascimento: ";
	cin >> nasc.dia >> barra >> nasc.mes >> barra >> nasc.ano;

	cout << "Data de hoje: ";
	cin >> atual.dia >> barra >> atual.mes >> barra >> atual.ano;

	cout << "Voce tem " << DiasDeVida(nasc, hoje) << " dias de vida." << endl;

	return 0;
}

int DiasDeVida(data nasc, data hoje) {	
	// Na data 05/02/2010, temos 1 (um) mês completo e mais 5 dias em 2010
	// Essa é a justificativa para subtrair 1 do valor do mês
	int ini = (nasc.ano * 365) + ((nasc.mes - 1) * 31) + nasc.dia;
	int fim = (hoje.ano * 365) + ((hoje.mes - 1) * 31) + hoje.dia;

	return fim - ini;
}