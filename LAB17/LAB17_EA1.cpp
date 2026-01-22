#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");
	int number[10];
	int vetA[5];
	int vetB[5];
	int vetS[5];

	cout << "Digite 10 valores: ";
	// um for para pegar os 10 numeros
    for (int i = 0; i < 10; ++i) {
        cin >> number[i];
    }

	for (int i = 0; i < 5; i++) vetA[i] = number[i];
	for (int i = 5, j = 0; i <= 9; i++, j++) vetB[j] = number[i];
	for (int i = 0; i < 5; i++) vetS[i] = vetA[i] + vetB[i];

	cout << "Vetor de entrada: ";
	for (int i = 0; i <= 9; i++) cout << number[i] << " ";
	cout << endl;

	cout << "vetor A: ";
	for (int i = 0; i < 5; i++) cout << vetA[i] << " ";
	cout << endl;

	cout << "vetor B: ";
	for ( int i = 0;i < 5; i++) cout << vetB[i] << " ";
	cout << endl;

	cout << " vetor Soma: ";
	for (int i = 0; i < 5; i++) cout << vetS[i] << " ";
	cout << endl;

	return 0;
}