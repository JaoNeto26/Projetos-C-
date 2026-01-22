#include <iostream>
#include <string>
using namespace std;

/*
 Explicação geral:
 - Este programa demonstra o uso de um enum (mes), sobrecarga de operadores
   de entrada/saída (operator>> e operator<<) para esse enum e como comparar
   valores enumerados. O objetivo didático é permitir ler um mês (como número)
   e exibir uma mensagem indicando se o mês está dentro de um intervalo
   (período de aulas).
*/

// Declara um enum simples para os meses. Jan tem o valor 1 e os demais
// recebem valores sequenciais automaticamente (Fev = 2, Mar = 3, ... Dez = 12).
enum mes { Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez };

// Sobrecarga do operador << para imprimir um valor do tipo 'mes'.
// Recebe um ostream e um valor do enum e retorna o stream para encadeamento.
ostream& operator<<(ostream& out, mes m) {
    // nomes[0] fica vazio porque os meses começam em 1; assim o índice do enum
    // corresponde diretamente à posição no array de nomes.
    const string nomes[] = { "", "Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez" };

    // Verifica se 'm' está dentro do intervalo válido do enum antes de usar
    // como índice do array. As comparações funcionam porque o enum tem representação
    // integral subjacente (por padrão int).
    if (m >= Jan && m <= Dez)
        out << nomes[m];   // imprime a abreviação do mês correspondente
    else
        out << "Mês inválido"; // caso defensivo: evita acessar nomes fora do array

    return out; // permite encadear operações de saída (ex.: cout << atual << endl;)
}

// Sobrecarga do operador >> para ler um mês como número (1..12).
// Lê um inteiro do stream e, se estiver no intervalo 1..12, converte para 'mes'.
istream& operator>>(istream& in, mes& m) {
    int valor;
    in >> valor; // tenta ler um inteiro

    // Nota importante (gotcha): se a leitura falhar (entrada não-numérica),
    // o estado do stream fica com failbit e 'valor' não é confiável.
    // Aqui o código não verifica in.fail(); em caso de falha o enum permanece
    // possivelmente inalterado e o failbit permanece setado na stream.
    if (valor >= 1 && valor <= 12)
        m = static_cast<mes>(valor); // converte o inteiro para o enum
    else
        m = Jan; // comportamento escolhido: atribui um valor padrão (Jan)

    return in; // retorna o stream para permitir encadeamento (ex.: cin >> atual;)
}

int main() {
    system("chcp 1252>nul"); 
   

    mes inicio = Mar; // início do semestre (Março)
    mes fim = Jun;    // fim do semestre (Junho)
    mes atual;

    cout << "Digite o número do mês atual (1 a 12): ";
    cin >> atual; // usa operator>> sobrecarregado para ler um 'mes' a partir de um número

    // Aqui comparamos enums diretamente; como os valores foram definidos sequencialmente,
    // comparar (atual >= inicio && atual <= fim) é válido e significa "entre Mar e Jun".
    if (atual >= inicio && atual <= fim)
        cout << "Você está em período de aulas.\n";
    else
        cout << "Férias!\n";

    // Ao imprimir, operator<< converte o enum para sua forma textual (abreviação).
    cout << "Mês informado: " << atual << endl;

    return 0;
}