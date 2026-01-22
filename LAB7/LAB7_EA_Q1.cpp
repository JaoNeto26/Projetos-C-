#include <iostream>

using namespace std;

/*
Crie uma função chamada codificar que recebe um caractere, soma 3 a ele e
retorna o novo caractere codificado. Crie outra função chamada decodificar que
recebe um caractere e subtrai 3 do caractere recebido e retorna o novo caractere
decodificado. Use as duas funções em um programa que receba um caractere do
usuário, codifique o caractere, mostre o caractere ao usuário, decodifique-o e
mostre-o novamente.
*/
char codificar(char);
char decodificar(char);

int main() {
	system("chcp 1252>nul");
	char caractere;

	cout << "Digite um caractere: ";
	cin >> caractere;
	cout << "O caractere '" << caractere << "' possui o codigo " << int(caractere)
		 << " ACSII" << endl;
	cout << "Adicionando +3, fica '" << codificar(caractere) << "' que possui o codigo " 
		 << int(codificar(caractere)) << endl;

	int codigo = int(codificar(caractere));

	cout << "Agora decodificando o codigo atual, fica '" << decodificar(codigo) 
		 << "' que possui o codigo " << int(decodificar(codigo));

	return 0;
}

char codificar(char carac) {
	int codigo = carac + 3;
	char codif = codigo;
 	return codif;
}

char decodificar(char carac) {
	int codigo = carac - 3;
	char decodif = codigo;
	return decodif;
}