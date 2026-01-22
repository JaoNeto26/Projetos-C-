#include <iostream>
using namespace std;

/* Escreva um programa que leia 10 valores do usuário e os insira em um vetor de
forma que os elementos fiquem ordenados. Para isso, antes de cada inserção, use
uma função Locate para localizar e retornar a posição correta do elemento dentro
do vetor. Em seguida use outra função, OpenSpace, que receba uma posição e abra
espaço no vetor nessa posição, “empurrando” os demais elementos para a próxima
posição. Caso a operação de abrir espaço não seja possível, porque o vetor está
cheio, a função deve retornar falso. Use estas funções no programa principal para
inserir os elementos e depois exibir os elementos ordenados. */

const int MAX = 10;

int Locate(const int[], int, int);
bool OpenSpace(int[], int&, int);

int main() {
    int vet[MAX];
    int tamanho = 0;

    cout << "Digite 10 valores:\n";

    for (int i = 0; i < 10; i++) {
        int valor;
        cin >> valor;

        int pos = Locate(vet, tamanho, valor);

        if (!OpenSpace(vet, tamanho, pos)) {
            cout << "Vetor cheio! Nao foi possivel inserir.\n";
            exit(EXIT_FAILURE);
        }

        vet[pos] = valor;
    }

    cout << "Os valores ordenados:\n";
    for (int i = 0; i < tamanho; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
}

int Locate(const int vet[], int tamanho, int valor) {
    int i = 0;
    while (i < tamanho && vet[i] < valor) {
        i++;
    }
    return i;
}

bool OpenSpace(int vet[], int& tamanho, int pos) {
    if (tamanho >= MAX) {
        return false;
    }

    for (int i = tamanho; i > pos; i--) {
        vet[i] = vet[i - 1];
    }

    tamanho++;
    return true;
}