#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{

    system("chcp 1252>nul");

    ifstream fin("pescado.txt");
    if (!fin) {
        cout << "A abertura do arquivo falhou!" << endl;
        exit(EXIT_FAILURE);
    }

    char nome[50];
    int pesoGramas;
    int comprimentoCm;
    float totalGramas = 0.0f;

    // lê entradas até EOF; formato esperado: Nome PesoEmGramas ComprimentoEmCm
    while (fin >> nome >> pesoGramas >> comprimentoCm) {
        totalGramas += pesoGramas;
    }

    fin.close();

    double totalKilos = totalGramas / 1000.0;
    cout << fixed << setprecision(2);
    cout << "Total pescado: " << totalKilos << " kg\n";

	
	return 0;
}