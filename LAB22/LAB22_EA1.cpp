#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    system("chcp 1252>nul");
    char opcao;
    double kgAlface = 0, kgBeterraba = 0, kgCenoura = 0;
    double precoAlface = 15.25, precoBeterraba = 8.50, precoCenoura = 9.60;

    cout << "Supermercado ABC\n";
    cout << "------------------" << endl;
    cout << "a) Alface      R$ 15,25/Kg\n";
    cout << "b) Beterraba   R$ 8,50/Kg\n";
    cout << "c) Cenoura     R$ 9,60/Kg\n";
    cout << "f) Encerrar pedido\n\n";

    do {
        cout << "Escolha um produto (a, b, c) ou 'f' para finalizar: ";
        cin >> opcao;

        switch (opcao) {
        case 'a':
        case 'A': {
            double q;
            cout << "Quantos Kg de alface? ";
            cin >> q;
            kgAlface += q;
            break;
        }
        case 'b':
        case 'B': {
            double q;
            cout << "Quantos Kg de beterraba? ";
            cin >> q;
            kgBeterraba += q;
            break;
        }
        case 'c':
        case 'C': {
            double q;
            cout << "Quantos Kg de cenoura? ";
            cin >> q;
            kgCenoura += q;
            break;
        }
        case 'f':
        case 'F':
            cout << "\nFinalizando pedido...\n";
            break;

        default:
            cout << "Opcao invalida.\n";
        }

    } while (opcao != 'f' && opcao != 'F');

    // -----------------------------
    // Cálculos
    // -----------------------------

    double totalAlface = kgAlface * precoAlface;
    double totalBeterraba = kgBeterraba * precoBeterraba;
    double totalCenoura = kgCenoura * precoCenoura;

    double pesoTotal = kgAlface + kgBeterraba + kgCenoura;
    double totalPedido = totalAlface + totalBeterraba + totalCenoura;

    // Desconto para pedidos > 5 kg
    double desconto = 0;
    if (pesoTotal > 5)
        desconto = totalPedido * 0.05;

    double totalComDesconto = totalPedido - desconto;

    // Custo da entrega
    double entrega = 0;
    if (pesoTotal <= 2)
        entrega = 6.30;
    else if (pesoTotal <= 20)
        entrega = 9.60;
    else
        entrega = 18.00;

    double totalFinal = totalComDesconto + entrega;

    // -----------------------------
    // Relatório final
    // -----------------------------

    cout << "\nProduto          Preco/Kg   pedido/Kg   Total Parcial\n";
    cout << "--------         ---------  ---------   --------------" << endl;
    if (kgAlface > 0)
        cout << "Alface           R$15,25     " << kgAlface << "          R$ " << totalAlface << "\n";
    if (kgBeterraba > 0)
        cout << "Beterraba        R$ 8,50     " << kgBeterraba << "          R$ " << totalBeterraba << "\n";
    if (kgCenoura > 0)
        cout << "Cenoura          R$ 9,60     " << kgCenoura << "         R$ " << totalCenoura << "\n";
    cout << "-----------------------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "\nTotal do pedido:   R$ " << totalPedido << endl;
    cout << "Desconto:          R$ " << desconto << endl;
    cout << "Custo entrega:     R$ " << entrega << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Total a pagar:     R$ " << totalFinal << endl;

    return 0;
}
