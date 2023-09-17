#include <iostream>
using namespace std;

int main()
{
    const int CH = 60;
    float MF = 5.6;
    float N4 = 6.5;
    int F = 9;

    cout << "Digite a média final: ";
    cin >> MF;

    cout << "Digite a nota da 4ª avaliação: ";
    cin >> N4;

    cout << "Digite o número de faltas: ";
    cin >> F;

    if((MF >= 7) && (F <= 0.25 * CH))
        cout << "Aprovado";
    else if((MF < 4) || (F > 0.25 * CH))
        cout << "Reprovado";
}