#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");
	char alarme = '\a\a\a';
	int senha;

	cout << "digite sua senha: _______\b\b\b\b\b\b";
	cin >> senha;
	cout << alarme << "Sua senha foi roubada!\a\n";

	return 0;
}