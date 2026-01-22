#include <iostream>
using namespace std;

// Função que calcula a média de dois inteiros
double Media(int a, int b) {
    return (a + b) / 2.0;  // 2.0 garante que a divisão seja real (double)
}

int main() {
    int num1, num2;
    double resultado;

    // Entrada dos valores
    cout << "Digite um valor inteiro: ";
    cin >> num1;

    cout << "Digite outro valor inteiro: ";
    cin >> num2;

    // Chamada da função Media()
    resultado = Media(num1, num2);

    // Saída
    cout << "A media dos numeros e " << resultado << endl;

    return 0;
}
