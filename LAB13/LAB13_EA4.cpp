#include <iostream>
using namespace std;

enum dia { DOM, SEG, TER, QUA, QUI, SEX, SAB };

int main()
{
    system("chcp 1252>nul");
    /*
    é a declaração de uma matriz de caracteres (array bidimensional) — ou seja, 
    uma “tabela” de letras usada para armazenar várias palavras curtas.
    Em resumo
    👉 dias é um vetor de 7 strings, e
    👉 cada string pode ter até 9 caracteres + o terminador '\0' (que marca o fim da string em C/C++).
    dias =
        [
          ['D','o','m','i','n','g','o','\0', ...],
          ['S','e','g','u','n','d','a','\0', ...],
          ['T','e','r','c','a','\0', ...],
          ...
        ]
    */
    char dias[7][10] =
    {
        "Domingo",
        "Segunda",
        "Terca",
        "Quarta",
        "Quinta",
        "Sexta",
        "Sabado"
    };

    for (dia d = DOM; d <= SAB; d = dia(d + 1))
        cout << dias[d] << endl;

    return 0;
}
