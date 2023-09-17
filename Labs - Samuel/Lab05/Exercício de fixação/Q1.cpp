#include <iostream>
using namespace std;

void exibir(int,int);

int main()
{
    cout << "Entre com o número de horas:";
    int horas;
    cin >> horas;

    cout << "Entre com o número de minutos:";
    int min;
    cin >> min;

    exibir(horas,min);
}

void exibir(int h,int min)
{
    cout << "Agora são " << h << ":" << min;
}