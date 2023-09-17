#include <iostream>
using namespace std;

int main()
{
  cout << "Custo de fábrica: ";
  int custo;
  cin >> custo;

  float impostos_distribuidor = 0.28 * custo;
  float impostos_custo_da_fabrica = 0.45 * custo;
  float custo_final = custo + impostos_distribuidor + impostos_custo_da_fabrica;

  cout << "O custo ao consumindor é de R$" << custo_final;
}