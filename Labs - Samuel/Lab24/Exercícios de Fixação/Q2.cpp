#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int num,tam = 0;

	ifstream fin("vet.dat", ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		cout << "O arquivo vet.dat contém:\n";
		fin.read((char*) &tam, sizeof(int));
		for (int i = 0; i < tam; ++i)
		{
			fin.read((char*) &num, sizeof(int));
			cout << num << ' ';
		}
		cout << endl << endl;
	}
	fin.close();

	ofstream fout("vet.dat", ios_base::out | ios_base::binary);
	tam = 0;
	fout.write((char*) &tam, sizeof(int));

	cout << "Digite números (zero para encerrar):\n";
	while (cin >> num && num != 0)
	{
		fout.write((char*) &num, sizeof(int));
		++tam;
	}
	
	fout.seekp(0, ios_base::beg);
	fout.write((char*) &tam, sizeof(int));
	fout.close();

	cout << tam << " números foram armazenados em vet.dat" << endl;
}