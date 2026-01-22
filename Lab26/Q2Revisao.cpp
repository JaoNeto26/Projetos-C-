#include <iostream>
using namespace std;

/*Escreva	uma	função	com	o	protótipo abaixo. Ela	deve	substituir	todas	as	
ocorrências	do	caractere	c1	por	c2	na	string	str,	retornando	o	número	de	
substituições	feitas.

int subst(char * str, char c1, char c2);*/

int subst(char* str, char c1, char c2) {
    int cont = 0;

    while (*str) {
        if (*str == c1) {
            *str = c2;
            cont++;
        }
        str++;
    }

    return cont;
}


int main() {

}