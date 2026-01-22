#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");

    int linhas = 5; // número total de linhas

    for (int i = 1; i <= linhas; i++) {
        // imprime os espaços antes dos '$'
        for (int esp = 1; esp <= linhas - i; esp++) {
            cout << " ";
        }

        // imprime os '$' (cada linha tem 2*i - 1 símbolos)
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "$";
        }

        cout << endl; // pula pra próxima linha
    }

    return 0;
}