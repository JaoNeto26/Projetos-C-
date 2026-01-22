#include <iostream>
#include <string>

using namespace std;

struct Livro {
	string titulo;
	string autor;
	int ano;
};

struct Jogo {
	string titulo;
	string criador;
	int ano;
};

int main() {
	system("chcp 1252>nul");
	
	Livro emprestimo_livro[10];
	Jogo emprestimo_jogo[10];
    int qtdLivros = 0;
    int qtdJogos = 0;

    int opcao;

    cout << "Deseja emprestar um livro (1) ou um jogo (0)? ";
    cin >> opcao;
    cin.ignore(); 

    if (opcao == 1) {
        cout << "\n--- Empréstimo de Livro ---\n";
        cout << "Título: ";
        getline(cin, emprestimo_livro[qtdLivros].titulo);
        cout << "Autor: ";
        getline(cin, emprestimo_livro[qtdLivros].autor);
        cout << "Ano: ";
        cin >> emprestimo_livro[qtdLivros].ano;
        qtdLivros++;
    }
    else if (opcao == 0) {
        cout << "\n--- Empréstimo de Jogo ---\n";
        cout << "Título: ";
        getline(cin, emprestimo_jogo[qtdJogos].titulo);
        cout << "Plataforma: ";
        getline(cin, emprestimo_jogo[qtdJogos].criador);
        cout << "Ano: ";
        cin >> emprestimo_jogo[qtdJogos].ano;
        qtdJogos++;
    }
    else {
        cout << "Opção inválida!" << endl;
        return 0;
    }

	return 0;
}