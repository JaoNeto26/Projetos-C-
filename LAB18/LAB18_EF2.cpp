#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	system("chcp 1252>nul");
    int num;
    int cont = 0;
    int soma = 0;
    do {
        if (!(cin >> num)) // entrada inválida -> encerra
            return 0;
        if (num != 0) {
            ++cont;
            soma += num;
        }
    } while (num != 0);

    /*
     while (cin >> num && num != 0) {
        ++cont;
        soma += num;
    }
    */

    cout << "Foram lidos " << cont << " números\n";
    cout << "A soma dos números é " << soma << '\n';

    double media = soma/cont;
    cout << "A média é " << fixed << setprecision(2) << media << '\n';


	return 0;
}