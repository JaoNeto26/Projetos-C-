#include <iostream>

using namespace std;
void convert(int);


int main() {
	system("chcp 1252>null");

	int celsius;

	cout << "Digite uma temperatura em graus Celsius: ";
	cin >> celsius;

	convert(celsius);

	return 0;
}

void convert(int Number) {
	int Fahrenheit;
	Fahrenheit = 1.8 * Number + 32.0;

	cout << Number << " graus Celsius equivalem a " << Fahrenheit << " graus Fahrenheit.";
}