#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  cout << "Gerando números pseudoaleatórios:\n";
  srand(1);
  //srand(5);

  cout << rand() << " ";
  cout << rand() << " ";
  cout << rand() << " ";
  cout << rand() << " ";
  cout << rand() << " ";
}