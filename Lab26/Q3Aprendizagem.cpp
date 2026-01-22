#include <iostream>
#include <cstring>
using namespace std;

/*  uma	função	chamada	FirstName	e	outra	chamada	LastName.	As	funções	
devem	receber	uma	string de	origem	e	uma	string	de	destino.	A	string	de	origem	
deve	conter	o	nome	completo	de	uma	pessoa.	As	funções	devem	copiar	para	a	
string	de	destino,	respectivamente,	o	primeiro	e	o	último	nome	da	pessoa.	No	
programa	principal	leia	vários	nomes	completos	e	exiba	os	resultados	das	funções,	
como	no	exemplo	abaixo. */

void FirstName(const char origem[], char destino[]);
void LastName(const char origem[], char destino[]);

int main() {
    char nome[200];
    char primeiro[50];
    char ultimo[50];

    cout << "Entre com os nomes a cadastrar ('.' para encerrar):\n";

    while (true) {
        cin.getline(nome, 200);

        if (strcmp(nome, ".") == 0)
            break;

        FirstName(nome, primeiro);
        LastName(nome, ultimo);

        cout << ultimo << ", " << primeiro << endl;
    }
}

void FirstName(const char origem[], char destino[]) {
    int i = 0;
    int j = 0;

    while (origem[i] == ' ') i++;

    while (origem[i] != ' ' && origem[i] != '\0') {
        destino[j++] = origem[i++];
    }

    destino[j] = '\0';
}

void LastName(const char origem[], char destino[]) {
    int fim = strlen(origem) - 1;

    while (fim >= 0 && origem[fim] == ' ')
        fim--;

    int inicio = fim;

    while (inicio >= 0 && origem[inicio] != ' ')
        inicio--;

    inicio++;

    int j = 0;
    while (inicio <= fim) {
        destino[j++] = origem[inicio++];
    }

    destino[j] = '\0';
}