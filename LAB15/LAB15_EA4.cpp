#include <iostream>
#include <cstring>  
using namespace std;

struct Local {
    char nome[30];
    char pais[30];
    char continente[30];
};

int main() {
    system("chcp 1252>nul"); 

    int qtd;
    cout << "Quantos locais deseja visitar? ";
    cin >> qtd;
    cin.ignore(); // limpa o buffer do teclado

    // Aloca dinamicamente o vetor de locais
    Local* locais = new Local[qtd];

    // Preenche os locais
    for (int i = 0; i < qtd; i++) {
        cout << "\nLocal " << i + 1 << ":\n";
        cout << "Nome: ";
        cin.getline(locais[i].nome, 30);
        cout << "País: ";
        cin.getline(locais[i].pais, 30);
        cout << "Continente: ";
        cin.getline(locais[i].continente, 30);
    }

    // Exibe os locais escolhidos
    cout << "\nVocê escolheu visitar:\n";
    for (int i = 0; i < qtd; i++) {
        cout << locais[i].nome << " - " << locais[i].pais
            << " (" << locais[i].continente << ")" << endl;
    }

    // Libera a memória alocada
    delete[] locais;

    return 0;
}
