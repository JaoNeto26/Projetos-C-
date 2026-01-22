#include <iostream>
#include <cmath>
// para definir o valor de PI no arquivo 
#define PI 3.14159265

using namespace std;
// esqueleto da função
double anguloV(double, double);


int main() {
	system("chcp 1252>null");
	double x, y;

	cout << "Digite as coodernadas do Vetor" << endl;
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;

	cout << "O ângulo do vetor é " << anguloV(x, y) << " graus." << endl;


	return 0;
}

double anguloV(double x, double y) {
	return atan2(y, x) * 180 / PI;
 }
	