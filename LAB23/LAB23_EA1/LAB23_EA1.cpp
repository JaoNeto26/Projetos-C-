#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char nomeOriginal[50];
    char nomeNovo[60];

    cout << "Digite o nome do arquivo cpp: ";
    cin >> nomeOriginal;

    // Monta nome do novo arquivo: teste_m.cpp
    int i = 0;
    while (nomeOriginal[i] != '\0') {
        nomeNovo[i] = nomeOriginal[i];
        i++;
    }

    // Remove ".cpp"
    nomeNovo[i - 4] = '\0';
    // Check if the filename is long enough before removing ".cpp"
    if (i >= 4 && nomeOriginal[i - 4] == '.' && nomeOriginal[i - 3] == 'c' && nomeOriginal[i - 2] == 'p' && nomeOriginal[i - 1] == 'p') {
        nomeNovo[i - 4] = '\0';
        int j = i - 4;
        nomeNovo[j++] = '_';
        nomeNovo[j++] = 'm';
        nomeNovo[j++] = '.';
        nomeNovo[j++] = 'c';
        nomeNovo[j++] = 'p';
        nomeNovo[j++] = 'p';
        nomeNovo[j] = '\0';
    } else {
        // If not, just append _m before the extension or at the end
        nomeNovo[i] = '\0';
        int j = i;
        nomeNovo[j++] = '_';
        nomeNovo[j++] = 'm';
        nomeNovo[j++] = '.';
        nomeNovo[j++] = 'c';
        nomeNovo[j++] = 'p';
        nomeNovo[j++] = 'p';
        nomeNovo[j] = '\0';
    }
    

    ifstream entrada;
    ofstream saida;

    entrada.open(nomeOriginal);
    saida.open(nomeNovo);

    if (!entrada.is_open())
    {
        // a abertura do arquivo falhou
        cout << "A abertura do arquivo " << nomeOriginal << " falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }

    // Cabeçalho exigido
    saida << "// " << nomeNovo << '\n';
    saida << "#define print cout\n";

    char palavra[100];

    // Lê palavra por palavra
    while (entrada >> palavra) {

        // compara manualmente com "cout"
        if (palavra[0] == 'c' &&
            palavra[1] == 'o' &&
            palavra[2] == 'u' &&
            palavra[3] == 't' &&
            palavra[4] == '\0') {

            saida << "print";
        }
        else {
            saida << palavra;
        }

        saida << " ";
    }

    entrada.close();
    saida.close();

    cout << "Arquivo gerado com sucesso.\n";

    return 0;
}
