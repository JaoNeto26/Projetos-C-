#ifndef ESTOQUE_H
#define ESTOQUE_H


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <cctype>

using namespace std;


// definição do produto em disco/na memória
const int NAME_MAX = 40;

struct Produto {
    char nome[NAME_MAX];
    double preco;
    int quantidade;
    bool valido; // true se este registro estiver ativo
};


struct Estoque {
    Produto* dados;     // ponteiro para vetor dinâmico
    int capacidade;     // capacidade atual (alocada)
    int tamanho;        // número de elementos válidos
    int expressoes;     // número de vezes que expandiu (para regra de expansão)
};

// inicializa estrutura (vazio)
void estoque_inicializar(Estoque& e);

// carrega estoque de arquivo binário; se não existir, cria arquivo com alguns produtos e carrega.
void estoque_carregar(Estoque& e, const char* nomeArquivo);

// salva estoque para arquivo binário (sobrescreve)
void estoque_salvar(const Estoque& e, const char* nomeArquivo);

// libera memória usada pelo estoque
void estoque_destruir(Estoque& e);

// listar produtos (na tela)
void estoque_listar(const Estoque& e);

// procura index por nome normalizado, retorna índice em [0..tamanho-1] ou -1 se não achar
int estoque_procurar(const Estoque& e, const char* nome_normalizado);

// adicionar ou atualizar produto (se existir atualiza preço e soma quantidades)
void estoque_adicionar(Estoque& e, const char* nome_orig, double preco, int qtd);

// excluir produto (marca valido = false; não reduz a capacidade)
void estoque_excluir(Estoque& e, int indice);

// verifica disponibilidade para um pedido (produto por produto)
// retorna true se todos disponíveis; caso contrário preenche mensagem de erro simples (stdout).
bool estoque_verificar_pedido(const Estoque& e, const char nomes[][NAME_MAX], const int quant[], int n);

// aplica um pedido (subtrai quantidades) — assume que já foi verificado
void estoque_aplicar_pedido(Estoque& e, const char nomes[][NAME_MAX], const int quant[], int n);

void normalizar_nome(const char* src, char* dest, int maxlen);



#endif // ESTOQUE_H
