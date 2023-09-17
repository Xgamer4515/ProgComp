// segundo.cpp – erros de sintaxe
#include <iostream>
using namespace std;

int main()
{
    int cenouras; // declara uma variável inteira
    cenouras = 25 // atribui um valor a uma variável
    
    cout << "Eu tenho << cenouras << " cenouras." << endl;
    cenouras = cenouras - 1; // decrementa a variável
    
    cout << "Agora eu tenho " << abacaxi << " cenouras." << endl;
    system("pause");
    return 0;
}

// O erros desse programa:

/*

cenouras = 25 // Ausênsia do ponto e vírgula no final da instrução

cout << "Eu tenho << cenouras << " cenouras." << endl; // Esqueceu de fechar as aspas

abacaxi // variável inexistente

*/