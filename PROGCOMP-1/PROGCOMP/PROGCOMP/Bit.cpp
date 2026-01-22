#include <iostream>

#include "Random.h"
#include "tela.h"
using namespace std;


// Retorna os 16 bits menos significativos de um inteiro de 32 bits.
// Útil para separar a parte baixa de um valor maior.
unsigned short Bitbaixo(unsigned int Bit) {
    short bits = Bit;
    return bits;
}

// Retorna os 16 bits mais significativos de um inteiro de 32 bits.
// Útil para separar a parte alta de um valor maior.
unsigned short Bitalto(unsigned int Bit) {
    short bits;
    bits = Bit >> 16;
    return bits;
}

// Testa se um bit específico está ligado (1) em um valor de 8 bits.
// Retorna true se o bit na posição 'number' estiver ligado, false caso contrário.
bool TestarBit(unsigned char test, unsigned char number) {
    int mask = 1;
    mask = mask << number;
    if (test & mask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Liga (seta para 1) o bit na posição 'position' em 'status'.
// Retorna o novo valor de status com o bit ligado.
unsigned char Ligarbit(unsigned char status, unsigned char position) {
    unsigned char newstatus = status | (1 << position);
    return newstatus;
}

// Desliga (seta para 0) o bit na posição 'position' em 'status'.
// Retorna o novo valor de status com o bit desligado.
unsigned char Desligarbit(unsigned char status, unsigned char position) {
    unsigned char newstatus = status & ~(1 << position);
    return newstatus;
}