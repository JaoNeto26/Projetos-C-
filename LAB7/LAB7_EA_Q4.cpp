#include <iostream>
using namespace std;
/*
Construa uma função bitsAltos que utiliza uma máscara de bits para retornar
apenas os 16 bits de ordem mais alta de um número tipo int. Teste a função
passando um valor inteiro digitado pelo usuário e mostrando o número retornado
*/

unsigned short bitsAlto(unsigned int, unsigned int);

int main() {
	system("chcp 1252>nul");

    unsigned int valor, bit;
    cout << "Digite um numero inteiro: ";
    cin >> valor;
    bit = 0b11111111111111110000000000000000;


    cout << "Valor original: " << valor << endl;
    cout << "Apenas os 16 bits de ALTA ordem: ";

    bitsAlto(valor, bit);
    return 0;
}

unsigned short bitsAlto(unsigned int n, unsigned int b) {
    unsigned int resultado = n & b;
    resultado = resultado >> 16;
    cout << resultado << " ";
    return 0;
}

