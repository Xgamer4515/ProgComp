#include <iostream>
using namespace std;

int main()
{
  cout << "Que horas são?";
  int horas;
  int minutos;
  char pontos;
  cin >> horas >> pontos >> minutos;

  cout << "O seu relógio está atrasado.\n";
  cout << "Agora são " << horas + 1 << pontos << minutos;
}