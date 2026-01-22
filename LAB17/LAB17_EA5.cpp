#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	system("chcp 1252>nul");
	unsigned int somaDquadrado = 0;
	unsigned int quadradoDsoma = 0;
	for (double i = 1; i <= 100; i++) {
		somaDquadrado += pow(i, 2);
	}
	for (double i = 1; i <= 100; i++) {
		quadradoDsoma += i;
	}
	cout << pow(quadradoDsoma, 2) << endl;
	cout << somaDquadrado << endl;
	cout << pow(quadradoDsoma, 2)  - somaDquadrado  ;
	return 0;
}