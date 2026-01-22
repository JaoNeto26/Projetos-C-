#include <iostream>

using namespace std;
void exibirVetor();
void exibirVetor_infinito(int vetor[], int tamanho);

int main() {
	system("chcp 1252>nul");

	int vetor[] = { 15, 29, 48, 10, 35, 20, 30, 40, 50, 60, 63, 70 };
	// forma para descobrir o tamanho do vetor caso não tenha
	int tamanho = sizeof(vetor) / sizeof(vetor[0]);

	exibirVetor_infinito(vetor, tamanho);

	exibirVetor();
	return 0;
}

void exibirVetor() {
	int vetor[5] = { 15, 29, 48, 10, 35 };
	cout << "vetor com quantitade estatica: ";
	for (int i = 0; i < 5; i++) {
		cout << vetor[i] << " ";
	}
	cout << endl;
}

void exibirVetor_infinito(int vetor[], int tamanho) {
	cout << "vetor com quantidade infinitas de elementos: ";
	for (int i = 0; i < tamanho; i++) {
		cout << vetor[i] << " ";
	}
	cout << endl;

}