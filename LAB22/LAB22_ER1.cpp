#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");


    double x;
    cout << "Digite um número positivo ou negativo: ";
    if (!(cin >> x)) return 0;

    double absx = 0.0;
    // calcula sinal: 1 para positivo, -1 para negativo, 0 para zero
    int s = (x > 0) - (x < 0);

    switch (s) {
        case 1:
            absx = x;
            break;
        case -1:
            absx = -x;
            break;
        default: // s == 0
            absx = 0.0;
            break;
     }

    cout << "O valor absoluto de " << x << " é " << absx << "." << endl;


	return 0;
}