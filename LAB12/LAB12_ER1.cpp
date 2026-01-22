#include <iostream>

using namespace std;


// Estrutura para representar uma cor RGB - REGISTRO
struct Color {
    int R;
    int G;
    int B;
};

Color lerCor();

int limitar255(int);
void exibirCor(Color);

Color somarCores(Color, Color);
Color multiplicarCores(Color, Color);


int main() {
    system("chcp 1252>nul"); 

    Color cor1, cor2, soma, mult;

    cout << "Digite duas cores:\n";
    cor1 = lerCor();
    cor2 = lerCor();

    soma = somarCores(cor1, cor2);
    mult = multiplicarCores(cor1, cor2);

    cout << "\nSoma = ";
    exibirCor(soma);
    cout << "\nMult = ";
    exibirCor(mult);
    cout << endl;

    return 0;
}


// Função do tipo REGISTRO para ler uma cor RGB
Color lerCor() {
    Color c;
    char lixo; // para capturar os caracteres não numéricos (como '(', ',', ')')
    cout << "RGB(";
    cin >> c.R >> lixo >> c.G >> lixo >> c.B >> lixo;
    return c;
}

// Função para limitar valores acima de 255
int limitar255(int valor) {
    if (valor > 255)
        return 255;
    else if (valor < 0)
        return 0;
    return valor;
}

// Função para exibir uma cor RGB
void exibirCor(Color c) {
    cout << "RGB(" << c.R << "," << c.G << "," << c.B << ")";
}

// Função do tipo REGISTRO para somar duas cores
Color somarCores(Color c1, Color c2) {
    Color soma;
    soma.R = limitar255(c1.R + c2.R);
    soma.G = limitar255(c1.G + c2.G);
    soma.B = limitar255(c1.B + c2.B);
    return soma;
}

// Função do tipo REGISTRO para multiplicar duas cores
Color multiplicarCores(Color c1, Color c2) {
    Color mult;
    mult.R = (c1.R * c2.R) / 255;
    mult.G = (c1.G * c2.G) / 255;
    mult.B = (c1.B * c2.B) / 255;
    return mult;
}