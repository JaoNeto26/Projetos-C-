#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    system("chcp 1252 > nul");
    system("vol C: > vol.txt");

    FILE* f = fopen("vol.txt", "r");
    if (f == nullptr) {
        cout << "Erro ao abrir arquivo.\n";
        return 0;
    }

    char linha[200];

    char nomeVolume[200];
    char numeroSerie[50];

    int encontrouNome = 0;
    int encontrouSerie = 0;

    int i, j, pos;

    while (fgets(linha, 200, f) != nullptr) {

        // --------------------------------------
        // Procurar "Volume na unidade"
        // --------------------------------------
        pos = 0;
        while (linha[pos] != '\0') {

            if (linha[pos] == 'u' &&
                linha[pos + 1] == 'n' &&
                linha[pos + 2] == 'i')
            {
                // Procura o ':' sem break
                i = pos;
                while (linha[i] != ':' && linha[i] != '\0')
                    i++;

                if (linha[i] == ':') {

                    i += 2;
                    j = 0;

                    while (linha[i] != '\n' && linha[i] != '\0') {
                        nomeVolume[j] = linha[i];
                        j++;
                        i++;
                    }
                    nomeVolume[j] = '\0';

                    encontrouNome = 1;
                }
            }

            pos++;
        }

        // --------------------------------------
        // Procurar "Número de Série"
        // --------------------------------------
        pos = 0;
        while (linha[pos] != '\0') {

            if (linha[pos] == 'N' &&
                linha[pos + 1] == 'ú')
            {
                // Encontrou início → procurar ':'
                i = pos;
                while (linha[i] != ':' && linha[i] != '\0')
                    i++;

                if (linha[i] == ':') {
                    i += 2;
                    j = 0;

                    while (linha[i] != '\n' && linha[i] != '\0') {
                        numeroSerie[j] = linha[i];
                        j++;
                        i++;
                    }
                    numeroSerie[j] = '\0';

                    encontrouSerie = 1;
                }
            }

            pos++;
        }
    }

    fclose(f);

    // --------------------------------------
    // Exibir resultado
    // --------------------------------------
    cout << "Nome do volume da unidade C: ";
    if (encontrouNome)
        cout << nomeVolume;
    else
        cout << "(nenhum)";

    cout << "\nNumero de serie do volume: ";
    if (encontrouSerie)
        cout << numeroSerie;
    else
        cout << "(nao encontrado)";

    cout << "\n";

    return 0;
}
