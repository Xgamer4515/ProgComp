#include <iostream>
using namespace std;

int main()
{
  cout << "Lado a:";
  float a;
  cin >> a;

  cout << "Lado b:";
  float b;
  cin >> b;

  float area = a * b;
  cout << "Área da base = " << area;

  cout << "Altura:";
  float altura;
  cin >> altura;

  float volume = altura * base;

  cout << "Volume do prisma = " << volume; 
}