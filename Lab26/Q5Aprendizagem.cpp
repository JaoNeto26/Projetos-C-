#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

/* Construa	um	registro	para	armazenar	um	conjunto	de	caracteres.	O	registro	deve	
guardar um	ponteiro	para	um	vetor	dinâmico	de	caracteres	e	o	tamanho	do	vetor,	
como	mostrado	abaixo:
struct CharSet
{
 char * str; // ponteiro para vetor dinâmico
 int tam; // tamanho do vetor
};
Agora	escreva	funções	para:
a. Atribuir	uma	constante	string	para	um	CharSet	já	existente
b. Exibir	uma	string	armazenada	em	um	CharSet
c. Retornar	o	tamanho	de	um	CharSet
d. Concatenar	uma	constante	string	em	um	CharSet
Construa	uma	solução em	que	o vetor	interno	do	CharSet	cresça automaticamente	
sempre	que	necessário. Todas	as funções	devem	receber	o endereço	de	um	
CharSet e	não	uma	cópia. */

struct CharSet {
    char* str;
    int tam;
};

void initCharSet(CharSet* cs) {
    cs->str = 0;
    cs->tam = 0;
}

//a. Atribuir uma constante string para um CharSet já existente
void assignString(CharSet* cs, const char* s) {
    int len = strlen(s);
    delete[] cs->str;
    cs->str = new char[len + 1];
    strcpy(cs->str, s);
    cs->tam = len;
}

//b. Exibir uma string armazenada em um CharSet
void printCharSet(const CharSet* cs) {
    if (cs->str != 0)
        cout << cs->str << endl;
    else
        cout << "(vazio)" << endl;
}

//c. Retornar o tamanho de um CharSet
int getSize(const CharSet* cs) {
    return cs->tam;
}

//d. Concatenar uma constante string em um CharSet
void concatString(CharSet* cs, const char* s) {
    int len = strlen(s);
    char* newStr = new char[cs->tam + len + 1];
    if (cs->str != 0) {
        strcpy(newStr, cs->str);
        delete[] cs->str;
    }
    else {
        newStr[0] = '\0';
    }
    strcat(newStr, s);
    cs->str = newStr;
    cs->tam += len;
}

void freeCharSet(CharSet* cs) {
    delete[] cs->str;
    cs->str = 0;
    cs->tam = 0;
}

int main() {
    CharSet cs;
    initCharSet(&cs);

    assignString(&cs, "Olá");
    printCharSet(&cs);
    cout << "Tamanho: " << getSize(&cs) << endl;

    concatString(&cs, ", mundo!");
    printCharSet(&cs);
    cout << "Tamanho: " << getSize(&cs) << endl;

    freeCharSet(&cs);
}