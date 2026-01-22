#include <iostream>
#include <Windows.h>
#include <bitset>

// inclusão de bibliotecas
#include "bit.h"
#include "Random.h"
#include "tela.h"

using namespace std;


// Macros para facilitar a leitura e escrita
#define Print(X) cout << X      
#define Read(X) cin >> X        

int main()
{
    
    Srand32();                  // Inicializa o gerador de números aleatórios (provavelmente definido em Random.h)
    unsigned int Valortela = 0; // Variável que representa o estado da tela (bits)
    unsigned short BITalto, BITbaixo; // Variável que representa os Bits altos e baixos da variavel 'Valortela'
    unsigned char linha = 0;    // Variável para manipular uma linha de bits

    // Mostra a tela ligada (todos os bits invertidos)
    tela(~(Valortela));         // Exibe o estado da tela (função definida em tela.h)
    cout << "[+]Ligando tela...\n";
    Sleep(1500);                // Aguarda 1,5 segundos

    for (int i = 0; i < 10; i++)
    {
        system("cls");          // Limpa a tela do console
        tela(Rand32());         // Exibe a tela com um valor aleatório (Rand32 retorna um inteiro aleatório)
        cout << "[+]Ligando tela...\n"
             << "[+]Testando pixels...\n";
        Sleep(1000);            // Aguarda 1 segundo
    }

    // Desliga todos os pixels da tela
    system("cls");
    Print("\n");
    tela(Valortela);    // Exibe a tela desligada (todos os bits 0)
    Print("\n");
    cout << "[+]Ligando tela...\n"
        << "[+]Testando pixels...\n"
        << "[+]Teste concluído..." << endl;
    Print("\n");
    desenharTela(0);    // Desenha a tela com todos os bits desligados (função definida em tela.h)
    Print("\n");

    int num;
    char op = 0;
    // Loop de comandos até o usuário digitar 'S' (sair)
    while (op != 'S')
    {
        // Mostra o menu de comandos
        cout << "[L]igar [D]esligar [T]odos [N]enhum [E]nviar [S]air\n\n";
        cout << "> Comando: ";
        Read(op);   // Lê o comando do usuário

        if (op == 'L') {
            Read(num);          // Lê o número do bit a ligar
            linha = Ligarbit(linha, num); // Liga o bit correspondente (função definida em bit.h)
            // Atualiza a tela e exibe o resultado
            system("cls");
            Print("\n");
            tela(Valortela);
            Print("\n");
            cout << "[+]Ligando tela...\n"
                << "[+]Testando pixels...\n"
                << "[+]Teste concluído..." << endl;
            Print("\n");
            desenharTela(linha);
            Print("\n");
        }
        else if (op == 'D') {
            Read(num);          // Lê o número do bit a desligar
            linha = Desligarbit(linha, num); // Desliga o bit correspondente (função definida em bit.h)
            // Atualiza a tela e exibe o resultado
            system("cls");
            Print("\n");
            tela(Valortela);
            Print("\n");
            cout << "[+]Ligando tela...\n"
                << "[+]Testando pixels...\n"
                << "[+]Teste concluído..." << endl;
            Print("\n");
            desenharTela(linha);
            Print("\n");
        }
        else if (op == 'T') {
            // Liga todos os bits da linha
            linha = Ligarbit(linha, 0);
            linha = Ligarbit(linha, 1);
            linha = Ligarbit(linha, 2);
            linha = Ligarbit(linha, 3);
            linha = Ligarbit(linha, 4);
            linha = Ligarbit(linha, 5);
            linha = Ligarbit(linha, 6);
            linha = Ligarbit(linha, 7);
            system("cls");
            Print("\n");
            tela(Valortela);
            Print("\n");
            cout << "[+]Ligando tela...\n"
                << "[+]Testando pixels...\n"
                << "[+]Teste concluído..." << endl;
            Print("\n");
            desenharTela(linha);
            Print("\n");
        }
        else if (op == 'N') {
            // Desliga todos os bits da linha
            linha = Desligarbit(linha, 0);
            linha = Desligarbit(linha, 1);
            linha = Desligarbit(linha, 2);
            linha = Desligarbit(linha, 3); 
            linha = Desligarbit(linha, 4);
            linha = Desligarbit(linha, 5);
            linha = Desligarbit(linha, 6);
            linha = Desligarbit(linha, 7);
            system("cls");
            Print("\n");
            tela(Valortela);
            Print("\n");
            cout << "[+]Ligando tela...\n"
                << "[+]Testando pixels...\n"
                << "[+]Teste concluído..." << endl;
            Print("\n");
            desenharTela(linha);
            Print("\n");
        }
        else if (op == 'E') {
            Read(num);          // Lê o número da linha a atualizar
            Valortela = atualizar(Valortela, linha, num); // Atualiza o valor da tela com a linha modificada (função definida em bit.h)
            
            system("cls");
            Print("\n");
            tela(Valortela);
            Print("\n");
            cout << "[+]Ligando tela...\n"
                << "[+]Testando pixels...\n"
                << "[+]Teste concluído..." << endl;
            desenharTela(linha);
            Print("\n");
        }
    }

    // Finaliza o programa
    BITalto = Bitalto(Valortela);   // Obtém os 16 bits mais altos de Valortela (função definida em bit.h)
    BITbaixo = Bitbaixo(Valortela); // Obtém os 16 bits mais baixos de Valortela (função definida em bit.h)
    Print("\n");
    Print("[+] Acesso remoto em andamento... \n");
    Print("[+] Interceptado: " << bitset<32>(Valortela) << "\n");
    Print("[+] Tela hackeada... \n");

    // Simula um "hack" na tela
    Print("\n");
    hackear(BITbaixo); // Função que simula hackeamento (definida em tela.h)
    hackear(BITalto);
    Print("\n");

    Print("Joãozinho \"O Hacker\" esteve aqui!\a\a\a");
    Print("\n");
}
