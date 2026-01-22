#include <iostream>
#include <cmath>

using namespace std;

// esqueleto da função
double absolut(int);

int main() {
	system("chcp 1252>null");

	int Number;

	cout << "digite um numero: ";
	cin >> Number;
	cout << "O valor absoluto é " << absolut(Number) << endl;

	return 0;
}


double absolut( int abs ) {
	
	int absoluto = abs;
	/*
	O objetivo aqui e receber um valor qualquer, sendo ele positivo ou não, é elevar ele a potencia e tirar a raiz quadrada dele.
	isso o tornando um numero positivo!
	*/

	absoluto = pow(absoluto, 2);
	absoluto = sqrt(absoluto);

	// retornando ele em forma de double
	return absoluto;

}