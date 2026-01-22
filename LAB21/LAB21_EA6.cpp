#include <iostream>
using namespace std;

int main() {
    long long resultado = 1;

    // maiores potências dos primos <= 20
    resultado *= 16;  // 2^4
    resultado *= 9;   // 3^2
    resultado *= 5;   // 5^1
    resultado *= 7;   // 7^1
    resultado *= 11;  // 11^1
    resultado *= 13;  // 13^1
    resultado *= 17;  // 17^1
    resultado *= 19;  // 19^1

    cout << "MMC de 1 a 20 = " << resultado << endl;

    return 0;
}
