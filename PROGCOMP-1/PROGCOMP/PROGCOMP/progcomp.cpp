#include <iostream>
using namespace std;
#include "titulo.h"
#include <windows.h>
// inclusão de bibliotecas
// criando funções com macros


#define Print(X) cout << X
#define Read(X) cin >> X


int main()
{
	// mostra a tela ligada

	for (int i = 0; i < 10; i++)
	{
		// limpa a janela
		// exibe tela com pixels aleatórios
		// dorme por 1 segundo
	}
	// desliga pixels da tela
	// mostra interface de comandos

	int num;
	char op;
	Read(op);
	// repete até ser digitado 'S'
	while (op != 'S')
	{
		// testa o comando escolhido e executa a tarefa
		// limpa a janela
		// redesenha a tela
		// reexibe os textos
		// mostra a interface de comandos
		srand(time(0));

		// Tela inicial: todos os pixels ligados
		mostrarTela(0xFFFFFFFF);
		cout << "[+] Ligando tela..." << endl;
		Sleep(1500);

		// Modo de teste automático
		cicloTeste(10);
		mostrarTela(0x0000000);

		Read(op);
	}
	// finaliza o programa
	// hackeando a tela


	

		
	
}