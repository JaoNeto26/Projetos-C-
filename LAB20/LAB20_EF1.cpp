#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int sorteado = rand() % 11; // garante o intervalo 0..10
    int palpite;

    cout << "Tente adivinhar o numero (0 a 10):\n";

    do {
        cin >> palpite;

        if (palpite < sorteado)
            cout << "Muito baixo!\n";
        else if (palpite > sorteado)
            cout << "Muito alto!\n";
        else
            cout << "Acertou!\n";

    } while (palpite != sorteado);

    return 0;
}
