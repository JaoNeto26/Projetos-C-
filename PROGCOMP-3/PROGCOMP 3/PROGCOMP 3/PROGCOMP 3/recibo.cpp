#include "recibo.h"
#include "estoque.h"


// ------------------------------------------------------------
// Montar nome do arquivo .nfc 
// ------------------------------------------------------------
static void montar_nome_recibo(const char* pedido, char* saida, int maxlen)
{
    int i = 0;
    while (i < maxlen - 1 && pedido[i] != '\0') {
        saida[i] = pedido[i];
        i++;
    }
    saida[i] = '\0';

    int len = (int)strlen(saida);

    // ------------------------------------------------------------
    // Encontra último separador de diretório
    // ------------------------------------------------------------
    int last_sep = -1;
    int k = 0;
    while (k < len) {
        char c = saida[k];
        if (c == '/' || c == '\\') {
            last_sep = k;
        }
        k++;
    }

    // ------------------------------------------------------------
    // Encontra último ponto após o separador
    // ------------------------------------------------------------
    int pos = -1;
    int j = len - 1;
    int encontrado = 0;

    while (j > last_sep && encontrado == 0) {
        if (saida[j] == '.') {
            pos = j;
            encontrado = 1;
        }
        j--;
    }

    // ------------------------------------------------------------
    // Substituir extensão
    // ------------------------------------------------------------
    if (pos != -1) {

        // garante que cabe ".nfc" no buffer
        if (pos + 4 < maxlen - 1) {
            saida[pos] = '.';
            saida[pos + 1] = 'n';
            saida[pos + 2] = 'f';
            saida[pos + 3] = 'c';
            saida[pos + 4] = '\0';
        }
        else {
            // não cabe -> apenas termina no ponto
            saida[pos] = '.';
            saida[pos + 1] = '\0';
        }
    }
    else {
        // não tem extensão → concatenar ".nfc"

        int cur = len;
        int limite = maxlen - 1;
        const char* ext = ".nfc";
        int e_pos = 0;

        while (cur < limite && ext[e_pos] != '\0') {
            saida[cur] = ext[e_pos];
            cur++;
            e_pos++;
        }
        saida[cur] = '\0';
    }
}


// ------------------------------------------------------------
// GERA RECIBO
// ------------------------------------------------------------
bool gerar_recibo(const char* nomeArquivoPedido, const Estoque& e,
    const char nomesPedido[][NAME_MAX], const int quant[], int nItens)
{
    char nomeRecibo[256];
    montar_nome_recibo(nomeArquivoPedido, nomeRecibo, 256);

    // AGRUPAR ITENS
    char itensNome[100][NAME_MAX];
    int itensQtde[100];
    int itensCount = 0;

    for (int i = 0; i < nItens; i++) {

        char norm[NAME_MAX];
        normalizar_nome(nomesPedido[i], norm, NAME_MAX);

        int pos = -1;         // índice do agrupado, se existir
        int achou = 0;       

        // procurar item já agrupado
        for (int j = 0; j < itensCount; j++) {
            if (strcmp(itensNome[j], norm) == 0) {
                pos = j;
                achou = 1;   
            }
        }

        if (achou == 0) {
            // adicionar novo item
            strcpy(itensNome[itensCount], norm);
            itensQtde[itensCount] = quant[i];
            itensCount++;
        }
        else {
            // somar quantidade ao item existente
            itensQtde[pos] += quant[i];
        }
    }

    // GERAR RECIBO
    ofstream fout(nomeRecibo);
    if (!fout.is_open()) return false;

    fout << fixed << setprecision(2);
    fout << "Recibo: " << nomeArquivoPedido << "\n";
    fout << "-----------------------------------------\n";

    double soma = 0;

    // USAR ITENS AGRUPADOS
    for (int i = 0; i < itensCount; i++) {

        int idx = estoque_procurar(e, itensNome[i]);

        int valido = 0;
        if (idx != -1) valido = 1;

        if (valido == 0) {
            fout << itensNome[i] << " - NÃO ENCONTRADO\n";
        }
        else {
            const Produto& p = e.dados[idx];
            double subtotal = p.preco * itensQtde[i];
            soma += subtotal;

            fout << setw(12) << left << p.nome
                << setw(4) << itensQtde[i] << "und "
                << setw(7) << p.preco << "/und "
                << "= R$" << subtotal << "\n";
        }
    }

    fout << "-----------------------------------------\n";
    fout << "Compra   = R$" << soma << "\n";

    double desconto = 0;
    if (soma >= 100) desconto = soma * 0.10;

    fout << "Desconto = R$" << desconto << "\n";
    fout << "Total    = R$" << (soma - desconto) << "\n";

    fout.close();
    return true;
}
