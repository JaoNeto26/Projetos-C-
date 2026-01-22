#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
    // Arquivo de entrada: cada linha contém: Nome nota1 nota2 nota3
   // Exemplo de nome: Wilson 8.2 7.5 5.0
    ifstream fin("alunos.txt");
    if (!fin) {
        cout << "A abertura do arquivo falhou!" << endl;
        exit(EXIT_FAILURE);
    }

    ofstream fout("situacao.txt");
    if (!fout) {
        cout << "A abertura do arquivo falhou!" << endl;
        exit(EXIT_FAILURE);
    }

    char nome[50];
    double n1, n2, n3;
    // Critério adotado:
    // média >= 7.0 -> "aprovado"
    // média < 3.0  -> "reprovado"
    // caso contrário -> "quarta prova"
    while (fin >> nome >> n1 >> n2 >> n3) {
        double media = (n1 + n2 + n3) / 3.0;
        char situacao[50];
        if (media >= 7.0) strcpy_s(situacao, 50 ,"Aprovado");
        else if (media < 3.0) strcpy_s(situacao, 50 ,"reprovado");
        else strcpy_s(situacao, 50 ,"quarta prova");

        fout << nome << " " << situacao << '\n';
    }

    fin.close();
    fout.close();

    cout << "Processamento concluído. Verifique 'situacao.txt'.\n";
    return 0;


	return 0;
}