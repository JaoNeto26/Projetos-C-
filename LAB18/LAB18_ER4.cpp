#include <iostream>
using namespace std;

bool StrEqual(const char a[], const char b[]);

int main() {
	system("chcp 1252>nul");

	char palavra[20] = "coleg";
	if (StrEqual("colega", palavra))
		cout << "Iguais" << endl;
	else
		cout << "Diferentes" << endl;

	return 0;
}

bool StrEqual(const char a[], const char b[]) {
	int i = 0;

	while (true) {
		if (a[i] != b[i])
			return false;                // se os caracteres forem diferentes → não são iguais

		if (a[i] == '\0' && b[i] == '\0')
			return true;                 // se chegaram ao fim juntas → são iguais

		i++;                             // avança para o próximo caractere
	}
}