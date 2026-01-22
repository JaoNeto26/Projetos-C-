#include <ctime>
#include <iostream>

#include "bit.h"
#include "tela.h"
using namespace std;


// Inicializa o gerador de números aleatórios usando o tempo atual como semente.
// Deve ser chamada uma vez antes de usar Rand32() para garantir aleatoriedade.
void Srand32() {
    srand((unsigned int)time(NULL));
}

// Gera e retorna um número aleatório de 32 bits.
// Combina várias chamadas à função rand() para formar um valor de 32 bits.
unsigned int Rand32() {
    unsigned int bitalto = rand();           // Gera parte alta inicial
    bitalto = bitalto << 15;                 // Desloca para abrir espaço para mais bits
    bitalto = (bitalto | rand()) << 1;       // Adiciona mais bits aleatórios
    bitalto = (bitalto | (rand() % 2)) << 1; // Adiciona mais 1 bit aleatório
    bitalto = (bitalto | (rand() % 2));      // Adiciona o último bit aleatório
    return bitalto;                          // Retorna o valor final de 32 bits
}