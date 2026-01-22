#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");
    int idade;
    int maiores = 0;
    int maisNovo = 0;
    int maisVelho = 0;
    bool primeira = true;

    cout << "Digite as idades do grupo (0 para encerrar):\n";

    do {
        cin >> idade;

        if (idade != 0) {  // só processa se não for zero
            if (idade > 18)
                maiores++;

            if (primeira) {
                maisNovo = idade;
                maisVelho = idade;
                primeira = false;
            }
            else {
                if (idade < maisNovo)
                    maisNovo = idade;
                if (idade > maisVelho)
                    maisVelho = idade;
            }
        }

    } while (idade != 0);  // o laço termina naturalmente quando idade = 0

    cout << "Nesse grupo " << maiores << " pessoas sao maiores de idade.\n";
    cout << "A pessoa mais nova tem " << maisNovo << " anos e a mais velha tem "
        << maisVelho << " anos.\n";
}