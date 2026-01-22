#pragma once
// TABELA DE CORES
#define Azul "\033[1;94m"
#define Vermelho "\033[1;91m"
#define Amarelo "\033[1;93m"
#define cinza "\033[1;90m"
#define Amarelo_BG "\033[43m" << "\033[30m"

#define limpar "\033[0m"


struct Text {
    char* vector;      // ponteiro para o texto (vetor dinâmico)
    int length;      // número de caracteres usados
    int capacity;   // tamanho máximo do vetor
};

void Create( Text* , int);
void Init(Text* t, const char*);
void Destroy(Text* t);
void Show(const Text* t);
void Print(const Text* t);
void Read(Text* t);
char CharAt(const Text* t, int pos);
void Grow(Text* t, int new_length);
void Add(Text* destination, const Text* src);
void Highlight(const Text* t);
void Boxed(Text* t);