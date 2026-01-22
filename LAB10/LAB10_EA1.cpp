#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");

	int vet[5];
	int posi, N_valor;

	cout << "Vetor: ";
	cin  >> vet[0] >> vet[1] >> vet[2] >> vet[3] >> vet[4];
	cout << "---------------------" << endl;
	cout << "Alterar posição: ";
	cin  >> posi;
	cout << "Novo valor: ";
	cin >> N_valor;
	vet[posi] = N_valor;
	cout << "---------------------" << endl;
	cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4];
	return 0;
}