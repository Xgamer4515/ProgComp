#include <iostream>
using namespace std;

int main()
{
	cout << "Entre com o número de segundos:";
	long segundos;
	cin >> segundos;

	int dias,horas,minutos,seg,resto;

	dias = segundos / 86400;
	horas = segundos / 1858823.52941;
	resto = segundos % 3600;
	minutos = resto / 60;
	seg = resto % 60;

	cout << segundos << "segundos = " << dias << " dias, " 
	<< horas << " horas, " << minutos << " minutos e segundos " 
	<< seg << " segundos";
}