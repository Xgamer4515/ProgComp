#include <iostream>
using namespace std;

struct Contribuinte
{
    char nome[40];
    double valor;
};

int main()
{
    cout << "Digite o números de contribuintes: ";
    int qtd;
    bool grandes_patronos,pequenos_patronos;
    grandes_patronos = pequenos_patronos = false;
    cin >> qtd;

    Contribuinte * vet = new Contribuinte[qtd]; 

    for(int i = 0;i < qtd;++i)
    {
        cout << '#' << i + 1 << endl;
        cout << "Nome: ";
        cin.get();
        cin.getline(vet[i].nome,40);
        cout << "Valor: ";
        cin >> vet[i].valor;
        if(vet[i].valor >= 10000)
            grandes_patronos = true;
        else
            pequenos_patronos = true;
    }

    cout << endl;

    if(qtd != 0)
    {
        if(grandes_patronos ==  true)
        {
            cout << "Grandes Patronos\n";
            for(int i = 0;i < qtd;++i)
            {
                if(vet[i].valor >= 10000)
                    cout << vet[i].nome << ' ' << vet[i].valor << endl;
            }
        }
        else
        {
            cout << "Grandes Patronos\n";
            cout << "Nenhum\n\n";
        }

        if(pequenos_patronos == true)
        {
            cout << "Patronos\n";
            for(int i = 0;i < qtd;++i)
            {
                if(vet[i].valor < 10000)
                    cout << vet[i].nome << ' ' << vet[i].valor << endl;
            }
        }
        else
        {
            cout << "Patronos\n";
            cout << "Nenhum\n\n";
        }
    }
    else
    {
        cout << "Grandes Patronos\n";
        cout << "Nenhum\n\n";
        
        cout << "Patronos\n";
        cout << "Nenhum\n\n"; 
    }
}