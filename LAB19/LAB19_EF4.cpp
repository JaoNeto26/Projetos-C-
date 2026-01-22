#include <iostream>
using namespace std;

void exibir(char );

int main() {
	system("chcp 1252>nul");

	char ch;
	cout << "digite um caractere: ";
	cin >> ch;

	exibir(ch);
	cout << "programando em c++" << endl;
	exibir(ch);

	return 0;
}

void exibir(char a) {
	for (int i = 0; i < 20; i++) {
		cout << a;
	}
	cout << endl;
}