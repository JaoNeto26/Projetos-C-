#include <iostream>
#include <cmath>
using namespace std;

double imc(double, double);

int main() {
	system("chcp 1252>null");
	double altura, massa;

	cout << "Índice de Massa Corporal (IMC)" << endl;
	cout << "------------------------" << endl;

	cout << "altura: ";
	cin >> altura;
	cout << "massa: ";
	cin >> massa;

	cout << "IMC: " << imc(altura, massa) << endl;

	return 0;
}

double imc(double alt, double mss) {
	return mss / pow(alt, 2);
}