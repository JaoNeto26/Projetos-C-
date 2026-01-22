#include <iostream>
using namespace std;

/*Considere	a	seguinte	declaração	de	registro:
struct candidato
{
 char nome[30];
 int notas[3];
};
a. Escreva	uma	função	que	receba	um	registro	candidato como	argumento e	
mostre	seu	conteúdo.
b. Escreva	uma	função	que	receba	o	endereço	de	um	candidato e	mostre	o	
conteúdo	do	registro.
c. Escreva	uma	função	que	receba	um	vetor	de	candidatos e	mostre	todo	o	
conteúdo	do	vetor.
d. Existe	uma	diferença	na	assinatura	das	funções usadas	para	resolver	os	
itens	“b”	e	“c”?*/

struct candidato { 
	char nome[30]; 
	char notas[3];
};

// a) Escreva uma	função	que	receba	um	registro candidato como	argumento e	mostre	seu	conteúdo.
void exibirCandidato(candidato c) {
    cout << "Nome: " << c.nome << endl;
    cout << "Notas: " << c.notas[0] << " "
                     << c.notas[1] << " "
                     << c.notas[2] << endl;
}

//b) Escreva	uma	função	que	receba	o	endereço	de	um	candidato e	mostre	o	conteúdo	do	registro.
void exibirCandidato(const candidato* c) {
    cout << "Nome: " << c->nome << endl;
    cout << "Notas: " << c->notas[0] << " "
        << c->notas[1] << " "
        << c->notas[2] << endl;
}

//c)  Escreva	uma	função	que	receba	um	vetor	de	candidatos e	mostre	todo	o	conteúdo	do	vetor.
void exibirVet(const candidato vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Candidato " << i << ":\n";
        cout << "  Nome: " << vet[i].nome << endl;
        cout << "  Notas: "
            << vet[i].notas[0] << " "
            << vet[i].notas[1] << " "
            << vet[i].notas[2] << endl;
        cout << endl;
    }
}

//d)Existe	uma	diferença	na	assinatura	das	funções usadas	para	resolver	os	itens	“b”	e	“c
// Resposta: A do item b recebe um ponteiro para um único candidato; a do item c recebe um ponteiro para o primeiro candidato de um vetor. Ambas usam ponteiros, só mudam na quantidade de elementos tratados.

int main() {

}