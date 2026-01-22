#include <iostream>
#include <iomanip>
#include <cstring>
#include <limits>

#define _CRT_SECURE_NO_WARNINGS


using namespace std;

int main() {
    system("chcp 1252>nul");

    double total = 0.0;
    int count = 0;
    int countOver1000 = 0;
    char mostExpName[100] = "";
    double mostExpPrice = -1.0;

    char produto[100];
    double preco = 0.0;
    char resposta[10];

    cout << "Loja de Informática\n";

    bool continuar = true;
    while (continuar) {
        cout << "\nProduto: ";
        if (!cin.getline(produto, sizeof(produto))) {
            continuar = false;
        }
        else {
            if (produto[0] == '\0') {
                cout << "Nome vazio, digite o nome do produto: ";
                if (!cin.getline(produto, sizeof(produto))) {
                    continuar = false;
                }
                else {
                    if (produto[0] == '\0') {
                        continuar = false;
                    }
                }
            }
        }

        if (continuar) {
            cout << "Preço: ";
            if (!(cin >> preco)) {
                // invalido: encerra o loop sem usar break/continue
                continuar = false;
            }
            else {
                // atualiza estatísticas
                total += preco;
                ++count;
                if (preco > 1000.0) ++countOver1000;
                if (preco > mostExpPrice) {
                    mostExpPrice = preco;
                    strncpy(mostExpName, produto, sizeof(mostExpName));
                    mostExpName[sizeof(mostExpName) - 1] = '\0';
                }
            }

            // limpa o restante da linha (inclui '\n') para a próxima getline
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (continuar) {
            cout << "Deseja continuar [S/N]? ";
            if (!cin.getline(resposta, sizeof(resposta))) {
                continuar = false;
            }
            else {
                if (resposta[0] != 'S' && resposta[0] != 's')
                    continuar = false;
            }
        }
    }

    cout << "\nTotal da compra: R$" << fixed << setprecision(2) << total << "\n";
    cout << countOver1000 << " produtos custam mais de R$1000\n";
    if (count > 0)
        cout << mostExpName << " é o produto mais caro.\n";
    else
        cout << "Nenhum produto foi registrado.\n";

    return 0;
}