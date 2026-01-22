#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");

	cout << "Digite o tamanho do vetor: ";
	int tam;
	cin >> tam;
	int * vet = new int[tam];

	cout << "Criando vetor para " << tam << " inteiros... ";

	return 0;
}