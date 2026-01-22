#include <iostream>

using namespace std;

struct peixe
{
	char tipo[20];     // nome ou espécie do peixe (string)
	float peso;        // peso do peixe (em kg, por exemplo)
	unsigned comp;     // comprimento do peixe (em cm)
};

int main() {
	system("chcp 1252>nul");
	cout << "Digite o tamanho do vetor: ";
	int tam;
	cin >> tam;

	peixe * vet = new peixe[tam];

	cout << "Digite o tipo do 1° peixe: ";
	cin >> vet[0].tipo;
	cout << "Digite o peso: ";
	cin >> vet[0].peso;
	cout << "Digite o comprimento: ";
	cin >> vet[0].comp;

	cout << "Digite o tipo do 2° peixe: ";
	cin >> vet[1].tipo;
	cout << "Digite o peso: ";
	cin >> vet[1].peso;
	cout << "Digite o comprimento: ";
	cin >> vet[1].comp;
	cout << "\nO peso do segundo peixe é " << vet[1].peso << " gramas.\n";

	// Libera memória
	delete[] vet;
	return 0;
}