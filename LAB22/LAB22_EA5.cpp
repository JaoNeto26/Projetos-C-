#include <iostream>
using namespace std;

int main() {
    char op;
    double a, b;
    char continuar = 's';

    cout << "=== Mini Calculadora ===\n";

    while (continuar == 's' || continuar == 'S') {

        cout << "\nEscolha a operacao (+, -, *, /): ";
        cin >> op;

        cout << "Digite o primeiro numero: ";
        cin >> a;

        cout << "Digite o segundo numero: ";
        cin >> b;

        cout << "Resultado: ";

        switch (op) {
        case '+':
            cout << (a + b);
            break;

        case '-':
            cout << (a - b);
            break;

        case '*':
            cout << (a * b);
            break;

        case '/':
            if (b == 0)
                cout << "Erro: divisao por zero!";
            else
                cout << (a / b);
            break;

        default:
            cout << "Operador invalido!";
        }

        cout << "\nDeseja realizar outra operacao? (s/n): ";
        cin >> continuar;
    }

    cout << "\nCalculadora encerrada.\n";
    return 0;
}
