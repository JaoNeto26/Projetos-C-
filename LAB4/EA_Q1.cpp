#include <iostream>
#include <cmath>

using namespace std;
// pow = Calcular Elevar a potencia
// sqrt = calacula raiz quadrada

int main() {
	system("chcp 1252 > null");
	double Px, Py, Qx, Qy; // Coordenadas dos pontos
	double distancia;    // Resultado da distância


	cout << "Digite as coordenadas do ponto P (x y): ";
	cin >> Px >> Py;

	cout << "Digite as coordenadas do ponto Q (x y): ";
	cin >> Qx >> Qy;

	distancia = sqrt(pow(Qx - Px, 2) + pow(Qy - Py, 2));

	cout << "A distancia entre P e Q e: " << distancia << endl;

	return 0;
}


