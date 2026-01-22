#include <iostream>

using namespace std;

struct Doacao {
    char nome[100];
    int valor;
};

int main() {
    system("chcp 1252>nul");

    int n;
    cout << "Digite o número de contribuintes: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Quantidade inválida. Encerrando.\n";
        return 0;
    }

    // consome apenas o '\n' remanescente antes de usar getline em char[]
    cin.ignore();

    // aloca dinamicamente um vetor de registros Doacao
    Doacao* registros = new Doacao[n];

    for (int i = 0; i < n; ++i) {
        cout << "#" << (i + 1) << "\n";
        cout << "Nome : ";
        cin.getline(registros[i].nome, sizeof(registros[i].nome));
        cout << "Valor : ";
        cin >> registros[i].valor;
        cin.ignore(); // consome o '\n' após o número para a próxima getline
        cout << '\n';
    }

    cout << "Grandes Patronos\n";
    bool anyGrandes = false;
    for (int i = 0; i < n; ++i) {
        if (registros[i].valor >= 10000) {
            cout << registros[i].nome << " " << registros[i].valor << "\n";
            anyGrandes = true;
        }
    }
    if (!anyGrandes) cout << "nenhum\n";

    cout << "\nPatronos\n";
    bool anyPatronos = false;
    for (int i = 0; i < n; ++i) {
        if (registros[i].valor < 10000) {
            cout << registros[i].nome << " " << registros[i].valor << "\n";
            anyPatronos = true;
        }
    }
    if (!anyPatronos) cout << "nenhum\n";

    delete[] registros;
    return 0;
}