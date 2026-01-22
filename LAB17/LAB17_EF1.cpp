#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");
	const char* carac = "*";
	
	// parte crescente: linhas com 1 a 5 asteriscos
	for (int i = 1; i <= 5; ++i) {
		// imprimir os caracteres
		for (int j = 0; j < i; ++j)
			cout << carac;
		cout << '\n';
	}

	// parte decrescente: linhas com 4 a 1 asteriscos
	for (int i = 4; i >= 1; --i) {
		// imprimir os caracteres
		for (int j = 0; j < i; ++j)
			cout << carac;
		cout << '\n';
	}
	
	return 0;
}