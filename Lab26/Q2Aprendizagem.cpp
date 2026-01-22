#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

/* Construa	um	programa	que	leia uma	lista	de nomes completos.	O	programa	deve	
encerrar	a	leitura	apenas	quando	for	digitado	o	nome	“fim”. Passe	cada	nome	
completo para	uma	função	que	deve	colocar	as	primeiras	letras	de	cada	parte	do	
nome	para	maiúsculo	e	o	restante	para	minúsculo,	como	mostrado	no	exemplo	
abaixo. A	função	deve	retornar	um	booleano	indicando	se	alguma	alteração	foi	
feita no	nome	original. O	programa	principal	deve	usar	o	valor	de	retorno	para	
indicar	se	o	nome	foi	ou	não	corrigido. Observe	que	o	programa	não	põe	para	
maiúsculo	os */

bool corrigirNome(char nome[]);

int main() {
    char nome[200];

    cout << "Entre com os nomes dos aprovados (fim para encerrar):\n";

    while (true) {
        cin.getline(nome, 200);

        if (strcmp(nome, "fim") == 0)
            break;

        char original[200];
        strcpy(original, nome);

        bool mudou = corrigirNome(nome);

        cout << nome;
        if (mudou)
            cout << "  <-- Corrigido\n";
        else
            cout << "  <-- OK\n";
    }
}

bool corrigirNome(char nome[]) {
    bool alterou = false;
    int n = strlen(nome);
    int i = 0;

    while (i < n) {
        while (i < n && nome[i] == ' ')
            i++;

        if (i >= n) break;

        int inicio = i;
        int len = 0;

        while (i < n && nome[i] != ' ') {
            len++;
            i++;
        }

        if (len > 2) {
            if (nome[inicio] >= 'a' && nome[inicio] <= 'z') {
                nome[inicio] -= 32;
                alterou = true;
            }

            for (int j = inicio + 1; j < inicio + len; j++) {
                if (nome[j] >= 'A' && nome[j] <= 'Z') {
                    nome[j] += 32;
                    alterou = true;
                }
            }
        }
        else {
            for (int j = inicio; j < inicio + len; j++) {
                if (nome[j] >= 'A' && nome[j] <= 'Z') {
                    nome[j] += 32;
                    alterou = true;
                }
            }
        }
    }

    return alterou;
}