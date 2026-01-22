#include <iostream>
using namespace std;

int main() {
    long long soma = 0;

    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    cout << "Soma dos multiplos de 3 ou 5 menores que 1000 = " << soma << endl;

    return 0;
}
