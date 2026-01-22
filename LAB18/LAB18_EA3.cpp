#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");

    char texto[100];   // vetor para armazenar o texto
    int i = 0;
    char c;

    cout << "Digite um texto: " << endl;
    cin.get(c);
    while (c != '@' && i < 99) {  // para automaticamente se encontrar '@'
        texto[i] = c;
        i++;
        cin.get(c);               // lê o próximo caractere
    }

    texto[i] = '\0'; // adiciona o terminador de string

    cout << texto << endl;

	return 0;
}