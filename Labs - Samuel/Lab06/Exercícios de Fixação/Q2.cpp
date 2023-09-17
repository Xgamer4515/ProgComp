#include <iostream>
using namespace std;

int main()
{
    cout << "Distância percorrida (km): ";
    int distancia;
    cin >> distancia;

    cout << "Litros de combustível: ";
    int litros;
    cin >> litros;

    int consumo = distancia / litros;

    cout << "O consumo do seu carro foi de " << consumo << " km/litro";     
}