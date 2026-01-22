#include <iostream>

using namespace std;
struct peixe {
	string tipo;
	float peso;
	int comprimento;

};
int main() {
	system("chcp 1252>nul");
	peixe Peixe = { "atum", 5.5, 50 };
	peixe* ptr = &Peixe;

	cout << "Sem ponteiro: " << Peixe.tipo << " com " << Peixe.peso << "g " << Peixe.comprimento << "cm" << endl;
	cout << "Com ponteiro: " << ptr->tipo << " com " << ptr->peso << "g " << ptr->comprimento << "cm" << endl;
	


	return 0;
}