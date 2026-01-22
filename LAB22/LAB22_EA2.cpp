#include <iostream>
using namespace std;


int main() {
	system("chcp 1252>nul");

    int ca = 0, ce = 0, ci = 0, co = 0, cu = 0;
    char c;

    cout << "Digite uma frase (@ para finalizar):\n";

    while (cin.get(c) && c != '@') {
        char lc = static_cast<char>(tolower(static_cast<unsigned char>(c)));
        switch (lc) {
        case 'a': ca++; break;
        case 'e': ce++; break;
        case 'i': ci++; break;
        case 'o': co++; break;
        case 'u': cu++; break;
        default: break;
        }
    }

    cout << "a:" << ca << '\n';
    cout << "e:" << ce << '\n';
    cout << "i:" << ci << '\n';
    cout << "o:" << co << '\n';
    cout << "u:" << cu << '\n';

	return 0;
}