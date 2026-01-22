#define _CRT_SECURE_NO_WARNINGS
#include "estoque.h"
static const int INITIAL_CAP = 4;

// ------------------------------------------------------------
// Inicializa estrutura
// ------------------------------------------------------------
void estoque_inicializar(Estoque& e) {
    e.dados = nullptr;
    e.capacidade = 0;
    e.tamanho = 0;
    e.expressoes = 0;
}

// ------------------------------------------------------------
// Expansão do vetor dinâmico
// ------------------------------------------------------------
static void expandir(Estoque& e) {

    e.expressoes++;
    int newCap = (e.capacidade == 0 ? INITIAL_CAP : e.capacidade + 2 * e.expressoes);

    Produto* novo = new Produto[newCap];

    for (int i = 0; i < newCap; i++) {
        novo[i].valido = false;
        novo[i].nome[0] = '\0';
        novo[i].preco = 0;
        novo[i].quantidade = 0;
    }

    for (int i = 0; i < e.tamanho; i++) {
        novo[i] = e.dados[i];
    }

    delete[] e.dados;

    e.dados = novo;
    e.capacidade = newCap;
}

// ------------------------------------------------------------
// Normalização de nomes
// ------------------------------------------------------------
void normalizar_nome(const char* src, char* dest, int maxlen) {

    int i = 0, j = 0;

    while (src[i] && isspace((unsigned char)src[i])) i++;

    for (; src[i] && j < maxlen - 1; i++) {

        char c = src[i];

        if (isspace((unsigned char)c)) {
            if (j > 0 && dest[j - 1] != ' ')
                dest[j++] = ' ';
        }
        else {
            dest[j++] = tolower((unsigned char)c);
        }
    }

    if (j > 0 && dest[j - 1] == ' ') j--;

    dest[j] = '\0';

    int len = strlen(dest);
    if (len > 1 && dest[len - 1] == 's')
        dest[len - 1] = '\0';
}

// ------------------------------------------------------------
// CARREGAR estoque do arquivo BINÁRIO
// ------------------------------------------------------------
void estoque_carregar(Estoque& e, const char* nomeArquivo) {

    ifstream fin(nomeArquivo, ios::binary);

    if (!fin.is_open()) {
        estoque_inicializar(e);
        estoque_salvar(e, nomeArquivo);
        return;
    }

    fin.seekg(0, ios::end);
    int size = fin.tellg();
    fin.seekg(0, ios::beg);

    int count = size / sizeof(Produto);

    if (count <= 0) return;

    e.dados = new Produto[count];
    e.capacidade = count;
    e.tamanho = count;

    for (int i = 0; i < count; i++) {
        fin.read((char*)&e.dados[i], sizeof(Produto));
        e.dados[i].valido = true;         
    }

    fin.close();
}

// ------------------------------------------------------------
// Salvar estoque
// ------------------------------------------------------------
void estoque_salvar(const Estoque& e, const char* nomeArquivo) {

    ofstream fout(nomeArquivo, ios::binary | ios::trunc);

    for (int i = 0; i < e.tamanho; i++) {
        fout.write((char*)&e.dados[i], sizeof(Produto));
    }

    fout.close();
}

// ------------------------------------------------------------
// Listar
// ------------------------------------------------------------
void estoque_listar(const Estoque& e) {
    if (e.dados == nullptr) {
        cout << "O Esotque está vazio, por favor Adicionar" << endl;
    }
    else {
        cout << "\nListagem de produtos:" << endl;

        for (int i = 0; i < e.tamanho; i++) {
            if (e.dados[i].valido) {
                cout << setw(2) << (i + 1) << " ) "
                    << setw(12) << left << e.dados[i].nome
                    << " - R$ " << fixed << setprecision(2)
                    << e.dados[i].preco
                    << " - " << e.dados[i].quantidade << " und.\n";
            }
        }
    }
}

// ------------------------------------------------------------
// Procurar produto
// ------------------------------------------------------------
int estoque_procurar(const Estoque& e, const char* nome_normalizado) {
    char temp[NAME_MAX];

    for (int i = 0; i < e.tamanho; i++) {
        if (e.dados[i].valido) {
            normalizar_nome(e.dados[i].nome, temp, NAME_MAX);
            if (strcmp(temp, nome_normalizado) == 0)
                return i;
        
        }

    }
    return -1;
}

// ------------------------------------------------------------
// Adicionar produto
// ------------------------------------------------------------
void estoque_adicionar(Estoque& e, const char* nome_orig, double preco, int qtd) {

    char norm[NAME_MAX];
    normalizar_nome(nome_orig, norm, NAME_MAX);

    if (e.capacidade == 0 || e.dados == nullptr)
        expandir(e);

    int idx = estoque_procurar(e, norm);

    if (idx != -1) {
        e.dados[idx].quantidade += qtd;
        e.dados[idx].preco = preco;
        return;
    }

    if (e.tamanho >= e.capacidade)
        expandir(e);

    int pos = e.tamanho++;
    strcpy(e.dados[pos].nome, norm);
    e.dados[pos].preco = preco;
    e.dados[pos].quantidade = qtd;
    e.dados[pos].valido = true;
}

// ------------------------------------------------------------
// Excluir deslocando
// ------------------------------------------------------------
void estoque_excluir(Estoque& e, int indice) {

    if (indice < 0 || indice >= e.tamanho) return;

    for (int i = indice; i < e.tamanho - 1; i++) {
        e.dados[i] = e.dados[i + 1];
    }

    e.tamanho--;
    e.dados[e.tamanho].valido = false;
}

// ------------------------------------------------------------
// Verificar pedido
// ------------------------------------------------------------
bool estoque_verificar_pedido(const Estoque& e,
    const char nomes[][NAME_MAX],
    const int quant[], int n) {

    char norm[NAME_MAX];
    bool ok = true;

    for (int i = 0; i < n; i++) {

        normalizar_nome(nomes[i], norm, NAME_MAX);
        int idx = estoque_procurar(e, norm);

        if (idx == -1) {
            cout << nomes[i] << ": Produto inexistente.\n";
            ok = false;
        }
        else if (e.dados[idx].quantidade < quant[i]) {
            cout << nomes[i] << ": Solicitado = "
                << quant[i] << " / Em estoque = "
                << e.dados[idx].quantidade << "\n";
            ok = false;
        }
    }

    return ok;
}

// ------------------------------------------------------------
// Aplicar pedido
// ------------------------------------------------------------
void estoque_aplicar_pedido(Estoque& e,
    const char nomes[][NAME_MAX],
    const int quant[], int n) {

    char norm[NAME_MAX];

    for (int i = 0; i < n; i++) {

        normalizar_nome(nomes[i], norm, NAME_MAX);
        int idx = estoque_procurar(e, norm);

        if (idx != -1) {
            e.dados[idx].quantidade -= quant[i];
        }
    }
}
