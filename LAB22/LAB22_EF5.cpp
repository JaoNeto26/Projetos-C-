#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");

    char opcao;

    do {
        cout << "\nMENU DO SISTEMA\n";
        cout << "a-) Inserir\n";
        cout << "b-) Remover\n";
        cout << "c-) Buscar\n";
        cout << "d-) Sair\n";
        cout << "\nDigite sua opcao: ";

        cin >> opcao;

        cout << "\n";

        switch (opcao) {
            case 'a':
            case 'A':
                cout << "Inserindo Elementos..." << endl;
                break;
            case 'b':
            case 'B':
                cout << "Removendo Elementos..." << endl;
                break;
            case 'c':
            case 'C':
                cout << "Buscando Elementos..." << endl;
                break;
            case 'd':
            case 'D':
                cout << "Tchau!" << endl;
                break;
            default:
                cout << "Opcao invalida.\n";
            }

    } while (opcao != 'd' && opcao != 'D');

	return 0;
}