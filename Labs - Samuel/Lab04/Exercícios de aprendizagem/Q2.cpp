#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  cout << "Digite o ângulo: ";
  float angulo;
  cin >> angulo;

  float resul = sin(angulo * 3.14159265/180);
  
  cout << "Seno = " << resul;
  return 0;
}