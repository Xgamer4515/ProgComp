#include <iostream>
using namespace std;

void ExibirErro(int,const char*,void (*perro)(int));
void programador(int);
void usuario(int);

int main()
{
	ExibirErro(1245, "falha na leitura do arquivo", usuario);
	cout << endl;
	ExibirErro(4521, "erro inesperado na inicialização", programador);
	return 0;
}

void usuario(int codigo)
{
	cout << "A operação não pôde ser concluída!\n\n";

	cout << "Algum problema foi detectado no sistema que impossibilitou a "
		 << "conclusão da tarefa. Contacte o desenvolvedor do sistema em "
		 << "dev@sys.com e envie o relatório de erros abaixo.\n\n";

	cout << "-----------------------------\n";
	cout << "Relatório de Erros do Sistema\n";
	cout << "-----------------------------\n";

	cout << "Código: " << codigo << endl;
	cout << "Descrição: ";
}

void programador(int codigo)
{
	cout << "Erro " << codigo << ": ";
}

void ExibirErro(int codigo, const char * str, void(*perro)(int))
{
	perro(codigo);
	cout << str << endl;
}