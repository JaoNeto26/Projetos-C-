#include <iostream>
#include <cmath>

using namespace std;

double quadrado(double);
double cubo(double);

int main() {
	system("chcp 1252>null");
	double x;

	cout << "Digite um valor: ";
	cin >> x;

	cout << "Quadrado = " << quadrado(x) << endl;
	cout << "Cubo = "<< cubo(x) << endl;
	cout << "Cubo do quadrado = " << cubo(quadrado(x)) << endl;

	return 0;
}

double quadrado(double x) {
	return pow(x, 2);
}
double cubo(double x) {
	return pow(x, 3);
}