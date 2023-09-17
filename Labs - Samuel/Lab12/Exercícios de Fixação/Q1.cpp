#include <iostream>
using namespace std;

struct chocolate
{
	char marca[40];
	float peso;
	int calorias;
};

int main()
{
	chocolate lanche = {"Charge",2.3,350};

	cout << lanche.marca << " "
	<< lanche.peso << "g  e "
	<< lanche.calorias << "kcal ";
}