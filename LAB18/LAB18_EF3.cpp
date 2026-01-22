#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	system("chcp 1252>nul");

    float daiane = 100.0;
    float celia = 100.0;
    int anos = 0;

    while (celia <= daiane) {
        daiane += 10;         // Daiane ganha 10 fixos por ano
        celia += celia * 0.05; // Célia ganha 5% sobre o saldo atual
        anos++;
    }

    cout << "Se passaram " << anos << " anos para os saldos atingirem os valores" << endl;
    cout << "Daiane: " << daiane << endl;
    cout << "Celia : " << fixed << setprecision(2) << celia << endl;

	return 0;
}