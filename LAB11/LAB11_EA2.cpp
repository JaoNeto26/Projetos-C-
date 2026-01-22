#include <iostream>

using namespace std;

int main() {
	system("chcp 1252>nul");
    char num1_str[20]; // primeiro número como string
    int num2;          // segundo número como inteiro

    cout << "Entre com dois números: ";
    cin >> num1_str >> num2;

    // converte string numérica para inteiro
    int num1 = atoi(num1_str);

    int resultado = num1 * num2;

    cout << "A multiplicação entre eles é " << resultado << "." << endl;
	return 0;
}