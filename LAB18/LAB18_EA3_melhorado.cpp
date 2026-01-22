#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");

    char antes[100];   // vetor para armazenar o texto
    char depois[100];
    char c;
    int i = 0, j = 0;
    bool aposArroba = false;

    cout << "Digite um texto: " << endl;
    
    // lê caractere por caractere até o fim da linha
    while (cin.get(c) && c != '\n') {
        if (c == '@') {
            aposArroba = true; // muda a flag quando achar o '@'
        }
        else if (!aposArroba && i < 99) {
            antes[i++] = c;
        }
        else if (aposArroba && j < 99) {
            depois[j++] = c;
        }
    }

    antes[i] = '\0';
    depois[j] = '\0';

    cout << "\nTexto antes do @: " << antes << endl;
    cout << "Texto depois do @: " << depois << endl;

	return 0;
}