// terceiro.cpp – erros de semântica
#include <iostream>
using namespace std;

int main()
{
    int dias; // declara uma variável inteira
    
    cout << "Numero de Dias: ";
    cin >> dias; // lê um valor para a variável
    
    int horas = dias * 60;
    
    cout << dias << " dias tem " << horas << " horas." << endl;

    system("pause");
    return 0;
}

// Não foram encontrados erros de sintaxe, porém há erros de semântica:

/*

int horas = dias * 60; // Transformação de dias para horas está errada

*/