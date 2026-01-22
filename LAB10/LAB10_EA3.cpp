#include <iostream>

using namespace std;

double soma(double vet[]);

int main() {
	system("chcp 1252>nul");
	double vet[3];
	cout << "Digite a valor 1: ";
	cin >> vet[0];
	cout << "Digite a valor 2: ";
	cin >> vet[1];
	cout << "Digite a valor 3: ";
	cin >> vet[2];
	
	cout << "Resultado: " << soma(vet) << endl;

	return 0;
}

double soma(double vet[])
{
	return (vet[0] + vet[2]) - vet[1];
}