#include <iostream>
using namespace std;

int main() {
    system("chcp 1252>nul");

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

    // Mesmos critérios do exercício anterior
    bool aprovado;

    // Verificação usando ifs aninhados (sem usar &&)
    if (F <= 0.25 * CH) {
        if (MF >= 6.0) {
            if (N4 >= 5.0) {
                aprovado = true;
            }
            else {
                aprovado = false;
            }
        }
        else {
            aprovado = false;
        }
    }
    else {
        aprovado = false;
    }

    if (aprovado)
        cout << "Aluno aprovado (ifs aninhados)." << endl;
    else
        cout << "Aluno reprovado (ifs aninhados)." << endl;

    return 0;
}