#include <iostream>

using namespace std;

double resul(double, double);

int main() {
	system("chcp 1252>null");
	double x, y;

	cout << "Entre com um número: ";
	cin >> x;
	cout << "Entre com outro número: ";
	cin >> y;

	cout << "A média harmônica dos números é " << resul(x, y) << endl;

	return 0;
}

double resul(double x, double y) {
	double resultado = (2 * x * y) / (x + y);

	return resultado;
}