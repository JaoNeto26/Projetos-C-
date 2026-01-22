#include <iostream>
#include "funcoes.h"   // inclui os protótipos

/*
Arquivo 2 (funcoes.h) → só declara as funções (protótipos).

Arquivo 3 (funcoes.cpp) → implementa essas funções de fato.
*/

using namespace std;

int main() {
    double x, y;

    cout << "Digite as coordenadas do vetor:" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    double r = ModuloVetor(x, y);
    double angulo = AnguloVetor(x, y);

    cout << "Coordenadas polares do vetor:" << endl;
    cout << "(" << r << ", " << angulo << ")" << endl;

    return 0;
}
