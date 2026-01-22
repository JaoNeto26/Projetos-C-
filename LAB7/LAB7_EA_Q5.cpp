#include <iostream>
using namespace std;

// testa se o bit 'pos' (0 = LSB) está ligado em 'valor'
bool testarBit(unsigned char valor, int pos) {
    return ((valor >> pos) & 1) != 0;
}

// exibe os 8 bits de um unsigned char usando testarBit
void exibirBits(unsigned char valor) {
    cout << "O numero " << static_cast<int>(valor) << " em binario e ";
    for (int i = 7; i >= 0; --i) {
        cout << (testarBit(valor, i) ? '1' : '0');
    }
    cout << "." << endl;
}

int main() {
    unsigned int entrada; // leia numa variável inteira
    cout << "Digite um valor entre 0 e 255: ";
    if (!(cin >> entrada)) {
        cerr << "Entrada invalida.\n";
        return 1;
    }

    if (entrada > 255) {
        cerr << "Valor fora do intervalo 0-255.\n";
        return 1;
    }

    unsigned char valor = static_cast<unsigned char>(entrada); // converte seguro
    exibirBits(valor);

    return 0;
}
