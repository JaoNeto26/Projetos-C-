#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    system("chcp 1252>nul");
    float n1, n2, n3, n4, media, mediaFinal;
    int faltas;
    const int totalAulas = 66;
    const int limiteFaltas = totalAulas * 0.25;  // 25% de 66 = 16.5 → considera 16

    cout << "Digite as notas e frequencia da disciplina\n";

    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << "Nota 3: ";
    cin >> n3;
    cout << "Faltas: ";
    cin >> faltas;

    /// Verifica reprovação por falta primeiro
    if (faltas > limiteFaltas) {
        cout << "Reprovado por falta.\n";
        return 0;
    }

    /// calcula média
    media = (n1 + n2 + n3) / 3;
    cout << fixed << setprecision(1) << media;

    /// Situações possíveis
    if (media >= 7)
        cout << "Aprovado.\n";

    else if (media >= 3) {  // Recuperação
        cout << "4ª Prova\n";
        cout << "Digite sua 4ª nota: ";
        cin >> n4;

        mediaFinal = (media + n4) / 2;

        if (mediaFinal >= 5)
            cout << "Aprovado.\n";
        else
            cout << "Reprovado NA P4.\n";
    }

    else
        cout << "REPOVRADO";

    return 0;
}
