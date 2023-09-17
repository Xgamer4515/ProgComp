#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    
    a = 1;
    b = 2;
    c = 3;
    
    return 0;
}

/*

Ao iniciar a depuração do código abaixo, você entende por que o depurador salta
imediatamente para a linha “a = 1;”? Isso acontecia com o programa da questão
anterior? Qual a explicação para essa diferença?

R: Bom o depurador salta imediatamente para linha "a = 1;",por que não tinha
nenhuma instrução, a não ser declaração da variável, ele saltou para a linha
“a = 1;”. Não ocorreria se fosse no programa da questão anterior, pois tinha
a inicialização da variável c

*/