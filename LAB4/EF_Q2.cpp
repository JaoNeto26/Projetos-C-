#include <iostream>	
using namespace std;

void linha();
void H_pequeno();
void H_medio();
void H_grande();


int main() {
	// comando para ajeitar a acentuação
	system("chcp 1252>null");



	H_pequeno();
	H_medio();
	H_grande();
	cout << "Programação de Computadores" << endl;
	H_grande();
	H_medio();
	H_pequeno();


	
	return 0;
}



void linha() {
	cout << "----------";

}
void H_pequeno() {
	linha();
	cout << endl;
}
void H_medio() {
	linha();
	linha();
	cout << endl;
}
void H_grande() {
	linha();
	linha();
	linha();
	cout << endl;

}