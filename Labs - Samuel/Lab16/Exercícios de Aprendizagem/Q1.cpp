#include <iostream>
using namespace std;

int main()
{
	cout << "Digite jogador/time:";
	char jogadorTime[50];
	cin.getline(jogadorTime,50);

	int letras = 0;
	char * ptr_time;

	for(int i = 0;jogadorTime[i] != '\0';++i)
	{
		if(jogadorTime[i] == '/')
		{
			ptr_time = &jogadorTime[i + 1];
			break;
		}
		letras++;
	}

	cout << "O nome do jogador tem " << letras << " letras.\n" <<
	<< "O seu time é o " << ptr_time; 
}