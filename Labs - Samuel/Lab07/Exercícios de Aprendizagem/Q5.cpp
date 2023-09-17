#include <iostream>
using namespace std;

void exibirBits(unsigned char);
bool testarBit(unsigned char,int);

int main()
{
  cout << "Digite um valor entre 0 e 255: ";
  int num;
  cin >> num;

  unsigned char valor = num;

  exibirBits(valor);
}

void exibirBits(unsigned char num)
{
	bool estado;

	for(int i = 7;i >= 0;--i)
	{
		estado = testarBit(num, i);
		(estado) ? cout << 1 : cout << 0;
	}
}

bool testarBit(unsigned char mascara,int bit)
{
	unsigned char estado = 1 << bit;
	
	bool estado_bit;
	
	(estado & mascara) ? estado_bit = true : estado_bit = false;
	return estado_bit;
}