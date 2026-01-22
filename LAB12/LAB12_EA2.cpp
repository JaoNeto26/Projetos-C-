#include <iostream>
#include <string>
using namespace std;

struct Palavra
{
	string portugues;
	string ingles;
	string espanhol;

};

int main() {
	system("chcp 1252>nul");
	Palavra dicionario[10];
	dicionario[0] = { "casa", "house", "casa" };
	dicionario[1] = { "livro", "book", "libro" };

	cout << "\nDigite uma nova palavra nas três línguas:\n";
	cout << "Português: ";
	cin >> dicionario[2].portugues;
	cout << "Inglês: ";
	cin >> dicionario[2].ingles;
	cout << "Espanhol: ";
	cin >> dicionario[2].espanhol;

	cout << "1° palavra" << endl;
	cout << "Português: " << dicionario[0].portugues
		<< ", Inglês: " << dicionario[0].ingles
		<< ", Espanhol: " << dicionario[0].espanhol << endl;

	cout << "2° palavra" << endl;
	cout << "Português: " << dicionario[1].portugues
		<< ", Inglês: " << dicionario[1].ingles
		<< ", Espanhol: " << dicionario[1].espanhol << endl;

	cout << "3° palavra" << endl;
	cout << "Português: " << dicionario[2].portugues
		<< ", Inglês: " << dicionario[2].ingles
		<< ", Espanhol: " << dicionario[2].espanhol << endl;

	return 0;
}