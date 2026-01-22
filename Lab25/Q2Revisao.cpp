#include <iostream>
#include <fstream>
using namespace std;

/* Escreva uma função que receba um vetor de double’s e retorne o valor do maior
elemento no vetor. A função não deve alterar o conteúdo do vetor. Use a função
para encontrar o maior valor presente em um arquivo texto. O arquivo contém
uma quantidade qualquer de valores ponto-flutuantes separados por espaços,
tabulações ou saltos de linha. */

double maiorValor(const double[], int);

int main() {
    ifstream fin;
    char nomeArquivo[50];
    cout << "Nome do arquivo: "; //aqui você PRECISA digitar valores.txt pra funcionar
    cin.getline(nomeArquivo, 50);
    fin.open(nomeArquivo);

    if (!fin.is_open()) {
        cout << "Erro ao abrir o arquivo.\n";
        exit(EXIT_FAILURE);
    }

    double x;
    int qtd = 0;

    while (fin >> x) {
        qtd++;
    }
    fin.close();

    double* vet = new double[qtd];

    
    fin.open("valores.txt");
    for (int i = 0; i < qtd; i++) {
        fin >> vet[i];
    }

    fin.close();

    double maior = maiorValor(vet, qtd);

    cout << "Maior valor encontrado: " << maior << endl;

    delete[] vet;
}

double maiorValor(const double v[], int n) {
    double maior = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}