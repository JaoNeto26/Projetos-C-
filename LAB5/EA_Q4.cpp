#include <iostream>
using namespace std;

double ModuloVetor(double, double);

int main() {
	system("chcp 1252>null");

    double x, y;

    cout << "Digite as coordenadas do vetor" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    double resultado = ModuloVetor(x, y);

    cout << "O tamanho do vetor é " << resultado << endl;

	return 0;
}

double ModuloVetor(double x, double y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}