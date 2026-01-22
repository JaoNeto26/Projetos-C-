#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

#define MAX_ALUNOS 100
#define MAX_NOME 100

// Estrutura que representa um aluno:
// - nome: nome do aluno (cadeia C com tamanho fixo)
// - turno: 'M' para Matutino ou 'T' para Vespertino
// - serie: 6, 7 ou 8
struct Aluno {
    char nome[MAX_NOME];
    char turno;   // 'M' ou 'T'
    int serie;    // 6, 7 ou 8
};

/*
 Função A: LerAlunos
 - Abre o arquivo passado por nome;
 - Lê as linhas do arquivo (sem usar std::string);
 - Preenche o vetor alunos e retorna o total lido;
 - Retorna -1 se a abertura do arquivo falhar.
*/
int LerAlunos(const char* nomeArquivo, Aluno alunos[], int maxAlunos) {
    // Tenta abrir o arquivo de texto com os dados
    ifstream fin(nomeArquivo);
    if (!fin.is_open()) {
        // sinaliza erro de abertura ao chamador
        return -1;
    }

    int total = 0;
    // buffer para receber cada linha do arquivo:
    // deixa espaço extra para o código (ex: "M8") e eventuais espaços
    char line[MAX_NOME + 32];

    // Enquanto houver linhas e não ultrapassarmos o limite de alunos
    while (total < maxAlunos && fin.getline(line, sizeof(line))) {
        // comprimento atual da linha
        int len = (int)strlen(line);

        // Remove espaços em branco no final da linha
        // (evita que espaços atrapalhem a separação nome/código)
        while (len > 0 && isspace((unsigned char)line[len - 1])) {
            line[--len] = '\0';
        }

        // Se a linha não estiver vazia, tenta extrair nome e código
        if (len != 0) {
            int sep = -1;
            // Procura o último espaço em branco que separa o nome do código
            // (varre de trás para frente; não usa break por opção)
            for (int i = len - 1; i >= 0 && sep == -1; --i) {
                if (isspace((unsigned char)line[i])) {
                    sep = i;
                }
            }

            // Se encontrou separador, tenta extrair o código (turno+serie)
            if (sep != -1) {
                // Pula espaços entre o separador e o início do código
                int codeStart = sep + 1;
                while (codeStart < len && isspace((unsigned char)line[codeStart])) ++codeStart;

                int codeLen = len - codeStart;
                // Código mínimo esperado: 2 caracteres (ex.: 'M' e '6')
                if (codeLen >= 2) {
                    char codigo[10];
                    int copyCodeLen = (codeLen < (int)sizeof(codigo) - 1) ? codeLen : (int)sizeof(codigo) - 1;
                    // Copia somente os caracteres do código para um buffer pequeno
                    memcpy(codigo, line + codeStart, copyCodeLen);
                    codigo[copyCodeLen] = '\0';

                    // Calcula o tamanho do nome, removendo espaços antes do separador
                    int nameLen = sep;
                    while (nameLen > 0 && isspace((unsigned char)line[nameLen - 1])) --nameLen;

                    // Se houver um nome válido, copia para a estrutura aluno
                    if (nameLen > 0) {
                        int copyNameLen = (nameLen < MAX_NOME - 1) ? nameLen : MAX_NOME - 1;
                        memcpy(alunos[total].nome, line, copyNameLen);
                        alunos[total].nome[copyNameLen] = '\0'; // garante terminação

                        // O primeiro caractere do código indica o turno ('M' ou 'T')
                        alunos[total].turno = codigo[0];
                        // O segundo caractere indica a série (caractere para dígito)
                        alunos[total].serie = codigo[1] - '0';

                        // Conta um aluno válidamente lido
                        total++;
                    }
                }
            }       
        }
    }

    fin.close();
    return total;
}

/*
 Função B: ExibirPorTurnoSerie
 - Recebe o vetor de alunos e o total lido;
 - Exibe os alunos agrupados por turno (Matutino/Vespertino) e série (6 a 8).
*/
void ExibirPorTurnoSerie(const Aluno alunos[], int total) {
    // Percorre os dois turnos: primeiro Matutino, depois Vespertino
    for (int t = 0; t < 2; t++) {

        char turno;
        char nomeTurno[20];

        if (t == 0) {
            turno = 'M';
            strcpy(nomeTurno, "Matutino");
        }
        else {
            turno = 'T';
            strcpy(nomeTurno, "Vespertino");
        }

        // Para cada série (6, 7 e 8) imprime o cabeçalho e lista os alunos
        for (int serie = 6; serie <= 8; serie++) {

            cout << "\n" << nomeTurno << " " << serie << "a Serie\n";
            cout << "-----------------------------\n";

            // Varre todos os alunos e mostra apenas os que pertencem ao turno e série atuais
            for (int i = 0; i < total; i++) {

                if (alunos[i].turno == turno &&
                    alunos[i].serie == serie) {

                    // Exibe: nome, seguido do código (turno + série)
                    cout << alunos[i].nome << "   "
                        << alunos[i].turno
                        << alunos[i].serie << "\n";
                }
            }
        }
    }
}

int main() {

    Aluno alunos[MAX_ALUNOS];

    // Chama a função que lê os alunos do arquivo; recebe a quantidade lida
    int total = LerAlunos("alunos.txt", alunos, MAX_ALUNOS);

    // Se LerAlunos devolveu -1, houve erro ao abrir o arquivo
    if (total < 0) {
        cout << "A abertura do arquivo alunos.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }

    // Exibe os alunos organizados por turno e série
    ExibirPorTurnoSerie(alunos, total);

    return 0;
}
