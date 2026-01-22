#include <iostream>
using namespace std;

/* Ponteiros pra funções podem ser usados para simplificar códigos que devem
escolher uma dentre várias funções com base no valor de uma variável. Por
exemplo, considere o trecho de código abaixo:
Uma alternativa para o código acima é criar um vetor de ponteiros para
funções, de forma que o valor da variável num seja usado para chamar a função
adequada:
Construa um programa que use um vetor de ponteiros para funções para
implementar a seleção de uma opção de Menu. Cada vez que o usuário fizer
uma escolha, uma mensagem apropriada deve ser exibida por uma função.
*/

void Inserir()
{
    cout << "Opcao Inserir selecionada.\n";
}

void Remover()
{
    cout << "Opcao Remover selecionada.\n";
}

void Buscar()
{
    cout << "Opcao Buscar selecionada.\n";
}

void Sair()
{
    cout << "Encerrando o sistema...\n";
}

int main()
{
    void (*menu[])(void) = { Inserir, Remover, Buscar, Sair };

    cout << "Menu do Sistema\n";
    cout << "1) Inserir\n";
    cout << "2) Remover\n";
    cout << "3) Buscar\n";
    cout << "4) Sair\n";
    cout << "Escolha: ";

    int escolha;
    cin >> escolha;

    menu[escolha - 1]();

}
