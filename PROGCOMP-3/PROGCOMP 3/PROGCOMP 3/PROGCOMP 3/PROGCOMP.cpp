#include "estoque.h"
#include "recibo.h"

void mostrar_menu();

int main() {

    Estoque estoque;
    estoque_inicializar(estoque);

    const char* nomeArquivo = "estoque.bin";
    estoque_carregar(estoque, nomeArquivo);

    char opcao[10];
    bool rodando = true;

    while (rodando) {

        mostrar_menu();
        cin >> opcao;

        char c = toupper(opcao[0]);

        if (c == 'P') {
            cout << "Arquivo de pedido (.txt): ";
            char nomePedido[200];
            cin >> nomePedido;

            ifstream fin(nomePedido);
            if (!fin.is_open()) {
                cout << "Arquivo não encontrado.\n";
            }


            // --- IGNORA TITULO ---
            char buffer[256];
            fin.getline(buffer, 256);
            fin.getline(buffer, 256);
            

            const int MAX_ITENS = 100;
            char nomes[MAX_ITENS][NAME_MAX];
            int quants[MAX_ITENS];
            int n = 0;

            while (fin >> nomes[n] >> quants[n] && n < 100)
                n++;

            fin.close();

            bool pedido_valido = estoque_verificar_pedido(estoque, nomes, quants, n);

            if (!pedido_valido) {
                cout << "Pedido falhou!\n";
            }

            // só entra aqui se pedido_valido == true
            if (pedido_valido) {
                if (gerar_recibo(nomePedido, estoque, nomes, quants, n)) {
                    estoque_aplicar_pedido(estoque, nomes, quants, n);
                    cout << "Pedido concluído!\n";
                }
            }
        }
        else if (c == 'A') {
            char prod[NAME_MAX];
            double preco;
            int qtd;
            
            cout << "Adicionando..." << endl;
            cout << "---------------" << endl;

            cout << "Produto: ";
            cin.ignore();
            cin.getline(prod, NAME_MAX);
            

            cout << "Preço: ";
            cin >> preco;

            cout << "Quantidade: ";
            cin >> qtd;

            estoque_adicionar(estoque, prod, preco, qtd);
            cout << "\"" << prod << "\" foi Adicionado no estoque! " << endl;
        }
        else if (c == 'E') {
            if (estoque.tamanho == 0) {
                cout << "não possui nenhum item a ser excluido" << endl;
            }
            else {
                for (int i = 0; i < estoque.tamanho; i++) {
                    if (estoque.dados[i].valido)
                        cout << (i + 1) << ") " << estoque.dados[i].nome << "\n";
                }

                int num;
                char ch;
                cout << "Número: ";
                cin >> num;
                cout << "Deseja excluir \"" << estoque.dados[num-1].nome << "\" do estoque? (S/N): ";
 
                if ((cin >> ch) && (ch == 'S' || ch == 's')) {
                    estoque_excluir(estoque, num - 1);
                    cout << "O Item \"" << estoque.dados[num-1].nome << "\" foi excluido com Sucesso!" << endl;
                }
                else if ((ch == 'N' || ch == 'n')) {
                    cout << "Item \"" << estoque.dados[num-1].nome << "\" não foi excluido" << endl;
                }
                else {
                    cout << "opção invalida!" << endl;
                }

            }
            }
        else if (c == 'L') {
            estoque_listar(estoque);
        }
        else if (c == 'S') {
            estoque_salvar(estoque, nomeArquivo);
            cout << "Saindo...\n";
            rodando = false;
        }
    }

    return 0;
}

void mostrar_menu() {
    cout << "==================\n";
    cout << "Salgadinhos & Cia\n";
    cout << "==================\n";
    cout << "[P]edir\n[A]dicionar\n[E]xcluir\n[L]istar\n[S]air\n";
    cout << "==================\n";
    cout << "Opção: ";
}