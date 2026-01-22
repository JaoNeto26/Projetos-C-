#include <iostream>
#include <cstring>

using namespace std;

int main() {
    system("chcp 1252>nul");
    char palavra1[50], palavra2[50], palavra3[50], palavra4[50];
    int tamanhoTotal;

    cout << "Digite 4 palavras: \n";
    cin >> palavra1 >> palavra2 >> palavra3 >> palavra4;

    // Calcula o tamanho total necessário (+4 espaços e +1 para '\0')
    tamanhoTotal = strlen(palavra1) + strlen(palavra2) + strlen(palavra3) + strlen(palavra4) + 5;

    char* resultado = new char[tamanhoTotal];

    // Concatena as palavras separadas por espaço usando strcpy_s e strcat_s
    strcpy_s(resultado, tamanhoTotal, palavra1); // Copia a primeira palavra.
    strcat_s(resultado, tamanhoTotal, " "); // Junta um espaço.
    strcat_s(resultado, tamanhoTotal, palavra2); // Junta a segunda palavra. 
    strcat_s(resultado, tamanhoTotal, " "); // Junta um espaço.
    strcat_s(resultado, tamanhoTotal, palavra3); // junta a terceira palavra.
    strcat_s(resultado, tamanhoTotal, " "); // Junta um espaço.
    strcat_s(resultado, tamanhoTotal, palavra4); // Junta a quarta palavra.

    cout << "\nConcatenando as palavras obtém-se:\n" << resultado << endl;

    delete[] resultado;
    return 0;
}