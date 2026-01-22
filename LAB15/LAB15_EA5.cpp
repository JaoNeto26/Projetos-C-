#include <iostream>
using namespace std;

// Estrutura ASCII com um caractere e um valor inteiro
struct ASCII {
    char caractere;
    int valor;
};

// Função que cria dinamicamente um elemento ASCII e retorna seu endereço
ASCII* criarASCII(int valor, char caractere) {
    ASCII* novo = new ASCII;  // alocação dinâmica
    novo->valor = valor;
    novo->caractere = caractere;
    return novo;      // retorna o endereço   
   
}

int main() {
    system("chcp 1252>nul"); 

    int valor;
    char caractere;

    cout << "Digite um caractere: ";
    cin >> caractere;
    cout << "Digite o valor inteiro correspondente: ";
    cin >> valor;

    // Chama a função e guarda o endereço retornado
    ASCII* ptr = criarASCII(valor, caractere);

    // Exibe os valores
    cout << "\nCaractere armazenado: " << ptr->caractere << endl;
    cout << "Valor armazenado: " << ptr->valor << endl;

    // Libera a memória alocada
    delete ptr;

    return 0;
}
