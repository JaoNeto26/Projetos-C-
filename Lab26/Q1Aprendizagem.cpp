#include <iostream>
using namespace std;

/* Escreva	uma	função	que	receba	uma	string por	parâmetro	e	retorne	um	valor	
inteiro	indicando	quantas	palavras	existem	na	string.	No	programa	principal	leia	
uma	string	do	usuário	para	testar	a	função.	Use const sempre	que	pertinente. */

int contarPalavras(const char* str);

int main() {
    char frase[200];

    cout << "Entre com uma frase:\n";
    cin.getline(frase, 200);

    int qtd = contarPalavras(frase);

    cout << "Existem " << qtd << " palavras nesta frase!" << endl;
}

int contarPalavras(const char* str) {
    int cont = 0;
    bool dentro = false;

    while (*str) {

        if (*str != ' ' && *str != '\t' && *str != '\n') {
            if (!dentro) {
                cont++;
                dentro = true;
            }
        }
        else {
            dentro = false;
        }

        str++;
    }

    return cont;
}
