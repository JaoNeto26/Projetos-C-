#include <iostream>
#include <cctype>

using namespace std;

int main() {
    system("chcp 1252>nul");

    cout << "Digite seu texto (@ para sair):\n";

    char c;
    while (cin.get(c) && c != '@') {
        // categoria: 1 = letra, 2 = dígito, 0 = outro
        int categoria = isalpha(static_cast<unsigned char>(c)) ? 1
            : isdigit(static_cast<unsigned char>(c)) ? 2
            : 0;
        switch (categoria) {
        case 1: // letra: inverte caso
            if (isupper(static_cast<unsigned char>(c)))
                cout << static_cast<char>(tolower(static_cast<unsigned char>(c)));
            else
                cout << static_cast<char>(toupper(static_cast<unsigned char>(c)));
            break;
        case 2: // dígito: não exibe (skip)
            break;
        default: // outros caracteres: exibe igual
            cout << c;
            break;
        }
    }

    cout << '\n';
    return 0;
}