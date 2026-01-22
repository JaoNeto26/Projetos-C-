#include <iostream>
using namespace std;

/* Suponha que todas as funções de um programa precisem acessar um ponteiro
global chamado print. O ponteiro é definido na função principal e acessado por
funções em outros arquivos. Construa a função mensagem() em um outro arquivo
de código fonte de forma que ela utilize print para obter a saída abaixo:
 */

void (*print)(const char[]); 
void normal(const char texto[]);
void alternativo(const char texto[]);
void mensagem();

int main()
{
	cout << "Usar print normal [s/n]? ";
	char opcao;
	cin >> opcao;
	if (opcao == 's') print = normal;
	else print = alternativo;
	mensagem();
}

void normal(const char texto[])
{
	cout << texto << endl;
}

void alternativo(const char texto[])
{
	cout << "<<< " << texto << " >>>" << endl;
}