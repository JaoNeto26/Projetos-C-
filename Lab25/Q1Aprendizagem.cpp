#include <iostream>
using namespace std;

/* Construa uma função que receba dois ponteiros indicando uma faixa de elementos
dentro de um vetor e um valor inteiro e retorne quantas vezes esse valor acontece
dentro da faixa. Para testar a função construa um programa que inicializa um vetor
para os elementos { 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0 } e mostra a quantidade de zeros e
uns que tem dentro do vetor.
*/

int contar(const int*, const int*, int);

int main() {
    int vet[] = { 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0 };

    int tam = sizeof(vet) / sizeof(vet[0]);

    int zeros = contar(vet, vet + tam, 0);
    int uns = contar(vet, vet + tam, 1);

    cout << "Existem " << zeros << " zeros e " << uns << " uns na faixa indicada." << endl;

}

int contar(const int* ini, const int* fim, int valor) {
    int qtd = 0;

    while (ini < fim) {
        if (*ini == valor)
            qtd++;
        ini++;
    }

    return qtd;
}