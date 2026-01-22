#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");

	int j;
	// for (inicialização; condição; incremento)
	// - inicia j em 0
	// - enquanto j < 11, executa a instrução seguinte (cout << j)
	// - a cada iteração, aumenta j em 3 (j += 3)
	for (j = 0; j < 11; j += 3)
		cout << j;

	// Depois que o laço termina, j já foi incrementado para o valor 
	// que quebra a condição (12).
	cout << endl << j << endl;

	return 0;
}