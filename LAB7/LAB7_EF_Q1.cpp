#include <iostream>
using namespace std;

void mostrarASCII(int);

int main() {
    // Exemplo do enunciado
    mostrarASCII(80);
    mostrarASCII(114);
    mostrarASCII(111);
    mostrarASCII(103);
    mostrarASCII(67);
    mostrarASCII(111);
    mostrarASCII(109);
    mostrarASCII(112);

    cout << endl; // quebra de linha no final

    return 0;
}

// Função que recebe um número e imprime o caractere ASCII correspondente
void mostrarASCII(int codigo) {
    cout << (char)codigo;
}