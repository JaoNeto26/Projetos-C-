#include <iostream>
#include <string>

using namespace std;

struct Carro {
    string fabricante;
    int ano;
};

int main() {
    system("chcp 1252>nul");

    int n;
    cout << "Quantos carros para catalogar? ";
    cin >> n;

    if (n <= 0) {
        cout << "Quantidade inválida. Encerrando.\n";
        return 0;
    }

    // aloca vetor dinâmico simples
    Carro* carros = new Carro[n];

    // modelo simples: usa apenas >> (não permite espaços na marca)
    for (int i = 0; i < n; ++i) {
        cout << "\nCarro #" << (i + 1) << '\n';
        cout << "Marca (sem espaços): ";
        cin >> carros[i].fabricante;
        cout << "Ano: ";
        cin >> carros[i].ano;
    }

    cout << "\nAqui está sua coleção:\n\n";
    for (int i = 0; i < n; ++i) {
        cout << carros[i].ano << " " << carros[i].fabricante << '\n';
    }

    delete[] carros;
    return 0;
}