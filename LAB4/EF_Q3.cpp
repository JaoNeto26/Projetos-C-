#include <iostream>
using namespace std;

void Umtres();
void dois();

int main() {
	system("chcp 1252 > null");

	cout << "começando..." << endl;
	Umtres();
	cout << "Pronto" << endl;

	return 0;
}

void Umtres() {
	cout << "Um ";
	dois();
	cout << "Três" << endl;
}

void dois() {
	cout << "Dois ";
}