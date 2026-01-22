#include <iostream>
#include <cstring>
using namespace std;

int main() {
	system("chcp 1252>nul");
	char palavra[50];
	char invertida[50];

	cout << "Digite uma palavra: ";
	cin >> palavra;
	
	// calcula tamanho e copia invertida usando um laço
	int len = strlen(palavra);
	for (int i = 0; i < len; ++i) {
		invertida[i] = palavra[len - 1 - i];
	}
	invertida[len] = '\0'; // terminador nulo

	cout << "Palavra invertida: " << invertida << endl;

	if (strcmp(palavra, invertida))
		cout << "A palavra não é um palíndromo\n";
	else
		cout << "A palavra é um palíndromo\n";
	return 0;
}