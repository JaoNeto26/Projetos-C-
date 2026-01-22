#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");
	float peso[3] = { 2,3,4 };
	float nota[3];
	float Media_nova, Media_antiga;

	cout << "Digite a nota 1: ";
	cin >> nota[0];
	cout << "Digite a nota 2: ";
	cin >> nota[1];
	cout << "Digite a nota 3: ";
	cin >> nota[2];

	Media_antiga = (nota[0] + nota[1] + nota[2]) / 3;
	Media_nova = ((nota[0] * peso[0]) + (nota[1] * peso[1]) + (nota[2] * peso[2])) / 9;

	cout << "sua nota pelo sistema antigo: " << Media_antiga << endl;
	cout << "sua nota pela sistema novo: " << Media_nova << endl;
	return 0;
}