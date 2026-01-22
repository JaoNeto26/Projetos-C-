#include <iostream>
#include <string>

using namespace std;
struct Tigela {
	string estado;      // cheia ou vazia
	string alimento;    // sopa ou canja

};

void fome(Tigela* ptr);
int main() {
	system("chcp 1252>nul");
    // Cria uma tigela cheia de sopa
    Tigela canja = { "cheia", "sopa" };

    // Cria um ponteiro que aponta para essa tigela
    Tigela * ptr = &canja;

    // Mostra o estado antes da janta
    cout << "Antes da janta: Tigela " << ptr->estado
        << " de " << ptr->alimento << endl;

    // Chama a função Fome que muda o estado para "vazia"
    fome(ptr);

    // Mostra o estado depois da janta
    cout << "Depois da janta: Tigela " << ptr->estado
        << " de " << ptr->alimento << endl;

	return 0;
}

void fome(Tigela * ptr) {
	 ptr->estado = "vazia";
}