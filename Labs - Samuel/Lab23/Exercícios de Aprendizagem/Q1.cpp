#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() 
{
    cout << "Digite o nome do arquivo de código fonte: ";
    char nomeArquivo[40];
    cin >> nomeArquivo;

    ifstream fin(nomeArquivo);
    if (!fin.is_open())
    {
        cerr << "Erro ao abrir o arquivo " << nomeArquivo << endl;
        exit(EXIT_FAILURE);
    }

    char nomeArquivoModificado[40];
    strcpy(nomeArquivoModificado, nomeArquivo);
    char * extensao = strrchr(nomeArquivoModificado, '.');
    strcpy(extensao, "_m.cpp");

    ofstream fout(nomeArquivoModificado);
    if (!fout.is_open())
    {
        cerr << "Erro ao criar o arquivo " << nomeArquivoModificado << endl;
        exit(EXIT_FAILURE);
    }

    fout << "// " << nomeArquivoModificado << endl;
    fout << "#define print cout" << endl;

    char linha[200];
    while (fin.getline(linha, sizeof(linha)))
    {
        char * pos = strstr(linha, "cout");
        while (pos != nullptr) 
        {
            strncpy(pos, "print", 5);
            pos = strstr(pos + 5, "cout");
        }
        fout << linha << endl;
    }

    cout << "Arquivo " << nomeArquivoModificado << " criado com as alterações.\n";

    fin.close();
    fout.close();
}