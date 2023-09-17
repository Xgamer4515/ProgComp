#include <iostream>
using namespace std;

char codificar(char);
char decodificar(char);

int main()
{
  cout << "Digite uma letra:";
  char ch;
  cin >> ch;

  cout << "Deseja codificar ou descodificar a letra:\n";
  cout << "0) descodificar\n1) codificar\n\nSua resposta:";
  bool resposta;
  cin >> resposta;

  if(resposta == true)
  {
    codificar(ch);
    cout << "O caractere codificado:" <<ch;
  }
  else
  {
    decodificar(ch)
    cout << "O caractere descodificado:" << ch;
  }
}

char codificar(char ch)
{
  return ch += 3;
}

char decodificar(char)
{
  return ch -= 3; 
}