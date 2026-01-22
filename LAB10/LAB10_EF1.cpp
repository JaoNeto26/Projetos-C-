#include <iostream>

using namespace std;

int main() {
    system("chcp 1252>nul"); // Permite acentuação no Windows

    float preco[3] = {1.5f, 2.0f, 1.0f};
    float quant[3];
    // impressao do resumo
    cout << fixed;
    cout.precision(2);


    cout << "Prezado Cliente," << endl;
    cout << "Digite a quantidade de quilos desejados: " << endl;

    cout << "Alface: ";
    cin >> quant[0];
    cout << "Beterraba: ";
    cin >> quant[1];
    cout << "Cenoura: ";
    cin >> quant[2];
    
    cout << endl << "Resumo da compra" << endl;
    cout << "----------------------" << endl;
    cout << "Alface: R$ " << quant[0] * preco[0] << endl;
    cout << "Beterraba: R$ " << quant[1] * preco[1] << endl;
    cout << "Cenoura: R$ " << quant[2] * preco[2] << endl;
    cout << "----------------------" << endl;
    cout << "Total: R$ " << quant[0] * preco[0] + quant[1] * preco[1] + quant[2] * preco[2]
         << endl;

    return 0;
}
