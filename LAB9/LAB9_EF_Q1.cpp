#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");

	float number1, number2;
	int result;

	cout << "Digite o valor x1: ";
	cin >> number1;
	cout << "Digite o valor x2: ";
	cin >> number2;

	result = (int)number1 + (int)number2;
	cout << "A adição inteira dos valores é " << result;

	return 0;
}