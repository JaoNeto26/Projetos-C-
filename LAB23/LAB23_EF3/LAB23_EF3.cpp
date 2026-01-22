#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

ifstream fout("caracteres.txt");

bool ehVogal(char c);
bool ehLetra(char c);
int main() {
	char ch;
	int total = 0, vogais = 0, consoantes = 0, outros = 0;

	if (!fout) {
		cout << "A abertura do arquivo falhou!";
		exit(EXIT_FAILURE);
	}

	while ( fout.get(ch)) {
		total++;
		if (ehLetra(ch)) {
			if (ehVogal(ch))
				vogais++;
			else
				consoantes++;
		}
		else {
			outros++;
		}
	}
	cout << "Total de caracteres: " << total << endl;
	cout << "Vogais: " << vogais << endl;
	cout << "Consoantes: " << consoantes << endl;
	cout << "Outros caracteres: " << outros << endl;
	fout.close();
	return 0;
}

bool ehVogal(char c) {
	c = tolower(c);
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool ehLetra(char c) {
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}