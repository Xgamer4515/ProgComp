#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("sol.txt");
	
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo sol.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	ofstream fout;
	fout.open("num.txt");
	if (!fout.is_open())
	{
		cout << "Abertura do arquivo num.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	char nome[80];
	int num;
	fin >> num;
	
	while(!fin.eof())
	{
		if(fin.good())
		{
			cout << num << endl;
		}
		else
		{
			fin.clear();
			fin >> nome;
		}
		
		fin >> num;
	}
		
	fin.close();
	fout.close();
	
	cout << "Pronto!" << endl;
	
	return 0;
}