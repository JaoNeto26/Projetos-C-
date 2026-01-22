#include <iostream>
#include <fstream>
using namespace std;

/* Construa uma programa que leia uma lista de até 100 números de um arquivo
texto e armazene-os em um vetor. O programa deve passar o vetor para uma
função que deve encontrar e retornar o menor elemento, o maior elemento, e suas
respectivas posições dentro do vetor. Defina um registro para ser o tipo de retorno
da função. Utilize const nos parâmetros da função sempre que possível.
 */

struct Resultados {
    int menor;
    int maior;
    int posMenor;
    int posMaior;
};

Resultados analisarVetor(const int vet[], int tamanho) {
    Resultados r;

    r.menor = vet[0];
    r.maior = vet[0];
    r.posMenor = 0;
    r.posMaior = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vet[i] < r.menor) {
            r.menor = vet[i];
            r.posMenor = i;
        }
        if (vet[i] > r.maior) {
            r.maior = vet[i];
            r.posMaior = i;
        }
    }

    return r;
}

int main() {
    char nomeArquivo[50];
    ifstream fin;

    cout << "Arquivo: ";
    cin.getline(nomeArquivo, 50);

    fin.open(nomeArquivo);
    if (!fin.is_open()) {
        cout << "Erro ao abrir o arquivo.\n";
        exit(EXIT_FAILURE);
    }

    int vet[100];
    int tamanho = 0;

    while (fin >> vet[tamanho] && tamanho < 100) {
        tamanho++;
    }

    fin.close();

    Resultados r = analisarVetor(vet, tamanho);

    cout << "A posição " << r.posMenor
        << " contém o menor número (" << r.menor << ")\n"; //aqui mostra um número menor pois o programa começa a contar da linha 0 ao invés da linha 1
    cout << "A posição " << r.posMaior
        << " contém o maior número (" << r.maior << ")\n";
}
