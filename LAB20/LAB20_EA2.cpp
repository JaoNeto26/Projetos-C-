#include <iostream>
using namespace std;

int main() {
    system("chcp 1252>nul");

    const int N = 10;
    int vel[N];

    cout << "Digite as velocidades de 10 carros (Km/h), separadas por espaço ou Enter:\n";
    for (int i = 0; i < N; ++i)
        cin >> vel[i];

    cout << "\nAs últimas 10 velocidades registradas:\n";
    for (int i = 0; i < N; ++i) {
        cout << vel[i];
        if (i < N - 1) cout << " ";
    }
    cout << "\n\n";

    const int LIMITE = 80;
    const int VALOR_POR_KM = 8;
    int countMultados = 0;
    int totalMultas = 0;

    for (int i = 0; i < N; ++i) {
        if (vel[i] > LIMITE) {
            int excesso = vel[i] - LIMITE;
            int multa = excesso * VALOR_POR_KM;
            cout << vel[i] << " Km/h excede o limite = multa de R$" << multa << "\n";
            ++countMultados;
            totalMultas += multa;
        }
    }

    cout << "\n" << countMultados << " carros foram multados em um valor total de R$" << totalMultas << ".\n";

    return 0;
}