#include <iostream>
using namespace std;

int main() {
    double preco;
    int codigo;

    cout << "Digite o preco do produto: ";
    cin >> preco;

    cout << "Digite o codigo de origem: ";
    cin >> codigo;

    cout << "\nPreco: R$ " << preco << endl;
    cout << "Procedencia: ";

    switch (codigo) {
        case 1:
        case 2:
            cout << "Sul";
            break;

        case 3:
            cout << "Norte";
            break;

        case 4:
            cout << "Centro-oeste";
            break;

        case 5:
        case 6:
            cout << "Nordeste";
            break;

        case 7:
        case 8:
        case 9:
            cout << "Sudeste";
            break;

        default:
            cout << "Codigo Invalido";
        }

    cout << endl;
    return 0;
}
