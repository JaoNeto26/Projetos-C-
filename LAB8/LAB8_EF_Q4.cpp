#include <iostream>
#include <cmath>
#define massa_agua 	(3.0*pow(10,-23))

using namespace std;

int main() {

	system("chcp 1252>nul");
	double galao = 3.8;
	double entrada;
	cout << "Digite a quantidade de galões de água: ";
	cin >> entrada;

	cout << "Em " << entrada << "galões existem " << (galao * entrada) / massa_agua << " moléculas de água.";



	return 0;
}