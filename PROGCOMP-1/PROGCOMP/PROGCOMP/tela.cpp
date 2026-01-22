#include <iostream>
#include <ctime>


#include "bit.h"
#include "Random.h"

using namespace std;

// Desenha um pixel na tela, usando cor verde se ligado e vermelho se desligado.
void desenharPixel(bool ligado) {
    unsigned char QUADRADO = 254;
    if (ligado)
        cout << "\33[1;32m " << QUADRADO << "\033[m"; // pixel ligado (verde)
    else
        cout << "\33[0;31m " << QUADRADO << "\033[m"; // pixel desligado (vermelho)
}

// Desenha uma linha de 8 pixels, um para cada bit do valor.
// Chama recursivamente para cada bit da linha.
void desenharLinha(unsigned char valor, int bit = 7) {
    if (bit >= 0) {
        bool ligado = (valor >> bit) & 1; // verifica se o bit está ligado
        desenharPixel(ligado);
        desenharLinha(valor, bit - 1); // próximo bit
    }
}

// Desenha uma "tela" de 1 linha (8 pixels) com moldura e numeração dos bits.
void desenharTela(unsigned char valor) {
    cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl;
    cout << "\xBA";
    desenharLinha(valor);
    cout << " \xBA" << endl;
    cout << "\xC8 7 6 5 4 3 2 1 0 \xBC" << endl;
}

// Desenha uma tela de 4 linhas (32 bits), cada linha com 8 bits, usando moldura.
void tela(unsigned int frango) {
    unsigned char N1, N2, N3, N4;
    N4 = frango >> 24;
    N3 = frango >> 16;
    N2 = frango >> 8;
    N1 = frango;
    cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB" << endl;
    cout << "\xBA"; desenharLinha(N1);  cout << " \xBA\n";
    cout << "\xBA"; desenharLinha(N2);  cout << " \xBA\n";
    cout << "\xBA"; desenharLinha(N3);  cout << " \xBA\n";
    cout << "\xBA"; desenharLinha(N4);  cout << " \xBA\n";
    cout << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC" << endl;
}

// Atualiza uma das 4 linhas (8 bits) de um valor de 32 bits, inserindo 'fita' na linha indicada.
// linha = 0 (menos significativa), 1, 2, 3 (mais significativa)
unsigned int atualizar(unsigned int bit32, unsigned char fita, int linha) {
    unsigned int fita32 = fita;
    unsigned int maskara = 0;
    if (linha == 3) {
        bit32 = bit32 & ~(maskara);
        fita32 = fita32 << 24;
        bit32 = bit32 | fita32;
    }
    else {
        if (linha == 2) {
            bit32 = bit32 & ~((maskara) << 8);
            fita32 = fita32 << 16;
            bit32 = bit32 | fita32;
        }
        else {
            if (linha == 1) {
                bit32 = bit32 & ~((maskara) << 16);
                fita32 = fita32 << 8;
                bit32 = bit32 | fita32;
            }
            else {
                bit32 = bit32 & ~((maskara) << 24);
                bit32 = bit32 | fita32;
            }
        }
    }
    
    return bit32;
}   

// Desenha um pixel "hacker", usando um caractere diferente dependendo do bit.
// Cor verde se ligado, vermelho se desligado.
void desenharPixelHacker(bool ligado, int carac) {
    unsigned char caractere = (int)carac;
    if (ligado)
        cout << "\33[1;32m " << caractere << "\033[m"; // pixel ligado
    else
        cout << "\33[0;31m " << caractere << "\033[m"; // pixel desligado
}

// Desenha uma linha "hacker" de 8 bits, usando caracteres especiais para cada posição de bit.
void desenharLinhaHacker(unsigned char valor, int bit = 7) {
    if (bit >= 0) {
        bool ligado = (valor >> bit) & 1;
        if (bit == 5) {
            desenharPixelHacker(ligado, 74);      // 'J'
        }
        else {
            if (bit == 4 || bit == 2) {
                desenharPixelHacker(ligado, 111); // 'o'
            }
            else {
                if (bit == 3) {
                    desenharPixelHacker(ligado, 132); // caractere especial ä
                }
                else {
                    desenharPixelHacker(ligado, 254); // bloco cheio
                }
            }
        }
        desenharLinhaHacker(valor, bit - 1);
    }
}

// Desenha uma linha "hacker" a partir de um valor short (16 bits), usando caracteres especiais.
// (Nota: só desenha os 8 bits mais altos)
void LinhaHacker(short valor) {
    int bit = 7;
    if (bit >= 0) {
        bool ligado = (valor >> bit) & 1;
        if (bit == 5) {
            desenharPixelHacker(ligado, 74);
        }
        else {
            if (bit == 4 || bit == 2) {
                desenharPixelHacker(ligado, 111);
            }
            else {
                if (bit == 3) {
                    desenharPixelHacker(ligado, 132);
                }
                else {
                    desenharPixelHacker(ligado, 254);
                }
            }
        }
        desenharLinhaHacker(valor, bit - 1);
    }
}

// Desenha duas linhas "hacker" a partir de um valor de 16 bits, uma para cada byte.
void hackear(unsigned short linha) {
    desenharLinhaHacker(linha);
    cout << endl;
    desenharLinhaHacker(linha >> 8);
    cout << endl;
}