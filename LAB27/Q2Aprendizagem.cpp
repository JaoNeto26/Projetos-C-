#include <iostream>
using namespace std;

/* Muitas bibliotecas que implementam funcionalidades do sistema operacional
usam o conceito de função call-back. A função call-back é uma função que não é
chamada diretamente pelo seu código, mas sim pelo código da biblioteca, ou do
sistema onde está rodando.
Por exemplo, para saber todos os dispositivos controladores de jogos que estão
conectados em um computador, a biblioteca do sistema disponibiliza uma
função Enumerate que, ao invés de retornar os dados dos dispositivos, chama
uma função (função call-back) cada vez que encontra um dispositivo. Vamos
construir um programa para simular este cenário. O registro abaixo mantém os
dados de um dispositivo controlador de jogo.
struct Controller
{
 char name[40];
 int bottons;
 int axis;
};
Construa duas funções call-back chamadas ListarNomes e ListarEixos, para
exibir respectivamente os nomes dos controladores e as quantidades de eixos.
As funções devem funcionar com o código abaixo:
 */

struct Controller
{
    char name[40];
    int buttons;
    int axis;
};

//AQUI COMEÇA AS FUNÇÕES QUE EU FIZ
void ListarNomes(Controller c)
{
    cout << "Controlador: " << c.name << endl;
}

void ListarEixos(Controller c)
{
    cout << "Quantidade de eixos: " << c.axis << endl;
}
//AQUI TERMINA AS FUNÇÕES QUE EU FIZ


void Enumerate(void (*f)(Controller))
{
    Controller vet[] =
    {
        {"Joy", 8, 4},
        {"Xbox", 10, 3},
        {"Play", 8, 6}
    };

    for (auto i : vet)
        f(i);
}

int main()
{
    Enumerate(ListarNomes);
    Enumerate(ListarEixos);
}

