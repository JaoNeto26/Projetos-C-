#include <iostream>
using namespace std;

int main() {
	system("chcp 1252>nul");

    // exemplos de valores (altere para testar)
    double peso = 120.0;
    char ch = 'q';
    int x = 24;
    int donativo = 95;

    // a) peso é maior ou igual a 115 mas é inferior a 125
    bool a = (peso >= 115.0) && (peso < 125.0);

    // b) ch é q ou o
    bool b = (ch == 'q') || (ch == 'o');

    // c) x é par mas não é 26
    bool c = (x % 2 == 0) && (x != 26);

    // d) x é par mas não é um múltiplo de 26
    bool d = (x % 2 == 0) && (x % 26 != 0);

    // e) donativo está na faixa [10-20] ou [90-100]
    bool e = ((donativo >= 10 && donativo <= 20) || (donativo >= 90 && donativo <= 100));

    // f) ch é uma letra maiúscula ou minúscula
    // versão com comparações de caracteres:
    bool f1 = ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
    // versão usando função da C-API:
    bool f2 = isalpha(static_cast<unsigned char>(ch)) != 0;

    cout << boolalpha;
    cout << "a) peso é maior ou igual a 115 mas é inferior a 125: " << a << "\n";
    cout << "b) ch é q ou Q: " << b << "\n";
    cout << "c) x é par mas não é 26: " << c << "\n";
    cout << "d) x é par mas não é um múltiplo de 26: " << d << "\n";
    cout << "e) donativo está na faixa [10-20] ou [90-100]: " << e << "\n";
    cout << "ch é uma letra maiúscula ou minúscula " << endl;
    cout << "f (comparacao): " << f1 << "\n";
    cout << "f (isalpha):     " << f2 << "\n";

	return 0;
}