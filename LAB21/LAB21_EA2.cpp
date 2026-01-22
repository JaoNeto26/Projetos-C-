#include <iostream>
#include <cmath>
using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;

    int limite = sqrt(n);
    for (int d = 3; d <= limite; d += 2) {
        if (n % d == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Digite um numero inteiro maior que zero: ";
    cin >> n;

    if (n <= 0) {
        cout << "O numero deve ser maior que zero.\n";
        return 0;
    }

    if (ehPrimo(n))
        cout << n << " e primo.\n";
    else
        cout << n << " nao e primo.\n";

    return 0;
}
