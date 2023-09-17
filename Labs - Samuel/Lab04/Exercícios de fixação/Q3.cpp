#include <iostream>
using namespace std;

void UmTres();
void Dois();

int main()
{
  cout << "Começando agora:\n";
  UmTres();
  cout << "Pronto";
}

void UmTres()
{
  cout << "Um ";
  Dois();
  cout << "Tres\n";
}

void Dois()
{
  cout << "Dois ";
}