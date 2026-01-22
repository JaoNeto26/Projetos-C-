#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");
	cout << "Caixa Eletrônico" << endl;
	cout << "-----------------" << endl;
	cout << "Saque: ";
	int Saque = 0, N50 = 0, N20 = 0, N10 = 0, N5 = 0, total_de_notas = 0;
	cin >> Saque;
	while (Saque != total_de_notas) {
		if (total_de_notas + 50 <= Saque) {
			N50++;
			total_de_notas += 50;
		}
		else if (total_de_notas + 20 <= Saque) {
			N20++;
			total_de_notas += 20;
		}
		else if (total_de_notas + 10 <= Saque) {
			N10++;
			total_de_notas += 10;
		}
		else if (total_de_notas + 5 <= Saque) {
			N5++;
			total_de_notas += 5;
		}
	}
	cout << "entregando: "<< endl;
	cout << N50 << " Cédula(s) de R$50" << endl;
	cout << N20 << " Cédula(s) de R$20"<<endl;
	cout << N10 << " Cédula(s) de R$10"<<endl;
	cout << N5 << " Cédula(s) de R$5"<<endl;

	return 0;
}