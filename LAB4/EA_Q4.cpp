#include <iostream>
using namespace std;

// Função que calcula o volume do cilindro
double VolumeCilindro(double raio, double altura) {
    const double PI = 3.14159;  // Definindo PI manualmente
    return PI * raio * raio * altura;
}

int main() {
    double raio, altura, volume;

    cout << "Calcula o Volume de um Cilindro" << endl;
    cout << "-------------------------------" << endl;

    // Entrada dos valores
    cout << "Entre com o raio da base: ";
    cin >> raio;

    cout << "Entre com a altura: ";
    cin >> altura;

    
    volume = VolumeCilindro(raio, altura);

    
    cout << "O volume do cilindro e " << volume << endl;

    return 0;
}
