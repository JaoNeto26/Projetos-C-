#include <iostream>
#include <cmath>
#define Ano (3.156*pow(10,7))
using namespace std;

int main() {
	system("chcp 1252>nul");

	double anos;

	cout << "Digite sua idade em anos: ";
	cin >> anos;

	// cout.setf(ios::fixed, ios::floatfield);
	// cout.precision(1);

	cout << anos << " anos correspondem a " << anos * Ano;

	return 0;
}