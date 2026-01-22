#include <iostream>
#include <fstream>

using namespace std;

int main() {

    char nomeArquivo[50];
    char palavra[50];

    cout << "Nome do arquivo: ";
    cin >> nomeArquivo;

    cout << "Palavra: ";
    cin >> palavra;

    ifstream arquivo;
    arquivo.open(nomeArquivo);

    if (!arquivo.is_open())
    {
        // a abertura do arquivo falhou
        cout << "A abertura do arquivo " << nomeArquivo << " falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }

    char linha[300];
    int encontrada = 0;

    // Enquanto conseguir ler uma linha inteira do arquivo
    while (arquivo.getline(linha, 300)) {

        int i = 0;
        // Percorre cada caractere da linha
        while (linha[i] != '\0') {

            int j = 0;   // Índice da palavra procurada
            int k = i;   // Índice da linha, começando da posição atual

            // Compara caractere por caractere da palavra com a linha
            while (palavra[j] != '\0' && linha[k] != '\0' && linha[k] == palavra[j]) {
                j++;
                k++;
            }

            // Se chegou ao final da palavra, ela foi encontrada
            if (palavra[j] == '\0') {
                encontrada = 1;
            }

            i++;
        }
    }

    arquivo.close();

    cout << "A palavra \"";

    int p = 0;
    // Exibe a palavra digitada, caractere por caractere

    while (palavra[p] != '\0') {
        cout << palavra[p];
        p++;
    }

    // Verifica se a palavra foi encontrada ou não
    if (encontrada == 1) {
        cout << "\" esta presente no texto.\n";
    }
    else {
        cout << "\" nao esta presente no texto.\n";
    }

    return 0;
}
