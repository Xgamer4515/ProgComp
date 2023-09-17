#include <iostream>
using namespace std;

float media(int,int);

int main ()
{
  cout << "Digite um valor inteiro:";
  int num;
  cin >> num;

  cout << "Digite outro valor inteiro:";
  int num2;
  cin >> num2;

  float resul = media(num,num2);

  cout << "A média dos números é " << resul;
}

float media(int a,int b)
{
  float media = (a + b) / 2;
  return media;
}