#include <iostream>
using namespace std;

int main()
{
  float E, E_ciclismo, E_natacao, E_corrida, peso;
  float tempo_atv, horas_convertida; // isso evita que o resultado de "tempo de atividade / 60" seja truncado
  int horas, minutos, mets = 7; // mets é capacidade aeróbica e depende do tipo exercício
  char ch;

  cout << "Digite o seu peso em quilos:";
  cin >> peso;

  cout << "Digite o tempo de corrida:";
  cin >> horas >> ch >> minutos >> ch;
  horas_convertida = (horas * 60 + minutos);
  tempo_atv = horas_convertida / 60;
  E_corrida = mets * peso * tempo_atv;

  cout << "Digite o tempo de ciclismo:";
  cin >> horas >> ch >> minutos >> ch;
  horas_convertida = (horas * 60 + minutos);
  tempo_atv = horas_convertida / 60;
  E_ciclismo = mets * peso * tempo_atv;

  cout << "Digite o tempo de natação:";
  cin >> horas >> ch >> minutos >> ch;
  mets = 8;
  horas_convertida = (horas * 60 + minutos);
  tempo_atv = horas_convertida / 60;
  E_natacao = mets * peso * tempo_atv;

  E = E_corrida + E_natacao + E_ciclismo;

  cout << "Você gastou um total de " << E << " calorias";
}