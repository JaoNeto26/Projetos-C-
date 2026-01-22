#include <iostream>
#include <cstring>

using namespace std;

int main() {
	system("chcp 1252>nul");
	char jogadorTime[50];
    char* ptr{}; // ponteiro que apontará para o nome do time
	int i, tamJogador;

    cout << "Digite o jogador/time: ";
    cin >> jogadorTime;

    // Localiza a posição da barra '/'
    for (i = 0; jogadorTime[i] != '\0'; i++) {
        if (jogadorTime[i] == '/') {
            jogadorTime[i] = '\0';  // substitui '/' por fim de string
            ptr = &jogadorTime[i + 1]; // ponteiro aponta para o time
            }
    }
    tamJogador = strlen(jogadorTime); // conta letras do jogador
    cout << "O nome do jogador tem " << tamJogador << " Letras. \n";
    cout << "O seu time é o " << ptr;

	return 0;
}