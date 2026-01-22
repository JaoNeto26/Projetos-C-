#include <iostream>
using namespace std;
int main() {
	system("chcp 1252>nul");


    char palavra[100];
    int vogais = 0;
    int consoantes = 0;
    int outras = 0;

    cout << "Digite palavras (s para sair):\n";
    while (cin >> palavra) {
        // verifica palavra de saída (uma única letra 's' ou 'S') usando C-string
        if (strlen(palavra) == 1 && (palavra[0] == 's' || palavra[0] == 'S'))
            return 0;
            

        char primeiro = palavra[0];
        if (!std::isalpha(static_cast<unsigned char>(primeiro))) {
            outras++;
        }
        else {
            // normaliza para minúscula e usa switch para identificar vogais
            char p = static_cast<char>(std::tolower(static_cast<unsigned char>(primeiro)));
            switch (p) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vogais++;
                break;
            default:
                consoantes++;
                break;
            }
        }
    }

    cout << vogais << " palavras começam por vogais\n";
    cout << consoantes << " palavras começam por consoantes\n";
    cout << outras << " outras palavras\n";



	return 0;
}