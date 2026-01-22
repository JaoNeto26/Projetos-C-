#include <iostream>
#include <fstream> // Para leitura e escrita de arquivos
#include <cstring> // Para strlen
#include <cctype>  // Para tolower

using namespace std;

// Função para verificar se é palíndromo sem usar string ou break/continue
bool ehPalindromo(char palavra[]) {
    int inicio = 0;
    int fim = strlen(palavra) - 1;
    bool palindromo = true; // Flag para controlar o estado

    // Enquanto os índices não se cruzarem e ainda for considerado palíndromo
    while (inicio < fim && palindromo) {
        // Compara os caracteres convertidos para minúsculo
        if (tolower(palavra[inicio]) != tolower(palavra[fim])) {
            palindromo = false; // Define como falso, o que fará o loop parar na próxima verificação
        }
        else {
            // Avança os índices apenas se forem iguais
            inicio++;
            fim--;
        }
    }

    return palindromo;
}

int main() {
    // ---------------------------------------------------------
    // ETAPA 1: Criar o arquivo de texto para teste (conforme o exemplo)
    // ---------------------------------------------------------
    ofstream arquivoCriacao("palindromos.txt");
    if (arquivoCriacao.is_open()) {
        arquivoCriacao << "No raiar do dia Ana observou que esse radar estava quebrado";
        arquivoCriacao.close();
    }
    else {
        cout << "Erro ao criar o arquivo de teste." << endl;
        return 1;
    }

    // ---------------------------------------------------------
    // ETAPA 2: Ler o arquivo e processar os palíndromos
    // ---------------------------------------------------------
    ifstream arquivoLeitura("palindromos.txt");

    if (!arquivoLeitura.is_open())
    {
        // a abertura do arquivo falhou
        cout << "A abertura do arquivo palindromos.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }

    char palavraAtual[100]; // Buffer para armazenar a palavra (substituto de string)
    int contador = 0;

    cout << "Arquivo: palindromos.txt" << endl;

    // O operador >> lê palavra por palavra, ignorando espaços automaticamente
    while (arquivoLeitura >> palavraAtual) {
        if (ehPalindromo(palavraAtual)) {
            cout << palavraAtual << endl;
            contador++;
        }
    }

    cout << "Foram encontrados " << contador << " palindromos neste arquivo." << endl;

    arquivoLeitura.close();

    return 0;
}