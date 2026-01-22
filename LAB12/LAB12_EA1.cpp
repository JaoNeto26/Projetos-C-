#include <iostream>
#include <string>
using namespace std;

struct contaBancaria {
	int identificador;
	string nome;
	double saldo;
};

int main() {
	system("chcp 1252>nul");
	contaBancaria conta;

	cout << "Digite o identificador da conta: ";
	cin >> conta.identificador;
	cin.ignore(); // limpa o buffer do cin antes de ler string
	/*
	o por que precisa do "cin.ignore"?
	o cin lê apenas o número e deixa o “Enter” (\n) que você digitou dentro do buffer de entrada 
	(a fila de caracteres que ainda não foram lidos).
	ele lê aquele “Enter” que sobrou no buffer, achando que é o fim da entrada de texto.

	Resultado: o nome do cliente fica vazio.

	cin.ignore();
	descarta o próximo caractere que está no buffer (geralmente o \n que sobrou).
	Assim, o getline() pode funcionar corretamente e ler o nome completo do cliente, incluindo espaços.
	*/

	cout << "Digite o nome do cliente: ";
	getline(cin, conta.nome);

	conta.saldo = 0.0;
	
	cout << "\nConta criada com sucesso!\n";
	cout << "Identificador: " << conta.identificador << endl;
	cout << "Cliente: " << conta.nome << endl;
	cout << "Saldo inicial: R$ " << conta.saldo << endl;

	double deposito;

	cout << "Digite o valor que deseja depositar na conta: ";
	cin >> deposito;

	conta.saldo += deposito;

	cout << "o saldo atual é de: " << conta.saldo << "R$" << endl;

	return 0;
}