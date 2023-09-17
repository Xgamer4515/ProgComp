#include <iostream>
#include <string>
using namespace std;

struct balao
{
    float diametro;
    char marca[20];
    int modelo;
};

int main() 
{
    balao * balao_ptr = new balao;

    cout << "Digite o diâmetro do balão (em metros): ";
    cin >> balao_ptr->diametro;

    cout << "Digite a marca do balão: ";
    cin.ignore(); 
    cin.getline(balao_ptr->marca, 20);

    cout << "Digite o número do modelo do balão: ";
    cin >> balao_ptr->modelo;
    
    cout << "\nConteúdo do registro balao:\n";
    cout << "Diâmetro: " << balao_ptr->diametro << " metros\n";
    cout << "Marca: " << balao_ptr->marca << "\n";
    cout << "Modelo: " << balao_ptr->modelo << "\n";

    delete balao_ptr;

    return 0;
}
