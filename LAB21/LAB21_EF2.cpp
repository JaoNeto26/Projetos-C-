#include <iostream>
#include <iomanip>

using namespace std;

double calcularImposto(double);

int main() {
    system("chcp 1252>nul");

    cout << fixed << setprecision(2);
    cout << "Informe a renda (valor negativo para encerrar): ";

    double renda;
    while (cin >> renda) {
        if (renda < 0.0) {
            cout << "Encerrando.\n";
        }

        double imposto = calcularImposto(renda);
        cout << "Renda: R$ " << renda << " -> Imposto devido: R$ " << imposto << "\n\n";
        cout << "Informe a renda (valor negativo para encerrar): ";
    }

    return 0;
}


double calcularImposto(double renda) {
    // faixas (valores máximos de cada faixa) e alíquotas correspondentes
    const double faixas[] = { 5000.0, 10000.0, 20000.0, 30000.0 }; // tamanhos das faixas
    const double taxas[] = { 0.00,   0.10,    0.15,    0.20 };
    const int nFaixas = 4;

    double restante = renda;
    double imposto = 0.0;

    for (int i = 0; i < nFaixas && restante > 0.0; ++i) {
        double aplicado = (restante < faixas[i]) ? restante : faixas[i];
        imposto += aplicado * taxas[i];
        restante -= aplicado;
    }

    // Se ainda sobrar renda após todas as faixas, aplica-se a última alíquota (20%) ao restante.
    if (restante > 0.0) {
        imposto += restante * 0.20;
    }

    return imposto;
}