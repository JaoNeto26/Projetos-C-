#include <iostream>
using namespace std;

int main() {
    system("chcp 1252>nul");

    // Entradas: CH (carga horária), MF (média final), N4 (nota da 4ª avaliação), F (faltas)
    int CH;
    double MF, N4;
    int F;

    cout << "CH (horas): ";
    cin >> CH;
    cout << "Média final (MF): ";
    cin >> MF;
    cout << "Nota da 4ª avaliação (N4): ";
    cin >> N4;
    cout << "Número de faltas (F): ";
    cin >> F;

    // Critérios adotados (exemplares):
    // - presença aceitável: faltas <= 25% da carga horária
    // - média mínima: MF >= 6.0
    // - nota mínima na 4ª avaliação: N4 >= 5.0
    bool presenca_ok = (F <= 0.25 * CH);
    bool media_ok = (MF >= 6.0);
    bool n4_ok = (N4 >= 5.0);

    // Expressão lógica usando operador &&
    bool aprovado = presenca_ok && media_ok && n4_ok;

    if (aprovado)
        cout << "Aluno aprovado (expressao com &&)." << endl;
    else
        cout << "Aluno reprovado (expressao com &&)." << endl;

    return 0;
}