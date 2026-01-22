#include <iostream>
using namespace std;

int main() {
    system("chcp 1252>nul");
    const char* meses[12] = {
        "Janeiro", "Fevereiro", "Março", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    int vendas[3][12];  // vetor bidimensional: 3 anos × 12 meses
    int total_geral = 0;

    // Entrada dos dados
    for (int ano = 0; ano < 3; ano++) {
        cout << "\nDigite o número de livros vendidos no " << ano + 1 << "º ano:\n";

        for (int mes = 0; mes < 12; mes++) {
            cout << meses[mes] << ": ";
            cin >> vendas[ano][mes];
        }
    }

    // Cálculo e exibição dos totais
    cout << "\n================ RESULTADOS ================\n";

    for (int ano = 0; ano < 3; ano++) {
        int total_ano = 0;

        for (int mes = 0; mes < 12; mes++) {
            total_ano += vendas[ano][mes];
        }

        cout << "Total do " << ano + 1 << "º ano: " << total_ano << " livros\n";
        total_geral += total_ano;
    }

    cout << "\nNo total, durante os três anos foram vendidos "
        << total_geral << " livros.\n";

    return 0;
}
