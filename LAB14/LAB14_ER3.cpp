#include <iostream>
#include <string>

using namespace std;

struct peixe {
	string tipo;
	float peso;
	int comprimento;

};

int main() {
	system("chcp 1252>nul");
	peixe Peixe = {"atum", 5.5, 50};
	peixe* ptr = &Peixe;

	cout << "Tipo: " << ptr->tipo << endl;
	cout << "Peso: " << ptr->peso << endl;
	cout << "Comprimento: " << ptr->comprimento << "cm" << endl;



	return 0;
}