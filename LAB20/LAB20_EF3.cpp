#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double valores[10];
    double soma = 0;
    int qtd = 0;

    cout << "Digite ate 10 valores de donativos (0 para encerrar):\n";

    for (int i = 0; i < 10; i++) {
        cin >> valores[i];

        if (valores[i] == 0) break; // encerra antes caso 0 seja inserido

        soma += valores[i];
        qtd++;
    }

    if (qtd > 0) {
        double media = soma / qtd;

        cout << "\nA media dos valores doados foi de R$ " << fixed << setprecision(2) << media << endl;

        int maiores = 0;
        for (int i = 0; i < qtd; i++)
            if (valores[i] > media) maiores++;

        cout << maiores << " valores foram maiores que a media.\n";
    }

    return 0;
}
