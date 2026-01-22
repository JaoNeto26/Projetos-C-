#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");

	// Inicializa um array de char com a string literal.
	// O compilador aloca strlen("C++ Primer Plus") + 1 bytes (o +1 é para o terminador nulo '\0').
	char nome[] = "C++ Primer Plus";

	// Imprime a string completa (cout para arrays de char imprime até o '\0').
	cout << "A palavra e: " << nome << endl; // endl adiciona '\n' e força flush

	// strlen retorna o número de caracteres até o terminador nulo (não conta o '\0').
	cout << "Numero de caracteres: " << strlen(nome) << endl;

	// sizeof(nome) retorna o tamanho em bytes do array 'nome'.
	// Para um array de char isso normalmente será strlen(nome) + 1, pois inclui o '\0'.
	cout << "Espaco ocupado em bytes: " << sizeof(nome) << endl;

	return 0;
}