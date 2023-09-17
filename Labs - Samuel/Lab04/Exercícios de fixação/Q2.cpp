#include <iostream>
using namespace std;

void Linha();
void Pequena();
void Media();
void Grande();

int main()
{
  Pequena();
  cout << endl;

  Media();
  cout << endl;
  
  Grande();
  cout << endl
  
  cout << "Programção de Computadores\n";
  
  Grande();
  cout << endl;
  
  Media();
  cout << endl;
  
  Pequena();
}

void Linha()
{
  cout << "----------";
}

void Pequena()
{
  Linha(); 
}

void Media()
{
  Linha();
  Linha();
}

void Grande()
{
  Linha();
  Linha();
  Linha();
}