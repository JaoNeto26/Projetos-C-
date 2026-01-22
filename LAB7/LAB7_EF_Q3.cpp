#include <iostream>
using namespace std;

// Função que retorna o caractere 'x' posições à frente de 'ch'
char charada(char ch, int x) {
    return ch + x;
}

int main() {
    // Chamadas que formam "Papel"
    cout << charada('<', 20);   // '@' (64) + 20 = 'P' (80)
    cout << charada('0', 90);   // '0' (48) + 90 = 'a' (97)
    cout << charada('(', 72);   // '%' (37) + 72 = 'p' (109)
    cout << charada('0', 48);   // '0' (48) + 48 = 'e' (101)
    cout << charada('&', 107);  // '&' (38) + 107 = 'l' (108)

    cout << endl;
    return 0;
}
