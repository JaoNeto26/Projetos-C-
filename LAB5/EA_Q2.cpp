#include <iostream>

using namespace std;
double aumento(int);

int main() {
	system("chcp 1252>null");
	int salario;

	cout << "Salário atual: ";
	cin >> salario;

	cout << "Salário ajustado para " << aumento(salario) << endl;

	return 0;
}

double aumento(int x) {
	return x + (x * 0.15);
}