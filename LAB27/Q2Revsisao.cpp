#include <iostream>
using namespace std;

/*

Construa uma função para exibir mensagens de erro de um sistema. Algumas
mensagens são direcionadas aos programadores, e neste caso elas devem ser
apresentadas de forma simples, em apenas uma linha de texto.
Outras mensagens são direcionadas aos usuários do sistema, e neste caso elas
devem ser decoradas e exibidas em várias linhas de texto.
Ao invés de construir um if para selecionar a forma de exibição da mensagem,
construa uma função ExibirErro que receba por parâmetro o número do erro,
uma descrição do erro e uma função de exibição. Construa funções de exibição
para refletir os dois cenários descritos anteriormente.
O programa principal deve ser semelhante ao código abaixo:

*/

void usuario(int codigo, const char* descricao);
void programador(int codigo, const char* descricao);

void ExibirErro(int codigo, const char* descricao,
    void (*pf)(int, const char*))
{
    pf(codigo, descricao);
}

void usuario(int codigo, const char* descricao)
{
    cout << "A operação não pôde ser concluída!\n";
    cout << "Algum problema foi detectado no sistema que impossibilitou a\n";
    cout << "conclusão da tarefa. Contacte o desenvolvedor do sistema em\n";
    cout << "dev@sys.com e envie o relatório de erros abaixo.\n";
    cout << "-----------------------------\n";
    cout << "Relatório de Erros do Sistema\n";
    cout << "-----------------------------\n";
    cout << "Código: S" << codigo << endl;
    cout << "Descrição: " << descricao << endl;
}

void programador(int codigo, const char* descricao)
{
    cout << "Erro S" << codigo << ": " << descricao << "!" << endl;
}

int main()
{
    ExibirErro(1245,
        "falha na leitura do arquivo",
        usuario);

    ExibirErro(4521,
        "erro inesperado na inicialização",
        programador);

    return 0;
}
