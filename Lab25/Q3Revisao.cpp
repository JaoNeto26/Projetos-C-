#include <iostream>
#include <fstream>
using namespace std;
const int TAM = 10;

/* Escreva uma função que receba um vetor e um valor inteiro. O vetor deve ser
recebido através de ponteiros que indicam início e fim de faixa. A função deve
colocar o valor inteiro em todas as posições da faixa. O valor inteiro deve ser lido
de um arquivo binário que contém apenas um número codificado como um inteiro
de 32 bits. */

void preencher(int[], int);

int main() {
    ifstream bin("valor.bin", ios::binary);
    if (!bin.is_open()) {
        cout << "Erro ao abrir valor.bin\n";
        exit(EXIT_FAILURE);
    }

    int valor;
    bin.read((char*)&valor, sizeof(int));
    bin.close();

    int vet[TAM];
    preencher(vet, valor);

    cout << "Nome do arquivo: valor.bin" << endl;
    cout << "Vetor preenchido com valor " << valor << "." << endl;
}

void preencher(int v[], int valor) {
    int* ini = v;
    int* fim = v + TAM;

    while (ini < fim) {
        *ini = valor;
        ini++;
    }
}