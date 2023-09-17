#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  cout << "Ponto P:\n";
  int px,py;
  cin >> px >> py;

  cout << "Ponto Q:\n";
  int qx,qy;
  cin >> qx >> qy;

  float D = sqrt(pow(qx - px,2) + pow(qy - py,2));

  cout << "A distância entre P e Q é:" << D;
}