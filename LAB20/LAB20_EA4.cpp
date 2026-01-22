#include <iostream>
using namespace std;
int main() {
	system("chcp 1252>nul");
	int N1, N2;
	int Ntotal = 0;
	cout << "Digite um número inteiro: ";
	cin >> N1;
	cout << "Digite outro número inteiro: ";
	cin >> N2;
	if (N1 > N2) {
		for (int i = N2 + 1; i < N1; i++) {
			Ntotal += i;
		}
		cout << "A soma de todos os valores entre " << N2 << " e " << N1 << ": " << Ntotal << endl;
	}
	else if (N1 < N2) {
		for (int i = N1 + 1; i < N2; i++) {
			Ntotal += i;
		}
		cout << "A soma de todos os valores entre " << N1 << " e " << N2 << ": " << Ntotal << endl;
	}
	else
		cout << "Os numeros são iguais, logo, a soma entre eles é 0" << endl;

	return 0;
}