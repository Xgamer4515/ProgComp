#include <iostream>
#include <cmath>
using namespace std;

void funcao_segundo_grau(float,float,float);

int main()
{
	cout << "=================\n";
	cout << "Função quadrática\n";
	cout << "=================\n\n";
	
	cout << "Digite o valor de a, b e c";
	float a,b,c;
	cin >> a >> b >> c;

	funcao_segundo_grau(a,b,c);
}

void funcao_segundo_grau(float a, float b, float c)
{
	float delta = pow(b,2) - 4 * a * c;

	double x1,x2;

	if(delta > 0)
	{
		x1 = (- b + sqrt(delta) / 2 * a);
		x2 = (- b - sqrt(delta) / 2 * a);

		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else if(delta == 0)
	{
		x1 = (- b + sqrt(delta) / 2 * a);
		cout << "x1 e x2 = " << x1 << endl;
	}
	else
	{
		cout << "Não existe raizes reais para essa função.\n";
	}
}