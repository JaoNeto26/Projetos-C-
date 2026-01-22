#include <iostream>
#include <string>
using namespace std;

struct Funcionario {
    string nome;
    string cargo;
    string apelido;
    int pref;   // 0 = nome, 1 = cargo, 2 = apelido
};

int main() {
    system("chcp 1252>nul");
    Funcionario func[5] = {
        {"Marcelo", "Programador", "Marcelinho", 0},
        {"José", "Analista", "Zé", 2},
        {"Carlos", "Gerente", "Carlão", 1},
        {"Paulo", "Estagiário", "Paulinho", 0},
        {"Thiago", "Designer", "Tico", 2}
    };

    char opcao;

    do {
        cout << "\nListagem de Funcionarios\n";
        cout << "a. Mostrar por nome\n";
        cout << "b. Mostrar por cargo\n";
        cout << "c. Mostrar por apelido\n";
        cout << "d. Mostrar por preferencia\n";
        cout << "e. Sair\n";
        cout << "\nDigite sua opcao: ";

        cin >> opcao;

        cout << "\n";

        switch (opcao) {
        case 'a':
        case 'A':
            for (int i = 0; i < 5; i++)
                cout << func[i].nome << endl;
            break;

        case 'b':
        case 'B':
            for (int i = 0; i < 5; i++)
                cout << func[i].cargo << endl;
            break;

        case 'c':
        case 'C':
            for (int i = 0; i < 5; i++)
                cout << func[i].apelido << endl;
            break;

        case 'd':
        case 'D':
            for (int i = 0; i < 5; i++) {
                if (func[i].pref == 0)
                    cout << func[i].nome << endl;
                else if (func[i].pref == 1)
                    cout << func[i].cargo << endl;
                else
                    cout << func[i].apelido << endl;
            }
            break;

        case 'e':
        case 'E':
            cout << "Encerrando...\n";
            break;

        default:
            cout << "Opcao invalida.\n";
        }

    } while (opcao != 'e' && opcao != 'E');

    return 0;
}
