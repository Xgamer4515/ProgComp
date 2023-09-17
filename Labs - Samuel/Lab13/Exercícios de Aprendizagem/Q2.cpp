#include <iostream>
using namespace std;

union jogador
{
    char nome[25]; // nome do jogador
    int numero;    // numero da camisa do jogador
};

struct gol
{
    jogador jog;   // identificação do jogador
    int hora, min; // hora e minuto em que o gol foi marcado
};

int main()
{
    gol estatistica[3];
    cout << "Digite os dados dos 3 últimos gols:\n";
    cout << "Gol: ";
    char pontos;
    cin >> estatistica[0].jog.nome 
    >> estatistica[0].jog.numero 
    >> estatistica[0].hora 
    >> pontos
    >> estatistica[0].min;

    cout << "Gol: ";
    cin >> estatistica[1].jog.nome 
    >> estatistica[1].jog.numero 
    >> estatistica[1].hora 
    >> pontos
    >> estatistica[1].min;

    cout << "Gol: ";
    cin >> estatistica[2].jog.nome 
    >> estatistica[2].jog.numero 
    >> estatistica[2].hora 
    >> pontos
    >> estatistica[2].min;  
}