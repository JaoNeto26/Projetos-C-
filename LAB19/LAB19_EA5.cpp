#include <iostream>
using namespace std;

int main() {
    char tabela[16][16]; // matriz estática 256 elementos

    // Preenchendo com tabela ASCII
    int codigo = 0;
    for (int col = 0; col < 16; col++) {
        for (int lin = 0; lin < 16; lin++) {
            tabela[lin][col] = codigo;
            codigo++;
        }
    }

    int x1, y1, x2, y2;
    cout << "Entre com as coordenadas da regiao de interesse\n";
    cout << "De : ";
    cin >> x1 >> y1;
    cout << "Ate: ";
    cin >> x2 >> y2;

    // calculo do tamanho da região
    int linhas = x2 - x1 + 1;
    int colunas = y2 - y1 + 1;

    // criando matriz dinâmica
    char** recorte = new char* [linhas];
    for (int i = 0; i < linhas; i++)
        recorte[i] = new char[colunas];

    // copiando conteúdo
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            recorte[i][j] = tabela[x1 + i][y1 + j];

    // Exibindo tabela recortada
    cout << "\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++)
            cout << recorte[i][j] << " ";
        cout << endl;
    }

    // Liberando memória
    for (int i = 0; i < linhas; i++)
        delete[] recorte[i];
    delete[] recorte;

    return 0;
}
