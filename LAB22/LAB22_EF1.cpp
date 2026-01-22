#include <iostream>
#include <cctype>
using namespace std;
int main() {
	system("chcp 1252>nul");
	int letras = 0;
	char ch;

	// lê caractere a caractere; termina se a leitura falhar
	while (cin >> ch) {
		switch (ch) {
		case '!':
			cout << "Foram escritas " << letras << " no terminal antes que o programa finalizasse" << endl;
			return 0;
		case '?':
			cout << "Foram escritas " << letras << " no terminal antes que o programa finalizasse" << endl;
			return 0;
		default:
			// para qualquer outro caractere, conta apenas se for letra
			if (isalpha(static_cast<unsigned char>(ch)))
				letras++;

		}
	}
	return 0;
}