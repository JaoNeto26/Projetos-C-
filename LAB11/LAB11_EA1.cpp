#include <iostream>
#include <string> // Necessário para usar string

using namespace std;

int main() {
	system("chcp 1252>nul");


    string senha_correta = "ProgComp"; // Senha definida no programa
    string senha_digitada;

    cout << "Digite a senha: ";
    cin >> senha_digitada;

    if (senha_digitada == senha_correta) {
        cout << "Senha correta." << endl;
    }
    else {
        cout << "Senha incorreta." << endl;
    }

	return 0;
}