#include <iostream>
using namespace std;

int contador(int, int);

int main() {
	system("chcp 1252>nul");
	int ini, fim;
	cout << "Digite um Inicio e um fim: ";
	cin >> ini >> fim;
	cout << contador(ini, fim);
	return 0;
}

int contador(int Inicio, int Fim) {
	int soma = 0;
	for (; Inicio <= Fim; Inicio++) soma += Inicio;
	return soma;
}