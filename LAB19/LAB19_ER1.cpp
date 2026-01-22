#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");

    char palavra[100];
    int contador = 0;
    

    cout << "Digite palavras (pronto para parar):" << endl;
    while (cin >> palavra && strcmp(palavra, "pronto")) {
        contador++;
    }
    cout << "foram digitadas um total de " << contador << " palavras." << endl;

	return 0;
}