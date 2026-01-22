#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");

	int number;
	cout << "Entre com o número de linhas: ";
	cin >> number;

	for (int i = 1; i <= number; i++) {
		for (int j = 0; j < number - i; ++j) cout << '.';
		for (int j = 0; j < i; ++j) cout << '*';
		cout << '\n';
	}

	return 0;
}