#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");
    system("chcp 1252>nul");
    cout << "Digite um texto (# para finalizar):\n";

    char c;
    int substituicoes = 0;

    // laço sem 'break': a condição do while lê um caractere e garante que não seja '#'
    while (cin.get(c) && c != '#') {
        if (c == '.') {
            cout << '!';
            ++substituicoes;
        }
        else if (c == '!') {
            cout << "!!";
            ++substituicoes;
        }
        else {
            cout << c;
        }
    }

    cout << '\n' << "Substituições: " << substituicoes << '\n';

	return 0;
}