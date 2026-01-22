#include <iostream>
#include <string>
using namespace std;

int main() {
	system("chcp 1252>nul");
	const char* mes[12] = {
		"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
		"Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
	};
	int vendas[12] = { 0 };
	int soma = 0;
	cout << "Digite o número de livros vendidos: " << endl;
	for (int i = 0; i < 12; i++) {
		cout << mes[i] << ": ";
		cin >> vendas[i];
	}
	for (int i = 0; i < 12; ++i) soma += vendas[i];

	cout << "Em um ano foram vendidos " << soma << " livros. ";
	return 0;
}