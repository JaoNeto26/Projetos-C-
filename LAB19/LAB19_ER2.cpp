#include <iostream>

using namespace std;

void exibirTransposta(int transposta[2][3]);

int main() {
    int matriz[3][2];
    int transposta[2][3];

    cout << "Digite os elementos da matriz 3x2:" << endl;

    // Lendo a matriz 3x2 do usuário
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Exibindo a matriz original
    cout << "\nMatriz 3x2:\n" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriz[i][j];
            if (j < 1) cout << " | ";
        }
        cout << endl;
    }

    // Calculando a transposta
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Chamando a função para exibir a transposta
    exibirTransposta(transposta);

    return 0;
}



// Função para exibir a matriz transposta
void exibirTransposta(int transposta[2][3]) {
    cout << "\nTransposta 2x3:\n" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transposta[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
    }
}


