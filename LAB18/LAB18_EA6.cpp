#include <iostream>
#include <cstring>
using namespace std;

struct Pessoa {
	char Nome[20];
	int idade;
	char sexo;
};

int main() {
	system("chcp 1252>nul");
	int i = 0;
	int indice = 0 , media = 0;
	Pessoa grupo[100];
	cout << "Digite os dados do pessoal" << endl;
	while (cout << "Nome: ", cin >> grupo[i].Nome && strcmp(grupo[i].Nome,"fim")) {
		cin >> grupo[i].idade >> grupo[i].sexo;
		indice++;
		i++;
	}
	for (int i = 0; i < indice; i++) {
		media += grupo[i].idade;
	}
	cout << "a media do pessoal e: " << (media / indice) << endl;
	return 0;
}