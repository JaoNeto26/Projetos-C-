#include <iostream>
#include <string>
using namespace std;

enum TipoImagem { JPG = 1, PNG, BMP };

// Estrutura (registro) Imagem
struct Imagem {
    string nome;
    int largura;
    int altura;
    // Enumeração para o tipo de imagem
    TipoImagem tipo;
};

void Detalhes(Imagem* img);

int main() {
	system("chcp 1252>nul");
    Imagem minhaImagem = { "backg.png", 1920, 1080, JPG };
    Detalhes(&minhaImagem);
	return 0;
}

void Detalhes(Imagem* img) {

    string tipoStr;
    if (img->tipo == JPG)
        tipoStr = "JPG";
    else if (img->tipo == PNG)
        tipoStr = "PNG";
    else
        tipoStr = "BMP";

    cout << "A imagem \"" << img->nome << "\" com tamanho "
         << img->largura << "x" << img->altura
         << " tem formato " << tipoStr << "." << endl;
}


