#include <iostream>
using namespace std;

enum mes {Jan=1,Fev,Mar,Abr,Mai,Jun,Jul,Ago,Set,Out,Nov,Dez};

istream& operator>>(istream&,mes&);
ostream& operator<<(ostream&,mes);

int main()
{
    mes inicio, fim;
    inicio = Mar; // inicio do semestre
    fim = Jun;    // fim do semestre
    cout << "Digite o número do mês atual: ";
    mes atual;
    cin >> atual;

    cout << mes << endl;

    if (atual >= inicio && atual <= fim)
        cout << "Você está em período de aulas.\n";
    else
        cout << "Férias!\n";
    return 0;
}

istream& operator>>(istream& is,mes& m)
{
    int temp;
    is >> temp;
    m = (mes)temp;
    return is;
}

ostream& operator<<(ostream& os, mes m) 
{
    switch (m) 
    {
        case Jan: os << "Janeiro"; break;
        case Fev: os << "Fevereiro"; break;
        case Mar: os << "Março"; break;
        case Abr: os << "Abril"; break;
        case Mai: os << "Maio"; break;
        case Jun: os << "Junho"; break;
        case Jul: os << "Julho"; break;
        case Ago: os << "Agosto"; break;
        case Set: os << "Setembro"; break;
        case Out: os << "Outubro"; break;
        case Nov: os << "Novembro"; break;
        case Dez: os << "Dezembro"; break;
        default: os.setstate(ios_base::failbit);
    }
    return os;
}