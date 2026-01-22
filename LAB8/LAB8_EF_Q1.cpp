#include <iostream>
#include <cmath>

using namespace std;

double IMC(double, double);

int main() {
	system("chcp 1252>nul");
	double altura, Kilo;
	cout << "Digite sua altura em metros: ";
	cin >> altura;
	cout << "Digite sua massa corporal em quilos: ";
	cin >> Kilo;

	cout << "Seu índice de massa corporal (IMC): " << IMC(altura,Kilo) << endl;
	return 0;
}

double IMC(double alt, double kilo) {
	return kilo / pow(alt, 2);
}