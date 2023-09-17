#include <iostream>
using namespace std;

struct Horario
{
	int hora,min;	
};

void MostrarHorario(Horario *);

int main()
{
	
	cout << "Que horas são? ";
	Horario horario;
	char pontos
	cin >> horario.hora >> pontos >> horario.min;

	Horario * ptr = &horario;
	ptr->hora++;
	MostrarHorario(ptr);
}

void MostrarHorario(Horario * horario)
{
	cout << "Seu relógio está atrasado, o horário correto é "
	<< horario->hora << ':' << horario->min << '.'; 
}