#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");

	int* ptr = new int { 100 };
	cout << "Conteúdo armazenado: " << *ptr << endl;

	cout << "Digite novo valor para esse bloco de memória: ";
	cin >> *ptr;

	cout << "Conteúdo armazenado: " << *ptr << endl;
	return 0;
}