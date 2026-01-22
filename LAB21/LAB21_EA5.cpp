#include <iostream>
#include <cmath>
using namespace std;

bool ehPrimo(long long);    

int main() {
    int contador = 0;
    long long numero = 2;

    while (contador < 10001) {
        if (ehPrimo(numero)) {
            contador++;
        }
        numero++;
    }

    // numero foi incrementado uma vez a mais
    cout << "O 10001o numero primo eh = " << numero - 1 << endl;

    return 0;
}


bool ehPrimo(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    long long limite = sqrt(n);
    for (long long d = 3; d <= limite; d += 2) {
        if (n % d == 0) return false;
    }
    return true;
}