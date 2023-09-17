#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  cout << "Gerando número pseudoaleatório:";
  
  srand(time(NULL));
  int num = rand();
  cout << num << endl;
  
  if(num > 16834)
  {
    cout << "GRANDE";
  }
  else
  {
    cout << "PEQUENO";
  }
}