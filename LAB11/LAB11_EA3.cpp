#include <iostream>
#include <string> // Necessário para usar string

using namespace std;

int main() {
	system("chcp 1252>nul");

	// jeito moderno - com biblioteca string
	string nome;
	string data;
	string juntar;

	cout << "Nome: ";
	cin >> nome;
	cout << "Data: ";
	cin >> data;

	juntar = nome + " esteve aqui em " + data;

	cout << juntar;

	// jeito antigo - vetores de caracteres (char)
	/*
	
    char nome[50];
    char data[50];
    char juntar[120]; // espaço suficiente para o texto completo

    cout << "Nome: ";
    cin.getline(nome, 50); // lê o nome completo (com espaços)

    cout << "Data: ";
    cin.getline(data, 50); // lê a data completa (com espaços)

    // monta a frase final
    strcpy(juntar, nome); // copia nome para juntar
    strcat(juntar, " esteve aqui em ");
    strcat(juntar, data);

    cout << juntar << endl;

	*/
	return 0;
}