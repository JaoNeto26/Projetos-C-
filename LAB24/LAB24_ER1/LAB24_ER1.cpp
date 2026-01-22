#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream entrada("pescado.txt");
    if (!entrada.is_open())
    {
        // a abertura do arquivo falhou
        cout << "A abertura do arquivo pescado.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        exit(EXIT_FAILURE);
    }

    char nome[100];
    int peso_gramas;
    int comprimento_cm;
    long long total_gramas = 0;

    // Lê linhas com: nome peso(em gramas) comprimento(em cm)
    while (entrada >> nome >> peso_gramas >> comprimento_cm) {
        total_gramas += peso_gramas;
    }

    entrada.close();

    double total_quilos = total_gramas / 1000.0;
    cout << "Quantidade total de quilos de peixe: " 
              << fixed << setprecision(2) << total_quilos << " kg\n";

    return 0;
}