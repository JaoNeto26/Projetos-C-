#include <iostream>
#include "Text.h"
using namespace std;
// Definição do vetor de respostas
const char* response[] = {
    "> Olá! Posso ajudar você.",
    "> Qual sua dúvida?",
    "> Hoje está um ótimo dia para aprender C++!",
    "> Você conhece o joaozinho?",
    "> Ele é meu criador!",
    "> Sou um bot animado para ajudar.",
    "> Ajudo em mais alguma coisa?",
    "> bye bye ;)",
};
const int nresponse = sizeof(response) / sizeof(response[0]);


void Answer(int pos) {
    // Circula pelo vetor para garantir posição válida
    int index = pos % nresponse;
    if (index < 0) index += nresponse;
    cout << Vermelho << response[index] << limpar << endl;
}
