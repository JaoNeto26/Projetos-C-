#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");

    // string armazenada em vetor de caracteres (C-string)
    char texto[] = "Exemplo de string";

    cout << "Texto original: " << texto << "\n\n";

    // Versão 1: usa comparação no teste do for (verifica terminador nulo no cabeçalho)
    cout << "Versao 1 - comparacao no teste do for:\n";
    for (int i = 0; texto[i] != '\0'; ++i) {
        cout << texto[i];
    }
    cout << "\n\n";

    // Versão 2: não usa comparação no teste do for.
    // O teste é feito dentro do corpo e o laço é encerrado com break.
    cout << "Versao 2 - sem comparacao no teste do for:\n";
    for (int i = 0; ; ++i) {
        if (texto[i] == '\0') // verifica terminador dentro do corpo
            break;
        cout << texto[i];
    }
    cout << "\n";

	return 0;
}