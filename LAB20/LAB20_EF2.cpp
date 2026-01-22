#include <iostream>
using namespace std;

int somarDivisiveis(int a, int b, int c) {
    int soma = 0;
    for (int i = b; i <= c; i++) {
        if (i % a == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int a, b, c;
    cout << "Digite tres numeros inteiros a, b e c (a maior que 1):\n";
    if (!(cin >> a >> b >> c)) {
        cout << "Erro na leitura. Termine o programa e tente novamente.\n";
        return 1;
    }

    // valida a
    if (a == 0) {
        cout << "Valor de 'a' nao pode ser zero (divisao por zero).\n";
        return 1;
    }
    if (a < 0) a = -a; // tornar 'a' positivo (opcional)

    // garante que b <= c, se não, troca
    if (b > c) {
        int tmp = b;
        b = c;
        c = tmp;
    }

    // Mostrar termos divisiveis (opcional, para depuracao)
    cout << "Termos divisiveis por " << a << " entre " << b << " e " << c << ": ";
    bool primeiro = true;
    int soma = 0;
    for (int i = b; i <= c; ++i) {
        if (i % a == 0) {
            if (!primeiro) cout << ", ";
            cout << i;
            primeiro = false;
            soma += i;
        }
    }
    cout << "\nA soma e igual a " << soma << endl;

    // (ou usar a funcao)
    // cout << "A soma e igual a " << somarDivisiveis(a, b, c) << endl;

    return 0;
}
