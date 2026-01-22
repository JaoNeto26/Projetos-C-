#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");


    int num = 0;
    int soma = 0;

    cout << "Digite números inteiros (0 para finalizar):\n";
    while (true) {
        if (!(cin >> num)) // entrada inválida -> termina
            return 0;
        if (num == 0) // condição de parada
            break;
        soma += num;
        cout << "Soma parcial: " << soma << '\n';
    }
    cout << "Soma Total: " << soma << '\n';
	return 0;
}