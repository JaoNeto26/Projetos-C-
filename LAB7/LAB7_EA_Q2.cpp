#include <iostream>

using namespace std;

char codificar(char);
char decodificar(char);

/*

Usando as funções criadas na questão anterior, peça ao usuário para digitar uma
letra, e posteriormente pergunte se ele quer decodificar ou codificar a letra
recebida, pedindo para que ele entre com 1 se desejar codificar e com 0 se desejar
decodificar. Utilize uma estrutura if else como exemplificado abaixo:

if (resposta == true)
	codificar(ch);
else
	decodificar(ch);

*/

int main() {
	system("chcp 1252>nul");
	char caractere;
	int op;
	cout << "Digite um caractere: ";
	cin >> caractere;
	int codigo = int(codificar(caractere));

	cout << "deseja codificar (+3) ou decodificar (-3): yes = 1/ no = 0 \n";
	cin >> op;
	if (op == 1) {
		cout << "O caractere '" << caractere << "' possui o codigo " << int(caractere)
			<< " ACSII" << endl;
		cout << "Adicionando +3, fica '" << codificar(caractere) << "' que possui o codigo "
			<< int(codigo) << endl;
	}
	else {
		cout << "O caractere '" << caractere << "' possui o codigo " << int(caractere)
			<< " ACSII" << endl;
		cout << "Agora decodificando o codigo atual, fica '" << decodificar(caractere)
			<< "' que possui o codigo " << int(decodificar(caractere));

	}
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