#include <iostream>
using namespace std;

/*Construa uma função que receba dois vetores de inteiros, e crie um vetor dinâmico
com o conteúdo dos dois vetores. A função deve retornar o endereço do vetor
resultante, que deve ser exibido na tela pelo programa principal.
*/

int* unirVetores(int*, int, int*, int);
int lerLinhaParaVetor(int[]);

int main() {
    int tempA[100], tempB[100];

    cout << "Vetor A: ";
    int tamA = lerLinhaParaVetor(tempA);

    cout << "Vetor B: ";
    int tamB = lerLinhaParaVetor(tempB);

    int* A = new int[tamA];
    int* B = new int[tamB];

    for (int i = 0; i < tamA; i++) { 
        A[i] = tempA[i]; 
    }
    for (int i = 0; i < tamB; i++) {
        B[i] = tempB[i];
    }

    int* uniao = unirVetores(A, tamA, B, tamB);

    cout << "Uniao: ";
    for (int i = 0; i < tamA + tamB; i++) {
        cout << uniao[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] uniao;
}

int* unirVetores(int* A, int tamA, int* B, int tamB) {
    int total = tamA + tamB;
    int* uniao = new int[total];

    for (int i = 0; i < tamA; i++)
        uniao[i] = A[i];

    for (int i = 0; i < tamB; i++)
        uniao[tamA + i] = B[i];

    return uniao;
}

int lerLinhaParaVetor(int vet[]) {
    char linha[300];
    cin.getline(linha, 300);

    int num = 0;
    bool lendoNumero = false;
    int tam = 0;

    for (int i = 0; linha[i] != '\0'; i++) {
        if (linha[i] >= '0' && linha[i] <= '9') {
            num = num * 10 + (linha[i] - '0');
            lendoNumero = true;
        }
        else {
            if (lendoNumero) {
                vet[tam++] = num;
                num = 0;
                lendoNumero = false;
            }
        }
    }

    if (lendoNumero)
        vet[tam++] = num;

    return tam;
}

