#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");
	int distancia;
	float valor;

	cout << "qual a distancia da sua viagem? ";
	cin >> distancia;

	if (distancia <= 200) {
		valor = distancia * 0.5;
	}
	else if (distancia <= 400) {
		valor = distancia * 0.4;
	}
	else
		valor = distancia * 0.3;
	
	cout << "Valor ficou R$ " << valor << ". " << endl;

	return 0;
}