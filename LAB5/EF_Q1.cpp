#include <iostream>

using namespace std;

void horas(int, int);

int main() {
	system("chcp 1252 > null");

	int hh, mm;


	cout << "Entre com o número de horas: ";
	cin >> hh;
	cout << "Entre com o número de minutos: ";
	cin >> mm;

	horas(hh, mm);

	return 0;
}

void horas(int hh, int mm) {

	cout << "agora são: " << hh << ":" << mm << endl;
	
}