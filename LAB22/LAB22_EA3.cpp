#include <iostream>
#include <iomanip>
using namespace std;


struct Prato {
    char nome[50];
    double preco;
};
int main() {
	system("chcp 1252>nul");


    // cardápio inicializado
    Prato cardapio[] = {
        {"X-Burger", 12.50},
        {"Pastel", 8.00},
        {"Sanduíche Natural", 10.00},
        {"Batata Frita", 6.50},
        {"Refrigerante", 4.00}
    };
    const int N = sizeof(cardapio) / sizeof(cardapio[0]);

    double total = 0.0;
    int opcao = -1;

    cout << fixed << setprecision(2);
    cout << "Bem-vindo à lanchonete!\n";

    // Laço principal: mostra cardápio e processa pedidos até o usuário digitar 0
    while (opcao != 0) {
        cout << "\nCardápio:\n";
        for (int i = 0; i < N; ++i) {
            cout << " " << (i + 1) << " - " << cardapio[i].nome
                << "  R$ " << cardapio[i].preco << '\n';
        }
        cout << " 0 - Finalizar pedido\n";
        cout << "Escolha o número do prato (0 para encerrar): ";
        if (!(cin >> opcao)) {
            
            cin.clear();
            // descarta até 1000 caracteres ou até o próximo newline — isto remove da 
            // entrada o que restou da linha inválida para que a próxima leitura não falhe de novo.
            cin.ignore(1000, '\n');
            cout << "Entrada inválida. Tente novamente.\n";
            opcao = -1;
        }

       
        switch (opcao) {
        case 0:
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: {
            int idx = opcao - 1;
            total += cardapio[idx].preco;
            cout << cardapio[idx].nome << " adicionado ao pedido. "
                 << "Subtotal: R$ " << total << '\n';
            break;
        }
        default:
            cout << "Opção inválida. Escolha um número do cardápio.\n";
            break;
        }
    }

    cout << "\nConta final: R$ " << total << '\n';
    cout << "Obrigado pelo pedido!\n";

	return 0;
}