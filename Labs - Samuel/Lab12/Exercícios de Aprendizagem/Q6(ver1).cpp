#include <iostream>
using namespace std;

struct Horario
{
	int horas,min;
};

int subtrair(Horario,Horario);
void exibir_horario(Horario);

int main()
{
	cout << "Início: ";
	Horario inicial;
	char pontos;
	cin >> inicial.horas >> pontos >> inicial.min;

	cout << "Fim: ";
	Horario chegada;
	cin >> chegada.horas >> pontos >> chegada.min;

	int min_total = subtrair(inicial,chegada);  

	cout << "Entre " << exibir_horario(inicial) << " e " << exibir_horario(chegada)
	<< " existem " << min_total << " minutos , isto é, " << min_total / 60 << "h e " 
	<< min_total % 60 << " minutos.";  
}

int Calcular_dias(Horario inicio,Horario fim)
{
	int min_inicio = (inicio.horas * 60) + inicio.min;
	int min_fim = (fim.horas * 60) + fim.min;
	int diff = min_fim - min_inicio;
	return diff;
}

void exibir_horario(Horario horario)
{
	cout << horario.horas << ':' << horario.min;
}