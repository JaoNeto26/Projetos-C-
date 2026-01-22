#include "estoque.h"

// Gera recibo em arquivo .nfc (nomePedido + ".nfc")
// nomesPedido[] e quant[] têm nItens elementos e correspondem aos pedidos lidos.
// retorna true se criado com sucesso
bool gerar_recibo(const char* nomeArquivoPedido, const Estoque& e,
    const char nomesPedido[][NAME_MAX], const int quant[], int nItens);

