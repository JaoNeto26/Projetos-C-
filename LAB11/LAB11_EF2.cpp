#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");

	cout << "Qual e o seu nome? ";
	char nome[40];
	// lê uma linha inteira e armazena no vetor
	cin.getline(nome, 40);

	cout << "Qual conceito voce merece? ";
	char conceito;
	cin >> conceito;

	// atribui o próximo caractere da tabela ASCII
	conceito = conceito + 1;

	cout << endl;
	cout << "Bom dia  " << nome << ", seu conceito e " << conceito << "." << endl;

	return 0;
}