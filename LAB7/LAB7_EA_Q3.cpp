#include <iostream>

using namespace std;
/*
 Construa uma função bitsBaixos que utiliza uma máscara de bits para retornar
apenas os 16 bits de mais baixa ordem de um número tipo int. Teste a função
passando um valor inteiro digitado pelo usuário e mostrando o número retornado.
*/
short bitsBaixos(int, int);

int main() {
	system("chcp 1252>nul");

    int valor, bit;
    cout << "Digite um numero inteiro: ";
    cin >> valor;
    bit = 0b00000000000000001111111111111111;


    cout << "Valor original: " << valor << endl;
    cout << "Apenas os 16 bits de baixa ordem: "; 

    bitsBaixos(valor, bit);
	return 0;
}

short bitsBaixos(int n, int b) {
    int resultado = n & b;
    cout << resultado << " ";
    return 0;
}