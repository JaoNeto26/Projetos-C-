#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");
	double litros = 3.4;
	double * ptr = &litros;

	cout << "O valor de litros é " << *ptr << endl;

	return 0;
}