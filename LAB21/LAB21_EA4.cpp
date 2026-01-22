#include <iostream>
using namespace std;

int main() {
    long long a = 2;        // primeiro par
    long long b = 8;        // segundo par
    long long soma = a + b;

    long long c = 4 * b + a; // fórmula dos Fibonacci pares
    while (c < 4000000) {
        soma += c;
        a = b;
        b = c;
        c = 4 * b + a;
    }

    cout << "Soma dos Fibonacci pares menores que 4 milhoes = " << soma << endl;

    return 0;
}
