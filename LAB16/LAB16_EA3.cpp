#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");
	int A[] = { 46, 78, 40, 96, 74, 58, 32, 56, 91, 6 };
	int tamanho = 10;
	int* p1 = A;        // ponteiro para o primeiro número
	int* p2 = A + 1;    // ponteiro para o segundo número
	for (int i = 0; i < tamanho; i+=2) {
		cout << "[" << *p1 << "," << *p2 << "]";
		p1 += 2;
		p2 += 2;
	}
	cout << endl;
	return 0;
}