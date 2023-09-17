#include <iostream>
using namespace std;

struct Horario
{
	int horas,min;
};

int operator-(Horario,Horario);
ostream& operator<<(ostream&,Horario&);
istream& operator>>(istream&,Horario&);

int main()
{
	cout << "Início: ";
	horario inicial;
	cin >> inicial	

	cout << "Fim: ";
	horario chegada;
	cin >> chegada;

	cout << "Entre " << incial << " e " << chegada << " existem "
	<< inicial - chegada << " minutos , isto é, " << (inicial - chegada) / 60 << "h e " 
	<< (inicial - chegada) % 60 << " minutos.";  
}

int operator-(Horario inicio,Horario fim)
{
	int min_inicio = (inicio.horas * 60) + inicio.min;
	int min_fim = (fim.horas * 60) + fim.min;
	int diff = min_fim - min_inicio;
	return diff;
}

ostream& operator<<(ostream& os,Horario& horario)
{
	os << horario.horas << ':' << horario.min;
	return os;
}

istream& operator>>(istream& is,Horario& horario)
{
	is >> horario.horas;
	is.ignore();
	is >> horario.min;
	return is; 
}