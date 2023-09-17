#include <iostream>
using namespace std;

double TempoDaVolta(double&);

int main()
{
	cout << "Volta: ";
	double tempo;
	cin >> tempo;

	while(!cin.fail())
	{
		TempoDaVolta(tempo);
		cout << "Tempo total = " << tempo << " segs.\n";

		cout << "Volta: ";
		cin >> tempo;
	}
}

double TempoDaVolta(double & tempo_volta)
{
	static double tempo_total = 0;

	tempo_total += tempo_volta;

	return tempo_total;
}